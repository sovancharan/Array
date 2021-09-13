#include<stdio.h>

int Reverse(int a[],int n)
{
     int i=0;
     int j=n-1;
     int temp;
     while(i<j){

     temp=a[i];
     a[i]=a[j];
     a[j]=temp;

     i++;
     j--;
     }
}
void Display(int a[], int n)
{
     for(int i=0;i<n;i++){
          printf("%d ",a[i]);
     }
}
int main()
{
     int a[]={10,20,30,40,50};
     int n=sizeof a/sizeof a[0];
     Reverse(a,n);
     Display(a,n);
}
