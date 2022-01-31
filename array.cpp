#include <iostream>
#include <array>

using namespace std;
int main() {
    array <int,4> a = {5,6,7,8};

    cout<< a.size() <<endl;

    for (int i = 0;i < a.size() ;i++) {
        cout << a.at(i) <<endl;
    }

    cout << endl << a.front() << a.back() ;
}