#include<iostream>
using namespace std;
int main(){
    //infinity loop
    for(int i=0;i<5;i++)
    cout<<"Hello\n";

    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int i=0
    for(;i<5;i++)
    cout<<"Hello\n";

    return 0;
}



#include <iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int sum = 0; 
    for(int i=0; i<=n; i++) {
        sum=sum+i;
    }
    cout<<sum;
    
    return 0;
}


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


for(int i=1; 1<=3; i++){
    for(int j=1; j<=5; j++){
        cout<<i<<"x"<<j<<"="<<(i*j)<<" ";
    }
    cout <<endl;
}

#include <iostream>
using namespace std;

int main() {
    int h;
    cin >> h;
    
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}