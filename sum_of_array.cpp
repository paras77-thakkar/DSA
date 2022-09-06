#include<iostream>
using namespace std;
int sum(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans+=arr[i];
    }
    return ans;
}
int main(){
    int size;
    cout<<"Enter the size for array";
    cin>>size;
    int arr[20];
    for(int i=0;i<size;i++){
        cout<<"Enter the values";
        cin>>arr[i];
    }
    int ans= sum(arr,size);
    cout<<"Sum of array is "<<ans;
}