#include<iostream>
using namespace std;
int main(){
    /*Sum of Even No.*/
    int n;
    int i=1; 
    int sum=0;
    int curr=2;
    cout<<"Enter that you want sum of how many even no.'s from zero ";
    cin>>n;
    while (i<=n){
        sum= sum + curr;
        curr=curr+2;
        i++;
    }
   cout<<"Sum of even no. is "<<sum; 
    
}