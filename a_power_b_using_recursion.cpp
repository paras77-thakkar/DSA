#include<iostream>
using namespace std;
int power(int a,int b){
    //base case
    if(b==0)
        return 1;
    else if(a==1)
        return 1;

    //recursive 
    int ans=power(a,b/2);
    //ek case solve kiya baki recursion sambhal lega 
    if(b%2==0)
       return ans*ans;
    else
       return a*ans*ans; 
}
int main(){
    int a,b;
    cout<<"Enter value for a"<<endl;
    cin>>a;
    cout<<"Enter value for b"<<endl;
    cin>>b;

    int ans=power(a,b);
    cout<<a<<" to the power "<<b<<" is "<<ans<<endl;
}