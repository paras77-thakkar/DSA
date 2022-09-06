#include<iostream>
using namespace std;
void gcd(int a,int b){
    while(a!=b){
        if(a<b){
           b=b-a;     
        }
        else{
            a=a-b;
        }
    }
    cout<<"Gcd is "<<a;
}
int main(){
    int a=24;
    int b=60;

    gcd(a,b);
}