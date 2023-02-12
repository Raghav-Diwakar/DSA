#include<iostream>
#include<vector>
using namespace std ;

int main(){
    int n ;
    cout<<"enter the size of matrix\n";
    cin>>n ;
    int mat[n][n] , m[50];
    cout<<"Enter the element of matrix\n" ;
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n ; j++){
            cout<<mat[i][j];
        }
    }
    
    cout<<"Given matrix in 1-D Array is \n";
    for (int i = 1 ;  i < 10  ; i++){
        cout<<m[i];
    }
}