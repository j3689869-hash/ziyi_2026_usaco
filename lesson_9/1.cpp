//v.push_back(x) time complexity O(1) adds x to the ends of the vector
//v.pop_back() time complexity O(1) removes the last element from the vector
//v.size() time complexity O(1) returns the number of elements in the vector 
//v.empty() time complexity O(1) checks if the vector is empty
//v.clear() time complexity O(n) removes all elements from the vector
//v.insert(pos, x) time complexity O(n) inserts x at position pos
//v.erase(pos) time complexity O(n) removes the element at position pos
//v.begin() time complexity O(1) returns an iterator to the first element of the vector
//v.end() time complexity O(1) returns an iterator to the past-the-end element of the vector
//use arrays when you know the size of the data beforehand and it is not going to change and use vector if you dont
#include <iostream>
using namespace std;
int main() {
    vector<int> v;
    
    cout << v.size() << endl;//0

    v.push_back(2);
    v.push_back(22);
    v.push_back(23);
    v.push_back(2);

    cout << v.size() << endl;//4
    
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

     

    return 0;
}