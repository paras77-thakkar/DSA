#include<iostream>
using namespace std;
int digitInWords(int n,string arr[]){
    //base case
    if(n==0)
       return 0;

    int digit=n%10;
    n=n/10;
    digitInWords(n,arr);
    cout<<arr[digit]<<" ";   

}
int main(){
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    digitInWords(n,arr);
}