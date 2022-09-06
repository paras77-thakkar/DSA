#include<iostream>
using namespace std;
long binarySearch(int n){
    int s=0;
    int e=n;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<e){
        int sq=mid*mid;
        if(sq==n)
           return mid;
        else if(sq>n){
            e=mid-1;
        }
        else{
            //sq<n
            ans=mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
double precision(int n,int wholNo,int decimal){
   
   double ans=wholNo;
   double  factor=1;
   for(int i=0; i<decimal; i++){
       factor=factor/10;
       for(double j=wholNo; j*j<n; j=j+factor){
           ans=j;
       } 
   }
return ans;
}


int main(){
    int n;
    int wholeNo;
    cout<<"Enter the no. ";
    cin>>n;

    wholeNo=binarySearch(n);

    double ans=precision(n,wholeNo,3);
    cout<<"square root is "<<ans;
    

}