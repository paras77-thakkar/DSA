#include<iostream>
using namespace std;

int isPresent(int arr[][3],int target, int row, int col){

for(int row=0;row<3;row++){
    for(int col=0;col<3;col++){
        if(arr[row][col]==target){
            return 1;
        }
    }
  }
  return 0;
}
void rowSum(int arr[][3], int row,int col){
    cout<<"Row sum is ";
    for(int row=0;row<3;row++){
        int sum=0;
    for(int col=0;col<3;col++){
        sum=sum+arr[row][col];
    }
      cout<<sum<<" ";
  }
  cout<<endl;
}

void colSum(int arr[][3], int row,int col){
    cout<<"Col sum is ";
    for(int col=0;col<3;col++){
        int sum=0;
    for(int row=0;row<3;row++){
        sum=sum+arr[row][col];
    }
      cout<<sum<<" ";
  }
  cout<<endl;
}

int main(){
//taking hard input: it takes row wise
//  int arr[3][3]={1,2,3,4,5,6,7,8,9};
// taking hard input with deciding rows
//  int arr[3][3]={{1,4,7},{3,8,9},{2,5,6}};

int arr[3][3];

 /* taking input row wise means first row all columns then second row all columns ...*/
cout<<"Enter Elements in 2d array"<<endl;
  for(int row=0;row<3;row++){
    for(int col=0;col<3;col++){
        cin>>arr[row][col];
    }
  }
  // taking input col wise means first column all rows then second column all rows... 
// for(int col=0;col<3;col++){
//     for(int row=0;row<3;row++){
//         cin>>arr[row][col];
//     }
//   }


  for(int row=0;row<3;row++){
    for(int col=0;col<3;col++){
        cout<<arr[row][col]<<"  ";
    }
    cout<<endl;
  }
int target;
cout<<"Enter element to find out"<<endl;
cin>>target;
  int ans=isPresent(arr,target,3,3);
  if(ans==1){
    cout<<target<<" is present"<<endl;
  }
  else{
    cout<<target<<" is not present"<<endl;
  }
  rowSum(arr,3,3);
  colSum(arr,3,3);
}