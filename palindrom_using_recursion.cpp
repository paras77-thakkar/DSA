#include<iostream>
using namespace std;
bool checkPalindrom(string s,int i,int j){
     if(i>j)
       return true;
    else if(s[i]==s[j]){
      i++;j--;  
     return checkPalindrom(s,i,j);
    }
    else if(s[i]!=s[j]){
    return false;
    }
 
}
int main(){
    string s="abccba";
    bool ans=checkPalindrom(s,0,s.length()-1);
    cout<<"String is palindrom or not: "<<ans<<endl;
}