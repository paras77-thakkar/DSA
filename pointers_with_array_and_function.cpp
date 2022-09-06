#include<iostream>
using namespace std;
int main(){
    /*
    int arr[10]={2,7,4,5};
    cout<<"Address of first index of array"<<arr<<endl; //name of array returns the address of first index of array
    cout<<"Address of first index of array using &"<<&arr[0]<<endl; // &arr[0] also returns address of first index of array
    cout<<"value at 0th index "<<arr[0]<<endl;
    cout<<"Value at 0th index using * :"<<*arr<<endl; //arr has the starting address of array and *arr means value at starting address
    cout<<"Value at arr[0] plus one: "<<*arr+1<<endl;
    cout<<"Value at arr[0] plus one: "<<(*arr)+1<<endl; 
    cout<<"Value at index 1: "<<*(arr+1)<<endl;
    cout<<"value at index 2 using * "<<*(arr+2)<<endl;  //starting address and 2 adrress arr[i]=*(arr+i);
    int i=3;
    cout<<"value at index 3 using i "<<i[arr]<<endl; //will not give error we can write index outside and arr name inside box
*/
int temp[10];
cout<<sizeof(temp)<<endl;
cout<<sizeof(*temp)<<endl;

int *ptr = &temp[0];
cout<<"Size of pointer "<<sizeof(ptr)<<endl; //should print 8 coz pointer stores 8 bytes of address. but out compiler is 32 bit so it show 4.
cout<<"size of value stored at address stored in ptr "<<sizeof(*ptr)<<endl;  
cout<<"Adress size of ptr "<<sizeof(&ptr)<<endl;  //it should print 8 coz address size is 8byte.


}