#include<iostream>
#include<vector>
using namespace std ;
int main(){
    vector<int>v[5];
    v[0].push_back(2);
    v[0].push_back(3);
    v[0].push_back(4);
    v[1].push_back(5);
    v[1].push_back(6);
    v[2].push_back(7);
    v[2].push_back(8);
    v[3].push_back(9);
    v[3].push_back(10);
    v[4].push_back(11);
    v[4].push_back(12);
    for (int j = 0 ; j<5;j++){
        cout<<j<<":";
    for (int i =0 ; i <v[j].size();i++){
        cout<<v[i][j]<<",";
    }
    cout<<endl;
    }
    // vector<int>nums;
    // vector<int>dat(nums.size());
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // v.push_back(2);  
    // for(int i=0 ; i<nums.size();i++){
    //     dat[nums[i]]++;
    // }    
    // for(int i=0 ; i<nums.size();i++){
    // if (dat[i]>=2)
    //     return i ;
    }
