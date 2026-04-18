#include <iostream>
using namespace std;

int main() {

    int x;
    
    cin>>x;
    
    if(x==1){
        cout<<"Today I ate " << x << " apple";
    }else if(x>1){
        cout<<"Today, I ate "<< x <<" apples";
    } else if (x==0){
        cout<<"Today I ate 0 apple";
    }
    
    return 0;
}