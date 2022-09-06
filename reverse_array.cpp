#include<iostream>
using namespace std;
void reverse(int arr[],int size){
    int start=0;
    int end=size-1;

    while (start<=end)
    {
       swap(arr[start],arr[end]);
       start++;
       end--;
    }
    
}
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int arr[6]={3,6,2,4,1,10};
     reverse(arr,6);
     printarray(arr,6);
}