#include<iostream>
using namespace std;
bool binarySearch(int arr[],int s,int e, int k){
   if(s>e)
      return false;
   int mid=s+(e-s)/2;
   if(arr[mid]==k)
       return true;
   else if(arr[mid]>k)
        binarySearch(arr,s,mid-1,k);
    else
        binarySearch(arr,mid+1,e,k);
}
int main(){
    int n;
    cout<<"Enter element to search"<<endl;
    cin>>n;
    int arr[8]={3,4,5,7,8,9,10,12};
    int s=0;
    int e=7;   
    
    cout<<"Element Present or not "<<binarySearch(arr,s,e,n)<<endl;
}