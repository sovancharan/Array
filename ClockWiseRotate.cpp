#include<iostream>
using namespace std;

int main()
{
   //  int a[]={1,2,3,4,5};
    int a[]= {9, 8, 7, 6, 4, 2, 1, 3};
     int n=sizeof a/sizeof a[0];

     int temp=n;
     for(int i=n;i>=0;i--){
          a[i]=a[i-1];
     }
     a[0]=temp;


     for(int i=0;i<n;i++){
          cout<<a[i]<<" ";
     }
}
