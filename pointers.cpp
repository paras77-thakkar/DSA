#include<iostream>
using namespace std;
int main(){

    int num=5;
    int *p=&num;

    cout<<"Address of num "<<p<<endl;
    cout<<"Value at num "<<*p<<endl;

    int *q=0; //null pointer
    q=p;   // copying pointer p in q and reinitializing pointer(note without using *);
    cout<<"q is pointing at "<<*q<<endl;
    cout<<"Address Stored in p and q is same"<<endl<<"p:"<<p<<endl<<"q:"<<q<<endl;

    p=p+1;
    cout<<p;  //pointing to next integer adddress which starts after 4 bytes


}