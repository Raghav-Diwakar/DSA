#include<iostream>
#include<vector>
using namespace std ;
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    cout<<"element "<<v.size();
    cout<<endl<<"memory allocated is "<<v.capacity();
    for(int i=0;i<6;i++){
        cout<<endl<<" "<<v[i];
    }
    cout<<endl;
    v.pop_back();
    for(auto i:v)
        cout<<endl<<" "<<i;
    cout<<endl;
    for(int i=0;i<v.size();i++){
        cout<<endl<<" "<<v[i];
    }
}