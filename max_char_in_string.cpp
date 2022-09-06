#include<iostream>
#include<unordered_map>
using namespace std;
char maxChar(string str){
  
  int arr[26]={0};
  for(int i=0; i<str.length();i++){  //incrementing number of char in array 
   
   char ch=str[i];

   int number=ch-'a';

   arr[number]=arr[number]+1;

  }
int maxi=-1;
int ans=0;
  for(int i=0; i<26; i++){
    if(maxi<arr[i]){                      //finding maximum occurance char 
        maxi=arr[i];
       ans=i;
    }
  }
  char finalAns='a'+ans;
  return finalAns;
}






int main(){
    string str;
    cin>> str;

   cout<< maxChar(str);

}