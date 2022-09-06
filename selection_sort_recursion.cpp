#include<iostream>
using namespace std;
void selectionSort(int *arr,int n){
    //base case
    if(n==0||n==1)
        return ;
    int minIndex=0;
    for(int i=0;i<n-1;i++){
        if(arr[i+1]<arr[minIndex]){
             minIndex=i+1;
        }         
    }     
    swap(arr[i],arr[minIndex]);
    selectionSort(arr,n);
}
int main(){
    int arr[5]={8,9,10,5,2};
    selectionSort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}