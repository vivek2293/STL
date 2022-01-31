#include <bits/stdc++.h>
using namespace std;

int main(){
    //map <key_datatype,value_datatype> name

    map <string ,int> report;
    //map are similar to set in map key are unique and sorted;
    //negative int are also valid as keys

    report["Vivek"] = 90;
    report["Alpha"] = 95;

    cout << "If you want the report of Vivek and Alpha then here is the result: \n" << "Vivek scored: " << report["Vivek"] << "\nAlpha scored: " << report["Alpha"] << endl;

    //report.clear() //clears a map
    //report.count(key);report.find(key);report.erase(key);report.lower_bound(key);report.upper_bound(key);
    //map iterators work as they work in set but they will give you pair of <key, value>
    

    return 0;
}