#include <iostream>
using namespace std;

int main(){

    int x,y;
    cin>>x>>y;
    
    if(x==1 && y==1){
        cout<<"Today, I ate "<< x <<" apple and "<< y <<" orange.";
    }else if(x==1 && y!=1){
        cout<<"Today, I ate "<< x <<" apple and "<< y <<" oranges.";
    }else if(x!=1 && y==1){
        cout<<"Today, I ate "<< x <<" apples and "<< y <<" orange.";
    }else{
        cout<<"Today, I ate "<< x <<" apples and "<< y <<" oranges.";
    }
    
    return 0;
}
