#include <iostream>
#include <cassert>

#include "tsp-ga.hh"

TSPGenome crosslink(const TSPGenome &g1, const TSPGenome &g2)
{
    assert(g1.get_order().size()==g2.get_order().size()); 
    
    std::vector<int> ofs_ord; // Holds the new offspring's order
    std::vector<int>::iterator it1;       // iterator for ofs_ord
    std::vector<int>::const_iterator it2; // const iterator for g2
    unsigned i=rand()%g1.get_order().size();
    ofs_ord.insert(ofs_ord.end(),g1.get_order().begin(),g1.get_order().begin()+i-1);
    while(it2!=g2.get_order().end())
    {
        for(unsigned j=0; j<ofs_ord.end();j++)
        {
            if(ofs_ord[j]!=*it)
                
        }
        it2++;
    }
    
    TSPGenome offspring(ofs_ord);
    for (int i=0;i<10;i++){
    std::cout<<offspring.get_order()[i]<<std::endl;
    }
    
    return offspring; 
}

int main(int argc, char **argv)
{
    std::cout<<"===================================================================="<<std::endl;
    std::cout<<" This is a Genetic Algorithm solving the Traveling Salesman Problem"<<std::endl;
    std::cout<<"===================================================================="<<std::endl;
    //Initializing a tsp genome
    TSPGenome _tsp1(10);
    TSPGenome _tsp2(10);

    for (int i=0;i<10;i++){
    std::cout<<_tsp1.get_order()[i]<<std::endl;
    }
    for (int i=0;i<10;i++){
    std::cout<<_tsp2.get_order()[i]<<std::endl;
    }
    TSPGenome _tsp12=crosslink(_tsp1, _tsp2);

}
