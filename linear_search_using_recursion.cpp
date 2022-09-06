#include<iostream>
using namespace std;
bool findElement(int arr[],int size,int key){
    bool element;
    //base case
    if(size==0)
       return false;
    if(arr[0]==key){
        return true;
    }
    
    if(arr[0]!=key){
       element= findElement(arr+1,size-1,key);
       return element;
    }
    
}
int main(){
    int arr[6]={4,2,3,8,9,12};
    int key;
    cout<<"Enter Key"<<endl;
    cin>>key;
    bool found=findElement(arr,6,key);
    if(found)
      cout<<"Element is present"<<endl;
    else
      cout<<"Elemnt is not present"<<endl;
}