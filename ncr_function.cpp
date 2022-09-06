#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
 for(int i=n; i>=1;i--){
     fact=fact*i;
 }
 return fact;
}
int ncr(int n, int r){
int ans= factorial(n)/(factorial(r)*factorial(n-r));
return ans;
}
int main(){
 
int n,r,ans=1;
cin>>n>>r;

ans=ncr(n,r);
cout<<ans;

return 0; 
}