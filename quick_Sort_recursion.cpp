#include<iostream>
using namespace std;
int partition(int *arr,int s,int e){
   int pivot=arr[s];
   int count=0;
   for(int i=s+1;i<=e;i++){
    if(arr[i]<pivot){
        count++;
    }
   }
   int pivotIndex=s+count;
   swap(arr[s],arr[pivotIndex]);

   //taking smaller element than pivot at left and greater at right
   int i=s;
   int j=e;
   while (i<pivotIndex && j>pivotIndex){
    
    while (arr[i]<=pivot)
    {
        i++;
    }
    while (arr[j]>pivot)
    {
       j--;
    }
   if(i<pivotIndex && j>pivotIndex){
    swap(arr[i++],arr[j--]);
   } 
   }
    return pivotIndex;
}
void solve(int *arr,int s,int e){
    //base case
    if(s>=e)
      return ;
    
    int p=partition(arr,s,e);
    //sorting left wala part
    solve(arr,s,p-1);
    //sorting right wala part
    solve(arr,p+1,e);
}


int main(){
    int arr[5]={40,30,50,10,20};
    solve(arr,0,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

}