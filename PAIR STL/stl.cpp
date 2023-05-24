#include<iostream>
#include<vector>
using namespace std ;

int main()
{
    int n ;
    cin>>n;
    int a ;
    vector<int>v;
    for (int i = 0  ;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    int q1 ;
    cin>>q1;
    v.erase(v.begin()+q1-1);
    
    for (auto i : v)
        cout<<i<<" ";
}