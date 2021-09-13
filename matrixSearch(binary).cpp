#include<iostream>
using namespace std;

int main()
{
    // int r,c;
   int   a[3][3]={{10,20,30},{40,50,60},{70,80,90}};
     for(int i=0;i<3;i++){
          for(int j=0;j<3;j++){
               cout<<a[i][j]<<" ";
          }
          cout<<"\n";
     }
     //Binary search
     int r=0,c=3-1;
   //  int a[r][c];
     int data;
     cout<<"\nEnter the data searching data: ";
     cin>>data;
     bool found=false;
     while(r<3 && c>=0){
          if(a[r][c]==data){
               found=true;
               cout<<"\nElement found at index: ";
               cout<<r<<c;
          }
           if(a[r][c]>data){
               c--;
          }
          else{
               r++;
          }
     }
          if(found){
               cout<<"\nElement found ";
          }
          else{
               cout<<"\nElement does not exit";
          }


     }

