#include<iostream>
using namespace std;
bool linear_search(int arr[],int size,int key){
    
    for(int i=0;i<size;i++){
        if (arr[i]==key)
        {
            return 1;
        }
        
    }
    return 0;
}
int main(){
    int key;
    cout<<"Enter the key";
    cin>>key;
    int arr[5]={3,5,2,4,10};
    int res=linear_search(arr,5,key);
    if (res==1)
    {
        cout<<"Key is present";
    }
    else{
        cout<<"Key is not present";
    }
    
}