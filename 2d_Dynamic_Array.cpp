#include<iostream>
using namespace std;
int main(){
 int row;
 int col;
 cout<<"Enter No. of rows";
 cin>>row;
 cout<<"Enter No. of columns";
 cin>>col;

 //creating 2d array
 int **arr=new int*[row];  //creating array with n rows and each row pointing to one 1d array coz of that its doble pointer. coz we want 2d array
 //adding 1d dynamic array to every row
 for(int i=0;i<row;i++){
      arr[i]=new int[col];
 }
 cout<<"Enter elements"<<endl;
 for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
    cin>>arr[i][j];
 }
 cout<<"\n";
 }
 for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
    cout<<arr[i][j];
    cout<<" ";
 }
 cout<<"\n";
 }
//releasing memory 
for(int i=0;i<row;i++){
      delete []arr[i];
 }
 delete []arr;

}