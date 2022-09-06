#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;

    int *arr=new int[n];   //creating dynamic array in heap and pointing to its address using pointer in stack
    cout<<"Enter elements in array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];                  //arr[i]= *(arr+i);
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans+arr[i];
    }
    cout<<"Sum is :"<<ans<<endl;
}