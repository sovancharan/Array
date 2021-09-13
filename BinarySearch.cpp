#include<iostream>
using namespace std;
int BinarySearch(int a[], int n, int data)
{
     int s=0;
     int e=n;
      while(s<=e)
     {
          int mid=(s+e)/2;
          if(data==a[mid]){
               return mid;
          }
          else if(data>a[mid]){
               s=mid+1;
          }
          else if(data<a[mid]){
               e=mid-1;
          }
     }
    return -1;
}
int main()
{
     int a[] = { 2, 3, 4, 10, 40 };
     int n=sizeof a/sizeof a[0];
    cout<<BinarySearch(a,n,40);

}
