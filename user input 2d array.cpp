#include<iostream>
using namespace std;
int main()
{
    int A[2][3];
    cout<<"enter the elements for the matrix"<<endl;
    for(int row=0;row<2;row++){
        for(int col=0;col<3;col++){

            cin>>A[row][col];}
    }
    for(int row=0;row<2;row++){
        for(int col=0;col<3;col++){
            cout<<A[row][col]<<"  ";}
    }
}
