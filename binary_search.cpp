#include<iostream>
using namespace std; 


int binarySearch(int arr[],int size, int key){
    int start=0;
    int end=size-1;
    int mid=(start + end)/2;

    while (start<=end)
    {
        if(arr[mid]==key){
            return mid;
        }
        
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;
}
int main(){
    int even[6]={5,6,8,9,11,14};
    int odd[5]={2,5,7,9,11};

    int key=5;

    int ans=binarySearch(odd,6,key);
    cout<<key<<" is present at index "<<ans;

    return 0;
}