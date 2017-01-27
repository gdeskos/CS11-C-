#include <iostream>
#include <vector> 
#include <algorithm>
#include "Point.hh"

using namespace std;

double circuitLength(const vector<Point> &points,const vector<int> &order);
vector<int> findShortestPath(const vector<Point> &points);

int main() 
{
    vector<Point> _points; _points.resize(3);
    vector<int>  _order; _order.resize(3);
    unsigned num_points,count;
    double xtmp,ytmp,ztmp;
    cin >> num_points;

    count=0;
    while(count<num_points)
    {
        //cout<<"Point "<<count<<":"<<endl;
        cin >> xtmp>>ytmp>>ztmp;
        _points.push_back(Point(xtmp,ytmp,ztmp));
        count++;
    }
    vector<int> shortest_path = findShortestPath(_points);
    //cout << "Best order:\t"<<shortest_path<<endl;
    cout << "Shortest distance:\t"<<circuitLength(_points,shortest_path)<<endl;
    return 0;
}

double circuitLength(const vector<Point> &points, const vector<int> &order)
{
    double sum=0.0;
    vector<int>::const_iterator it;
    it=order.begin();

    while(it!=order.end()-1){ 
        sum += points[*it].distanceTo(points[*(it+1)]);
        it++;
    }
        sum+= points[*order.end()].distanceTo(points[*order.begin()]);
    return sum;
}

vector<int> findShortestPath(const vector<Point> &points)
{
   vector<int> best_path(points.size());
   vector<int> path(points.size());
   for (unsigned i=0; i<path.size();i++)
   {
    path[i]=i;
   }
   double cur_distance;
   double shortest_distance=circuitLength(points,path);
   // Set best path to the current path
   best_path = path;
   while (next_permutation(path.begin(),path.end()))
   {
        cur_distance = circuitLength(points,path);
        if (cur_distance < shortest_distance)
        {
            shortest_distance =cur_distance;
            best_path =path;
        }
   }

   return best_path;
}

