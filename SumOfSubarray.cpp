#include<iostream>
using namespace std;

int main()
{

     int n;
     cout<<"Enter the size of array: ";
     cin>>n;
     int a[n];
     cout<<"\nEnter the data: ";
     for(int i=0;i<n;i++){
     cin>>a[i];
     }
     int sum=0;
     cout<<"\nsum of sub array: ";
     for(int i=0;i<n;i++){

          for(int j=i;j<n;j++){
           sum+=a[j];
          cout<<"\n sum is: ";
          cout<<sum;
     }
          sum=0;
     }
}
