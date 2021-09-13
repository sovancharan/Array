#include<iostream>
using namespace std;


int main()
{
     int a[]={2,5,9,10,20};
     int n=sizeof a/sizeof a[0];
      int mid=(n/2);
      cout<<"\nmid is: "<<a[mid]<<endl;
     for(int i=mid;i<n;i++){
      a[i]=a[i+1];
     }
     n--;

     for(int i=0;i<n;i++)
          cout<<a[i]<<" ";

}
