#include<iostream>
using namespace std;
void swapalt(int arr[],int size){

    for(int i=0;i<size;i+=2){
        if(i+1<size)
        swap(arr[i],arr[i+1]);
    }


}
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int arr[6]={2,1,4,3,6,5};
    swapalt(arr,6);
    printarray(arr,6);
}