#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED
#include <iostream>
using namespace std;

class Time{

private:
    int hour;
    int mint;
    int sec;


public:
    Time();
    Time(int,int,int);
    Time operator+(Time);
    void print();





};
//#include "Time.tpp"
#endif // TIME_H_INCLUDED
