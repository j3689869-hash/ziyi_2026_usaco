#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum = 0;
    
    
    for(int i=0; i<n; i++) {
        int age;
        cin>>age;
        sum=sum+age;
    }
    double avg = double(sum)/n;
    cout<<avg;
    return 0;
}
