#include <iostream>
#include <cassert>

#include "tsp-ga.hh"

TSPGenome crosslink(const TSPGenome &g1, const TSPGenome &g2)
{
    assert(g1.get_order().size()==g2.get_order().size()); 
    
    std::vector<int> ofs_ord; // Holds the new offspring's order
    std::vector<int>::iterator it1;       // iterator for ofs_ord
    std::vector<int>::const_iterator it2; // const iterator for g2
}

int main(int argc, char **argv)
{
    std::cout<<"===================================================================="<<std::endl;
    std::cout<<" This is a Genetic Algorithm solving the Traveling Salesman Problem"<<std::endl;
    std::cout<<"===================================================================="<<std::endl;
    //Initializing a tsp genome
    TSPGenome _tsp1(10);
    TSPGenome _tsp2(10);
}
