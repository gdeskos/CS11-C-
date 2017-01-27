#include <iostream>
#include <cmath>
#include "Point.hh"

double computeArea(Point &a, Point &b, Point &c)
{
    //Compute the sides
    double alpha, beta, gamma, s;

    alpha=a.distanceTo(b);
    beta=b.distanceTo(c);
    gamma=c.distanceTo(a);
    //Semi-perimeter
    s=0.5*(alpha+beta+gamma);
   
    if (fabs(alpha-beta)<gamma && gamma<alpha+beta) {
        return std::sqrt(s*(s-alpha)*(s-beta)*(s-gamma));
    }else{   
        return -666;
    }
}

int main()
{
    double x1,x2,x3;
    std::cout << "====================================================="<<std::endl;
    std::cout << "Computing the are of a triangle using Heron's Formula"<<std::endl;
    std::cout << "====================================================="<<std::endl;
    std::cout << "Point 1: ";
    std::cin>>x1>>x2>>x3;
    Point m_point1(x1,x2,x3);
    std::cout << "Point 2: ";
    std::cin>>x1>>x2>>x3;
    Point m_point2(x1,x2,x3);
    std::cout << "Point 3: ";
    std::cin>>x1>>x2>>x3;
    Point m_point3(x1,x2,x3);
    double Area;
    Area = computeArea(m_point1,m_point2,m_point3); 
    if (Area<0) 
    {
        std::cout<<"This triangle is degenerate"<<std::endl;
        return 1;
    }else{
    std::cout << "Area is: "<<computeArea(m_point1,m_point2,m_point3)<<std::endl;
        return 0;
    }
}
