#include<iostream>
using namespace std;
bool isSorted(int *arr,int size){
    //base case
    if(size==0 || size==1)
            return true;
    else if(arr[0]<arr[1]){
       bool ans=isSorted(arr+1,size-1);
        return ans;
    }
    else
        return false;


}
int main(){
    int arr[6]={3,4,8,11,10,7};
    bool ans=isSorted(arr,6);
    cout<<"Array is sorted: "<<ans;
}