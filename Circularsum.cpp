#include<iostream>
using namespace std;

int kadane(int a[], int n)
{

     int maxsum=0,currentsum=0;
     for(int i=0;i<n;i++){
          currentsum +=a[i];
          if(currentsum>maxsum){
               maxsum=currentsum;
          }
          else if(currentsum<0){
               currentsum=0;
          }
     }
     return maxsum;
}


int main()
{
       int a[]={4,-4,6,-6,10,-11,12};
       int n=sizeof a/sizeof a[0];



     int wrapsum,nonwrapsum;
     nonwrapsum=kadane(a,n);
     int totalsum=0;
     for(int i=0;i<n;i++){
          totalsum +=a[i];
          a[i]=-a[i];
     }
     wrapsum=totalsum+kadane(a,n);
     cout<<max(wrapsum,nonwrapsum);



}
