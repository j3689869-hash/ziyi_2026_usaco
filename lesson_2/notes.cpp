#include <iostream>
using namespace std;
int main(){
    //in usaco we often calculate the bool before the cout function
    bool t=true, f=false;
    bool x = (t&&t);
    cout<< x <<"\n";
    cout<<(f&&t)<<"\n";
    cout<<(f&&t)<<"\n";
    cout<<(f&&f)<<"\n";

    cout<< (t||t)<<"\n";
    cout<<(f||t)<<"\n";
    cout<<(f||t)<<"\n";
    cout<<(f||f)<<"\n";

    cout<< (!t)<<"\n";
    cout<<(!f)<<"\n";

    //example of if else, else if statment

    /*the format is 
    if (condition){
        What will run in if condition
    }
    else if{
    
    }

    else{
        What will run otherwise
    }
    }*/
    /*use two if statements means the input will be checked twice, 
    while one if and else if means that it will only be checked once 
    if it satisfies condition 1*/

    int input;
    cin>>input; 

    if(input%1 == 0){
        cout<<"Divisible by 1\n\n";
    }
    else if(input%3 == 0){
        cout<<"Divisible by 3\n\n";
    }
    else if(input%5 ==0){
        cout<<"Divisible by 5\n\n";
    }

    else{
        cout<<"Not divisible by 1,3,5";
    }
    if(input%1 == 0){
        cout<<"Divisible by 1\n";
    }
    if(input%3 == 0){
        cout<<"Divisible by 3\n";
    }
    if(input%5 ==0){
        cout<<"Divisible by 5\n";
    }

    //if inside if means that there is another level of checking

    string name = "Ziyi";
    bool isInBathroom = true;
    if (name=="Ziyi"){
        cout<<"Hello Ziyi";
        if(isInBathroom){
            cout<<"Get out of the bathroom";
        }
    }
    /*switch function
    switch(expression[int or char]){
        case value1:(will compares)
            break;
        case value2:
            break
        etc...
        default:
        break;
        
        not useful}*/
}

#include <iostream>
using namespace std;

int. main() {
    
}

