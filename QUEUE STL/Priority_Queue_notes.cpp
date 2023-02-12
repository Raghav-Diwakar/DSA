#include<iostream>
#include <queue>
using namespace std;
int main()
{
    priority_queue<int>Maxpq ;
    Maxpq.push(25);
    Maxpq.push(2);
    Maxpq.push(3);
    Maxpq.push(66);
    Maxpq.push(12);
    Maxpq.push(89);
    Maxpq.push(7);
    Maxpq.push(10);
    while (!Maxpq.empty())
    {
        cout<<Maxpq.top()<<" ";
        Maxpq.pop();
    }

    cout<<endl<<endl;
    
    priority_queue<int,vector<int>,greater<int>>Minpq ;
    Minpq.push(25);
    Minpq.push(2);
    Minpq.push(3);
    Minpq.push(66);
    Minpq.push(12);
    Minpq.push(89);
    Minpq.push(7);
    Minpq.push(10);
    while (!Minpq.empty())
    {
        cout<<Minpq.top()<<" ";
        Minpq.pop();
    }
}