#include <iostream>
#include <string>
#include "stacktype.h"
using namespace std;

int main()
{
    StackType<int> stck;

    StackType<int> stck1;

    StackType<int> stck2;

    if(stck.IsEmpty()==true)
    {
        cout<<"Stack is Empty"<<endl;
    }
    else
    {
        cout<<"Stack is not Empty"<<endl;
    }
    stck.Push(5);
    stck.Push(7);
    stck.Push(4);
    stck.Push(2);

    if(stck.IsEmpty()==true)
    {
        cout<<"Stack is Empty"<<endl;
    }
    else
    {
        cout<<"Stack is not Empty"<<endl;
    }

    if(stck.IsFull()==true)
    {
        cout<<"Stack is Full"<<endl;
    }
    else
    {
        cout<<"Stack is not Full"<<endl;
    }

    while(!stck.IsEmpty())
    {
        stck1.Push(stck.Top());
        stck.Pop();
    }
    while(!stck1.IsEmpty())
    {
        stck2.Push(stck1.Top());
        cout<<stck1.Top();
        stck1.Pop();
    }
    //push 3
    cout<<endl;
    stck2.Push(3);
    while(!stck2.IsEmpty())
    {
        stck1.Push(stck2.Top());
        stck2.Pop();
    }
    while(!stck1.IsEmpty())
    {
        stck.Push(stck1.Top());
        cout<<stck1.Top();
        stck1.Pop();
    }

    cout<<endl;
    //stack full or not
    if(stck.IsFull()==true)
    {
        cout<<"Stack is Full"<<endl;
    }
    else
    {
        cout<<"Stack is not Full"<<endl;
    }
    stck.Pop();
    stck.Pop();

    cout<<stck.Top()<<endl;

    //Balancing parenthesis

    StackType<char> a;

    string str;

    //1st
    str="()";

    for(int i=0;i<str.length();i++)
    {
        if(str.at(i)=='(')
        {
            char d=str.at(i);
            a.Push(d);
        }
        else if(str.at(i)==')')
        {
            a.Pop();
        }

    }
    if(a.IsEmpty())
    {
        cout<<"Balanced"<<endl;
    }
    else
    {
        cout<<"Not Balanced"<<endl;
    }
    //2nd
    str="(())()(()())()";

    for(int i=0;i<str.length();i++)
    {
        if(str.at(i)=='(')
        {
            char d=str.at(i);
            a.Push(d);
        }
        else if(str.at(i)==')')
        {
            a.Pop();
        }

    }
    if(a.IsEmpty())
    {
        cout<<"Balanced"<<endl;
    }
    else
    {
        cout<<"Not Balanced"<<endl;
    }
    //3rd
    str="(())()((()";

    for(int i=0;i<str.length();i++)
    {
        if(str.at(i)=='(')
        {
            char d=str.at(i);
            a.Push(d);
        }
        else if(str.at(i)==')')
        {
            a.Pop();
        }

    }
    if(a.IsEmpty())
    {
        cout<<"Balanced"<<endl;
    }
    else
    {
        cout<<"Not Balanced"<<endl;
    }

    //4th
    str="(())))((()";

    for(int i=0;i<str.length();i++)
    {
        if(str.at(i)=='(')
        {
            char d=str.at(i);
            a.Push(d);
        }
        else if(str.at(i)==')')
        {
            a.Pop();
        }

    }
    if(a.IsEmpty())
    {
        cout<<"Balanced"<<endl;
    }
    else
    {
        cout<<"Not Balanced"<<endl;
    }



}
