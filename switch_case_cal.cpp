#include<iostream>
using namespace std;
int main(){
    char op;
    int a,b;
    cout<<"Enter the value for a: ";
    cin>>a;
    
    cout<<"Enter the value for b: ";
    cin>>b;
    
    cout<<"Enter the operation: ";
    cin>>op;

    switch (op)
    {
    case '+': cout<<"a+b="<<a+b; 
        break;
    
    case '-': cout<<"a-b="<<a-b; 
        break;

    case '*': cout<<"a*b="<<a*b; 
        break;
        
    case '/': cout<<"a/b="<<a/b; 
        break;

    default: cout<<"Not enterd valid operation";
        break;
    }
}