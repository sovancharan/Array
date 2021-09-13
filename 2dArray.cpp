#include<iostream>
using namespace std;

int main()
{
     int r,c;
     cout<<"\nEnter the size of row: ";
     cin>>r;
     cout<<"\nEnter the size of column: ";

     cin>>c;

     int a[r][c];
     cout<<"\nEnter the elements of the the array: ";
     for(int i=0;i<r;i++){
          for(int j=0;j<c;j++){
               cin>>a[i][j];
          }
     }
        cout<<"\nelements of the the array: \n";
     for(int i=0;i<r;i++){
          for(int j=0;j<c;j++){
               cout<<a[i][j]<<" ";
          }
          cout<<"\n";
     }
}
