#include<iostream>
using namespace std;
int main(){
    int n=1330;
    int hundread=0,fifty=0,twenty=0,ten=0,remainder=0;
    switch (1)
    {
    case 1: hundread=n/100;
            remainder=n%100;
            cout<<"The no. of 100rs notes"<<hundread<<"\n";
    
    case 2: fifty=remainder/50;
            remainder=remainder%50;
            cout<<"The no. of 50rs notes"<<fifty<<"\n";

            
    case 3: twenty=remainder/20;
            remainder=remainder%20;
            cout<<"The no. of 20rs notes"<<twenty<<"\n";
            
    case 4: ten=remainder/10;
            remainder=remainder%10;
            cout<<"The no. of 10rs notes"<<ten<<"\n";

    }
}