#include <iostream>
using namespace std;

int main(){

    int x;
    cin>>x;
    
    if(x==1){
        cout<<"I ran "<< x <<" mile today. Great job!";
    }else if(x>1){
        cout<<"I ran "<< x <<" miles today. Great job!";
    }else if(x==0){
        cout<<"I did not run today.";
    }
    
    return 0;
}
