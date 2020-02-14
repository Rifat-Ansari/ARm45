#include "Time.h"

Time::Time(){
    hour=00;
    mint=00;
    sec=00;


}
Time::Time(int hour,int mint,int sec){

    this->hour=hour;
    this->mint=mint;
    this->sec=sec;


}

void Time::print(){
    cout<<hour<<"hr: "<<mint<<"min: "<<sec<<"sec"<<endl;


}
Time Time::operator+(Time f){
    Time t;
    t.hour=hour+f.hour;
    t.mint=mint+f.mint;
    t.sec=sec+f.sec;
    if(t.sec>60)
    {
        t.sec=t.sec-60;
        t.mint=t.mint+1;
    }
    if(t.mint>60)
    {
        t.mint=t.mint-60;
        t.hour=t.hour+1;
    }

    return t;




}
