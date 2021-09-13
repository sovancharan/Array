#include<iostream>
using namespace std;

int dublicate(int a[], int n)
{
  int dub;
     for(int i=1;i<n;i++){

          for(int j=i+1;j<n;j++){
               if(a[i]==a[j]){
                dub=a[i];
               }
          }
         // temp++;
     }
     return dub;
}

int main()
{
     int a[]={4,2,3,2,3};
     int n=sizeof a/sizeof a[0];
     int dub=dublicate(a,n);
     cout<<"\n The value is: "<<dub;
}
