#include<iostream>
using namespace std;

signed main()
{
     int r,c;
      cout<<"\nEnter the size of row: ";
     cin>>r;
     cout<<"\nEnter the size of column: ";

     cin>>c;

     int a[r][c];
     cout<<"\nEnter the elements of the the array: ";
     for(int i=0;i<r;i++){
          for(int j=0;j<c;j++){
               cin>>a[i][j];
          }
     }

          //spiral order print

     cout<<"\nSpiral order matrix is: \n";
     int row_start=0,row_end=r-1,col_start=0,col_end=c-1;
     while(row_start<=row_end && col_start<=col_end)
     {
          //row start
        for(int col=row_start;col<=col_end;col++){
          cout<<a[row_start][col]<<" ";
        }
        cout<<" \n";
        row_start++;

        //for col end
        for(int row=row_start;row<=row_end;row++){
          cout<<a[row][col_end]<<" ";

        }
        cout<<"\n";
        col_end--;

        //for row end
        for(int col=col_end; col>=col_start;col--){
          cout<<a[row_end][col]<<" ";
        }
        cout<<" \n";
        row_end--;
        //for col start
        for(int row=row_end;row>=row_start;row--){
          cout<<a[row][col_start]<<" ";

        }
        cout<<"\n";
        col_start++;

     }
     }


