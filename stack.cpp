#include <iostream>
using namespace std;

#define size 5
int top = -1;
int arr[size]={0};

void push (int n);
int pop();
int display();
int peek( int n);

void push(int n) {
    if(top == size - 1)
    cout << "The stack is full\n";
    top++;
    arr[top] = n;
}

int pop() {
    if (top == -1)
    {
        cout << "The stack is empty." << endl;
        return -1;
    }
    int temp = arr[top];
    arr[top] ={0};
    top--;
    return (temp);
}

int display() {
    
    for( int i = size - 1; i >=0; i--)
    {
        cout << arr[i] << endl;
    }
    return -1;
}

int peek(int n) {
    cout << arr[n] << endl;
    return -1;
}


int main() {
    int n,val;
    do{
        cout << "Enter the number as choice you want (Press 0 to exit): " << endl;
        cout << "1. push" << endl;
        cout << "2. pop" << endl;
        cout << "3. peek" << endl;
        cout << "4. display" << endl;
        cout << "5.clear screen." << endl << endl;
        cin >> n;

        switch (n) {
            case 1: cout << "Enter the value to enter: ";
            cin >> val;
            push(val);
            break;

            case 2: 
            cout << "Pop successful, Popped value: " << pop() << endl;
            break;

            case 3: cout << "Enter the index value to peek: ";
            cin >> val;
            peek (val);
            break;

            case 4: display();
            break;

            case 5:
            system("Cls");
            break;

            default:
            cout << "Enter the correct option.";

        }
            
        
    }
    while (n != 0);

    return 0;
}