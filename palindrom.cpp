#include<iostream>
using namespace std;

char toLower(char ch){
   if(ch>='a' && ch<='z'){
    return ch;
   }
   else{
    ch=ch-'A'+'a';
   }
   return ch;
}
bool palindrom(char name[], int n){

    int s=0;
    int e=n-1;

    while(s<=e){

        if(toLower(name[s])!=toLower(name[e]) ){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

int getLength(char name[]){
    int count=0;

    for(int i=0;name[i]!='\0'; i++){
        count++;
    }
    return count;
}


int main(){

    char name[20];
    cout<<"Enter input for palindrom ";
    cin>>name;

    cout<<"Palindrom or not: "<<palindrom(name,getLength(name));
}