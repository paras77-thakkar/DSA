#include<iostream>
using namespace std;
void bubbleSort(int *arr,int n){

    if(n==1||n==0)
        return ;
    //1 case solve baki recursion sambhal lega
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubbleSort(arr,n-1);
}
int main(){
    int arr[5]={8,9,10,5,2};
    bubbleSort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}