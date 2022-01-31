#include <iostream>
#include <vector>

using namespace std;
int main() {
    vector <int> v;

    vector <int> a(5,1);    //intialise vector with size and capacity 5 and fill all indexes with 1.

    cout << "The Capacity of vector is: " << v.capacity() << endl;
    //can't use push_front
    v.push_back(96);
    v.push_back(6);
    v.push_back(89);
    cout << "The size of the vector is: "<< v.size() << endl;
    v.push_back(2);
    v.push_back(0);
    v.push_back(-5);
    

    cout << "The Capacity of vector is: " << v.capacity() << endl;
    cout << "The size of the vector is: "<< v.size() << endl;


    v.pop_back();

    for ( int i =0; i<v.size() ;i++) {
        cout << v.at(i) << endl;    //element at i index.
    }

    cout << "The size of the vector is: "<< v.size() << endl;
    cout << v.front()<< endl;
}