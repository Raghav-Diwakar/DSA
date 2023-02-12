#include <iostream>
#include <stack>

using namespace std;
int main()
{
    stack<int> S;
    // S.push(2);
    // S.push(1);
    // S.push(3);
    // S.push(5);
    // S.push(4);
    // cout << S.top() << endl;
    // // S.pop();
    // // cout<<S.top()<<endl;
    // cout << S.size() << endl;
    // cout << S.empty() << endl;


    // For converting Number to binary
    int N;
    cin >> N;
    while (N != 0)
    {
        int r ;
        r = N%2 ;
        S.push(r);
        N = N / 2 ;
    }
    while (!S.empty())
    {
        int x ;
        x = S.top();
        S.pop();
        cout<<x;

    }
    
}