#include<iostream>
#include<math.h>
using namespace std;
int main(){

    int n,bit,ans=0,i=0;
    cin>>n;
    if(n<0){
        n=n*-1; //converting negative to positive first coz we have to ignore the sign 
    while (n!=0)
    {
        bit=n&1;
        if(bit==1){
            ans=(0*pow(10,i))+ans;
        }                                      //Doing 1's compliment converting 1's to 0's and 0's to 1's
        else{
            ans=(1*pow(10,i))+ans;
        }
        n=n/10;
        i++;
    }
    }
    
    cout<<"Value for negative no. stored is "<<(ans+1);
    
}