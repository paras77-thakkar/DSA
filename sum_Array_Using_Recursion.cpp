#include<iostream>
using namespace std;
int sumOfArray(int arr[],int size){
    //base case
    if(size==0)
        return 0;
    int sum=arr[0];
    sum=sum+sumOfArray(arr+1,size-1);
    return sum;
}
int main(){
    int arr[5]={1,2,3};
    cout<<sumOfArray(arr,5);
}