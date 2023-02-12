#include<iostream>
#include<queue>
using namespace std ;
int main()
{
    // queue<int>Q;
    // Q.push(7);
    // Q.push(1);
    // Q.push(3);
    // Q.push(2);
    // Q.push(5);
    // Q.push(4);
    // cout<<Q.front()<<endl;
    // cout<<Q.size()<<endl;

    // Q.pop();
    // cout<<Q.front()<<endl;
    // cout<<Q.size()<<endl;

    
    queue<string>Q;
    Q.push("b");
    Q.push("a");
    Q.push("c");
    Q.push("e");
    Q.push("d");
    
    cout<<Q.front()<<endl;
    cout<<Q.size()<<endl;
    


    
    return 0 ;
}