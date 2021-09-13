#include<iostream>
using namespace std;

int main()
{
     int n1,n2,n3;
     cout<<"\nenter the input for n1 n2 n3: ";
     cin>>n1>>n2>>n3;
     int m1[n1][n2];
     int m2[n2][n3];
     //input for m1 matrix

     cout<<"\ninput for m1 matrix: \n";
     for(int i=0;i<n1;i++){
          for(int j=0;j<n2;j++){
               cin>>m1[i][j];
          }
     }
     //input for m2 matrix

     cout<<"\ninput for m2 matrix: ";
     for(int i=0;i<n2;i++){
          for(int j=0;j<n3;j++){
               cin>>m2[i][j];
          }
     }
     int ans[n1][n3];

     for(int i=0;i<n1;i++){
          for(int j=0;j<n3;j++){
               ans[i][j]=0;
          }
     }
     //multiplication
     for(int i=0;i<n1;i++){
          for(int j=0;j<n3;j++){
               for(int k=0;k<n2;k++){
                    ans[i][j] +=m1[i][k]*m2[k][j];
               }
          }
     }

     cout<<"\nArray is: \n";
     for(int i=0;i<n1;i++){
          for(int j=0; j<n3; j++){
          cout<<ans[i][j]<<" ";
          }
          cout<<"\n";
     }

}
