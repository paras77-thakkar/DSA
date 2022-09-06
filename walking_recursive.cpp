#include<iostream>
using namespace std;
int srcToDest(int src,int dest){
    cout<<"src: "<<src<<"dest: "<<dest<<endl;
    //base case
    if(src==dest){
        cout<<"Reached"<<endl;
        return 0;
    }
    //recursive relation
    return srcToDest(++src,dest);
}


int main(){
    int src=1;
    int dest=10;
    srcToDest(src,dest);
}