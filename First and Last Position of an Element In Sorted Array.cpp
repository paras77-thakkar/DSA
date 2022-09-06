#include<iostream>
using namespace std;

int firstOcc(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+((end-start)/2);
    int ans;
    while(start<=end)
    {
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]<key){//travel right
            start=mid+1;
        }
        else{// travel left
            end=mid-1;
        }
        mid=start+((end-start)/2);
    }
    return ans;
    
}

int lastOcc(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+((end-start)/2);
    int ans;
    while(start<=end)
    {
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]<key){//travel right 
            start=mid+1;
        }
        else{// travel left
            end=mid-1;
        }
        mid=start+((end-start)/2);
    }
    return ans;
    
}




int main(){
    int arr[8]={4,5,6,7,7,7,8,9};
    int key=7;

    int ans1=firstOcc(arr,8,key);
    int ans2=lastOcc(arr,8,key);

    cout<<"First position of an element"<<ans1;
    cout<<"Last position of an element"<<ans2;

    return 0;
}