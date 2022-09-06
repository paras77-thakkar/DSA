#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int row =1;
    int star=1;
  while (row<=n)
  {
    int col=1;
    int start=n-row+1;
    while (col<=start)
    {
        cout<<col<<" ";
        col++;
    } 
   star=(row-1)*2;
   col=1;
   while (col<=star)
   {
       cout<<"*"<<" ";
       star--;    
   }
   int start1=n-row+1;
   while (start1)
   {
       cout<<start1<<" ";
       start1--;
   }
   

     cout<<endl;
     row++;
  }

     
    
}
   