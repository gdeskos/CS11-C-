#include <iostream>
#include <cassert>

#include "tsp-ga.hh"

TSPGenome crosslink(const TSPGenome &g1, const TSPGenome &g2)
{
    assert(g1.get_order().size()==g2.get_order().size()); 
    
    std::vector<int> ofs_ord; // Holds the new offspring's order
    std::vector<int>::iterator it1;       // iterator for ofs_ord
    std::vector<int>::const_iterator it2; // const iterator for g2
    TSPGenome offspring(ofs_ord);
    
    return offspring;
}

void usage(const char *progname)
{
    std::cout<<"usage:"<<progname<<"\tpopulation generations keep mutate"<<std::endl;
    std::cout<<"population is a positive integer specifying the population size"<<std::endl;
    std::cout<<"generations is a positive integer specifying how many generations to run the GA for"<<std::endl;
    std::cout<<"keep is a floating point vlue in the range 0-1 that specifies the preserved percentage from generation to generation"<<std::endl;
    std::cout<<"mutate is a nonnegative floating-point value that "<<std::endl;
}

int main(int argc, char **argv)
{
    std::cout<<"===================================================================="<<std::endl;
    std::cout<<" This is a Genetic Algorithm solving the Traveling Salesman Problem"<<std::endl;
    std::cout<<"===================================================================="<<std::endl;
    usage(argv[0]);
}
