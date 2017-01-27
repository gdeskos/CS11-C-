#include "tsp-ga.hh"
#include <cstdlib>
#include <algorithm>
#include <iostream>
TSPGenome::TSPGenome()
{
}

TSPGenome::TSPGenome(int numPoints)
{
    // Initialize order vector by pushing back [0 1 2 ... numPoints-1]
    // and then use the random_shuffle() algorithm to randomly permute
    // the vector
   for (int i=0;i<numPoints;i++)
   {
        order.push_back(i);
   }
   // Re-shuffle 
   std::random_shuffle(order.begin(),order.end());

   // Initialize the circuit length to the negatie dummy value -1 
   circuitLength=-1;
}

TSPGenome::TSPGenome(const std::vector<int> & ord)
{
   order.insert(order.end(),ord.begin(),ord.begin()); 
   // Initialize the circuit length to the negatie dummy value -1 
   circuitLength=-1;
}

std::vector<int> TSPGenome::get_order() const
{
    return order;
}

double TSPGenome::get_circuitLength() const
{
    return circuitLength;
}

void TSPGenome::computeCircuitLength(const std::vector<Point> &points)
{
    double sum=0.0;
    std::vector<int>::const_iterator it;
    it=order.begin();
    while(it!=order.end()-1){ 
        sum += points[*it].distanceTo(points[*(it+1)]);
        it++;
    }
        circuitLength += points[*order.end()].distanceTo(points[*order.begin()]); 
}

void TSPGenome::mutate()
{
   unsigned index_1, index_2;

   index_1=rand()%order.size();
   index_2=rand()%order.size();
   for (unsigned i=0; i<order.size();i++)
   {
        if (i==index_1){
            double tmp=order[index_1];
            order[index_1]=order[index_2];
            order[index_2]=tmp;
            break;
        }
   }
}
