#include <iostream>
#include <deque>

using namespace std;
int main() {

    deque <int> d; //multiple static arrays are used and kept track of.

    d.push_back(1);
    d.push_front(86);
    d.push_front(7);
    d.push_front(67);
    

    for (int i =0; i< d.size();i++)
    {
        cout << d[i] << endl;
    }

    // d.pop_back();
    // d.pop_front();
    
    cout << "Print first index element: " << d.at(1) << endl;

    cout << "Front: " << d.front() << endl;
    cout << "Back: " << d.back() << endl;

    cout << "Empty or not: " << d.empty() << endl;

    cout << "Before Erase size: "<< d.size()  << endl;
    d.erase(d.begin(),d.begin() + 2);   //where to erase 

    cout << "After Erase size: " << d.size() << endl;
    // d.size() becomes less after erase. So in loop take care of it otherwise loop will terminate earlier than required if d.size() is used as a test expression and loop is deleting something from d
}