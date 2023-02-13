#include<iostream>
using namespace std ;
int main ()
{
    // given row * col matrix 
    int row , col ;
    cout<<"Enter the number of rows\n";
    cin>>row;
    cout<<"Enter the number of columns\n";
    cin>>col ;

    int mat[row][col] =
        {
            {1,3,4,5,1},
            {0,2,2,3,6},
            {0,0,3,1,3},
            {0,0,0,4,4},
            {0,0,0,0,5}
        };
    // cout<<"Enter the matrix of Order "<<row<<" * "<<col<<" \n";
    // for (int i = 0  ; i < row ;  i++)
    // {
    //     for (int j = 0 ; j < col ; j++)
    //     {
    //         cin>>mat[i][j];
    //     }
    // }
    int size = 0 ;
    for (int i= 0 ; i < row ; i++)
    {
        for (int j = 0 ; j < col ; j++)
        {
            if (mat[i][j] !=  0 )
                size++;
        }
    }
    int sp[3][size] ;
    int k = 0 ;
    for (int i = 0 ; i < row; i++)
    {
        for (int j = 0 ; j < col ; j++)   
        {
            if (mat[i][j]!= 0 )
            {
                sp[0][k] = i;
                sp[1][k] = j;
                sp[2][k] = mat[i][j];
                k++;
            }
        }
    }
    cout<<"Matrix in array form =>\n";
    for (int i = 0 ; i < row; i++)
    {
        for (int j = 0 ; j < col ; j++)   
        {
            if (mat[i][j]!= 0 )
            {
                // sp[0][k] = i;
                // sp[1][k] = j;
                // sp[2][k] = mat[i][j];
                cout<<mat[i][j]<<" ";
                k++;
            }
        }
    }
    cout<<"\n";
    cout<<"Given matrix in sparse matrix is =>\n" ; 

    for(int i = 0 ; i < 3 ; i++)
    {
        for (int j = 0 ; j < size ; j++)
        {
            cout<<sp[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0 ;

}