#include<iostream>
#include<vector>
using namespace std ;
int main(){
    vector<pair<int,int>>v;
    v.push_back(make_pair(1234,98));
    v.push_back(make_pair(2345,58));
    v.push_back(make_pair(3456,68));
    v.push_back(make_pair(5678,88));
    for (int j=0 ; j<v.size();j++){
        cout<<v[j].first;
        cout<<","<<v[j].second<<endl;
    }

    // for(auto i:v)
    // cout<<endl<<" "<<i;

    // vector<int>v(5,2); //intilization
    // cout<<endl<<"size is"<<v.size();
    // v.push_back(10);
    

    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // v.push_back(5);
    // v.push_back(6);
    // v.push_back(7);

    // cout<<"element "<<v.size();    
    // cout<<"\nmax size "<<v.max_size();    
    // v.resize(20);
    // cout<<"\nelement "<<v.size();    


    // cout<<endl<<"memory allocated is "<<v.capacity();
    // for(int i=0;i<6;i++){
    //     cout<<endl<<" "<<v[i];
    // }
    // cout<<endl;
    // v.pop_back();
    // for(auto i:v)
    //     cout<<endl<<" "<<i;
    
    // cout<<endl;
    // for(int i=0;i<v.size();i++){
    //     cout<<endl<<" "<<v[i];
    // }
    // // v.clear();

    // int n = v.size();
    // cout<<"\nlast element is "<<v[n-1];
    
}