#include <bits/stdc++.h>
using namespace std;

int main(){
    pair<int, int> p;
    p = {2,0};

    cout << p.first << " " << p.second << endl;
    cout << endl;
    
    pair<int, int> a[4];
    a[0] = {9,8};
    a[1] = {5,7};
    a[2] = {4,6};
    a[4] = {5,8};

    for(int i = 0;i<5;i++){
        cout << a[i].second <<" "<<a[i].first << endl;
    }
    cout << endl;
    cout << endl;

    pair<int , int> b[4];
    for(int i = 0;i<4;i++){
        cin >> b[i].first >> b[i].second;
    }
    cout << endl;
    cout << endl;

    sort(b,b+4); //can be used

    for(int i = 0;i<4;i++){
        cout << b[i].first << " " << b[i].second << endl;
    }

}
//pair can be of any datatype
//pair<vector<int>,string>
//can be used to return multiple value from a function