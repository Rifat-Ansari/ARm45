#include "Time.h"
#include "Time.tpp"

#include <iostream>

using namespace std;

int main()
{


    Time t1(10,12,50);
    Time t2(22,59,60);
    t1.print();
    t2.print();
    Time t3;
    t3=t1+t2;
    t3.print();
    return 0;
}
