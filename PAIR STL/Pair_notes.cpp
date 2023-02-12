#include<iostream>
#include<vector>
using namespace std ;
int main()
{
    vector<pair<int,int>>v;
    v.push_back(make_pair(1,10));
    v.push_back(make_pair(2,20));
    v.push_back(make_pair(3,30));
    v.push_back(make_pair(4,40));

    for (int i = 0 ; i < 4 ; i++)
    {
        cout<<"("<<v[i].first<<",";
        cout<<v[i].second<<")"<<" , ";
    }
    cout<<endl<<endl;

    // we can also make int and string pair 
    vector<pair<int,string>>p;
    p.push_back(make_pair(1,"a"));
    p.push_back(make_pair(2,"b"));
    p.push_back(make_pair(3,"c"));
    p.push_back(make_pair(4,"d"));

    for (int j = 0 ; j < p.size(); j++)
    {
        cout<<"("<<p[j].first<<",";
        cout<<p[j].second<<")"<<" , ";
    }


}