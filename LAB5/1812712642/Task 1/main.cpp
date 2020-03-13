#include "UnsortedType.h"
#include <iostream>

using namespace std;

int main()
{


    int num;
    UnsortedType<int> a;
    cout<<"Values"<<endl;
    /*for(int i=0;i<4;i++)
    {
        cin>>num;
        a.InsertItem(num);
    }*/
    a.InsertItem(4);
    a.InsertItem(7);
    a.InsertItem(6);
    a.InsertItem(9);
    a.ResetList();
    for(int i=0; i<a.LengthIs(); i++)
    {
        a.GetNextItem(num);
        cout<<num<<endl;
    }
    cout<<"The length of the list is ="<<a.LengthIs()<<endl;
    a.InsertItem(1);
    a.ResetList();
    for(int i=0; i<a.LengthIs(); i++)
    {
        a.GetNextItem(num);
        cout<<num<<endl;
    }
    int q=4;

    if(a.RetrieveItem(q)==true)
    {
        cout<<"found"<<endl;
    }
    else
    {
        cout<<"Item is not found"<<endl;
    }

    int y=5;
    if(a.RetrieveItem(y)==true)
    {
        cout<<"found"<<endl;
    }
    else
    {
        cout<<"Item is not found"<<endl;
    }
    int z=9;
    if(a.RetrieveItem(z)==true)
    {
        cout<<"found"<<endl;
    }
    else
    {
        cout<<"Item is not found"<<endl;
    }
    int p=10;
    if(a.RetrieveItem(p)==true)
    {
        cout<<"found"<<endl;
    }
    else
    {
        cout<<"Item is not found"<<endl;
    }
    q=a.IsFull();
    if(q==true)
    {
        cout<<"List is Full"<<endl;
    }
    else
    {
        cout<<"List is not Full"<<endl;
    }
    cout<<"After deleting 5"<<endl;
    a.DeleteItem(5);
    q=a.IsFull();
    if(q==true)
    {
        cout<<"List is Full"<<endl;
    }
    else
    {
        cout<<"List is not Full"<<endl;
    }
    a.DeleteItem(1);
    a.ResetList();
    cout<<"After Deleting 1"<<endl;
    for(int i=0; i<a.LengthIs(); i++)
    {
        a.GetNextItem(num);
        cout<<num<<endl;
    }

    a.DeleteItem(6);
    a.ResetList();
    cout<<"After Deleting 6"<<endl;
    for(int i=0; i<a.LengthIs(); i++)
    {
        a.GetNextItem(num);
        cout<<num<<endl;
    }

    return 0;
}
