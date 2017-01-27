#ifndef TSP_GA_HH
#define TSP_GA_HH

#include <vector>
#include "Point.hh"

class TSPGenome{
    
    public:
        TSPGenome();              // Constructor that takes no arguments
        TSPGenome(int numPoints); // Constructor takes the number of points visited
        TSPGenome(const std::vector<int> &order); // Constructor that initiali

        std::vector<int> get_order() const;
        double get_circuitLength() const;
        void computeCircuitLength(const std::vector<Point> & points);
        void mutate(); //Mutator
            
    private:
        std::vector<int> order;
        double circuitLength;
};
#endif
