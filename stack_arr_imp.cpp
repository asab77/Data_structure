#include<iostream>

using namespace std;
#define MAX 1000

class stack {
private:
    int top;
public:
    // maximum size of stack
    int a[MAX];
    stack() {top = -1;} //This means that stack is empty
    bool push(int x);  //This inserts element to stack
    int pop();         //This removes the last element from stack
    int peek();        //This gives the top element
    bool isEmpty();    //This returns if stack is empty or not
};


bool stack::push(int x) {
    // check if the stack is full
    if (top >= MAX - 1) {
        cout << "Stack overflow" << endl;
        return false;
    } else {
        a[++top] = x;
        cout << x << " Pushed into stack\n";
        return true;
    }
}

int stack::pop() {
    // check if stack is empty
    if (top < 0) {
        cout << "Stack underflow" << endl;
        return 0;
    } else {
        int x = a[top--];
        return x;
    }
}

int stack::peek() {
    // check if the stack is empty
    if (top < 0) {
        cout << "Stack is Empty" << endl;
        return 0;
    } else {
        int x = a[top];
        return x;
    }
}

bool stack::isEmpty(){
    return (top < 0);
}

// Testing the functions
int main() {
    // create the stack
    stack s;

    // push elements to stack
    s.push(1);
    s.push(2);
    s.push(10);

    cout << s.pop() << " Popped from stack" << endl;

    cout << "The element is: " << s.peek() << endl;

    cout << "Elements present in stack: ";
    while (!s.isEmpty()) {
        cout << s.peek() << " ";
        s.pop();
    }

    return 0;
}
