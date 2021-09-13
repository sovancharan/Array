#include <iostream>
using namespace std;

void merge(int a[],int lb, int mid,int up)
{
     int i,j,k;
     int n1=mid-lb+1;
     int n2=up-mid;

     int p[n1],q[n2];

     for(i=0;i<n1;i++){
          p[i]=a[lb+i];
     }
     for(j=0;j<n2;j++){
          q[j]=a[mid+1+j];
     }
          i=0;
          j=0;
          k=lb;
     while(i<n1 && j<n2){

          if(p[i]<=q[j]){
               a[k]=p[i];
               i++;
          }
          else{
               a[k]=q[j];
               j++;
          }
          k++;
     }

          while(i<n1){
               a[k]=p[i];
               i++;
               k++;
          }
          while(j<n2){
               a[k]=q[j];
               j++;
               k++;
          }

     }

void mergesort(int a[],int lb, int up)
{
     if(lb<up){
        int  mid=(up+lb-1)/2;
          mergesort(a,lb,mid);
          mergesort(a,mid+1,up);
          merge(a,lb,mid,up);
     }
}

void Display(int a[],int n )
{
     for(int i=0;i<n;i++){
          cout<<a[i]<<" ";
     }
}
int  main()
{
     int a[]={3,2,1};
     int n=sizeof a/ sizeof a[0];
     mergesort(a,0,n-1);
     Display(a,n);
     cout<<"\n 2 th element is: "<<a[2];
}
