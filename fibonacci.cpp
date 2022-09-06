#include<iostream>
using namespace std;
int main(){
   int n=10;
   int a=0,b=1;
   cout<<a<<"\n"<<b<<"\n";
   int i;
   int r;
   for( i=1; i<=n; i++){
     r=a+b;
     cout<<r<<"\n";
     a=b;
     b=r;
   }

}