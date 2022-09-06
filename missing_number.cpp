#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,6,7,8,9,10};
    int n=sizeof(a)/sizeof(a[0]); //gives size in byte 
    cout<<n;
    int total= (n+1)*(n+2)/2;
    int sum=0;
    int i;
    for( i=0; i<n; i++){
        sum+=a[i];
        //cout<<sum<<endl;
    }
    int missing=total-sum;
    cout<<missing<<endl;
    cout<<total<<endl;
    cout<<sum;

}