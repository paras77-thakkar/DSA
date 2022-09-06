#include<iostream>
using namespace std;   
int pivot(int arr[],int size){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;

    while (s<e)
    {
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
      else{
          e=mid;
      }
      mid=s+(e-s)/2;
    }
    return s;

}



int main(){
    int arr[6]={2,3,4,5,6,1};
    int pivot_element;
    pivot_element=pivot(arr,6);
    cout<<"Pivot element is at index: "<<pivot_element;

}