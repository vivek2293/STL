#include <bits/stdc++.h>
using namespace std;
const unsigned int M = 1000000007;

#define f(i,n) for(int i = 0; i < n; i++)
#define ll long long


int main(){
    set<int>s1;
    set<string>s2;

    //you cannot access set elements by s[i]
    int x;
    f(i,5){
        cin >> x;
        s1.insert(x);//inserts x into set
    }
    int y;
    cout << "Enter an element to search: " << endl;
    cin >> y;

    cout << s1.count(y) << endl;//returns 0 if element is absent 1 if present
    cout << s1.size() << endl;

    //s.clear()//erases all elements
    //s.erase(x)//erases x from set//value or iterator 
    //s.find(x)//finds x if x is not found returns s.end();//different in return from s.count(x);
    //s.lower_bound(x)//returns first element index that is equal to x if x is not in the set it gives index of first number greater than x if none of the element in the set is greater than or equal to x it gives the value s.end();
    //s.upper_bound(x)//returns first element index that is greater than x if none of the element in the set is greater than x it gives the value s.end();

    
    return 0;
}