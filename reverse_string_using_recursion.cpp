#include<iostream>
using namespace std;
void reverse(string& s,int i,int j ){
    cout<<s<<endl;
    if(i>j)
      return ;
    swap(s[i],s[j]);
    i++;j--;
    reverse(s,i,j);
}
int main(){
    string s="abcd";
    int j=s.length()-1;
    reverse(s,0,j);
    cout<<s;
}