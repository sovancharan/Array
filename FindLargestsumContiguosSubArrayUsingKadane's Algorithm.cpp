#include<iostream>
using namespace std;

int maxsumsubarray(int a[],int n)
{
     int maxsum=0;
     int cursum=0;
     for(int i=0;i<n;i++){
     cursum=cursum+a[i];
     if(cursum>maxsum){
          maxsum=cursum;
     }
     if(cursum<0){
          cursum=0;
     }
     }
     return maxsum;
}
void main()
{
     int a[]={1,2,-2,-5,8,4};
     int n=sizeof a/sizeof a[0];
     int max=maxsumsubarray(a,n);
     cout<<max;
     cout<<a[5];

}

