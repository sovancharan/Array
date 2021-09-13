#include<iostream>
using namespace std;
int main()
{
     int a[10]={10, -5,63,-3,-4};
     int n=sizeof a/sizeof a[0];
     int low=0;
     int mid=0;
     for(int i=0;i<n;i++){
     if(a[i]<0){
          swap(a[low],a[mid]);
          low++;
     }
     else
          mid++;
     }
     for(int i=0;i<n;i++){
          cout<<a[i]<<" ";
     }
}
