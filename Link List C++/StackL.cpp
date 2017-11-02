#include "StackL.h"






int Stack::size() {
    return data.size();
}

void Stack::push(int a) {
    if (top() < data.size() - 1) {
        data.insert(a, 0);
    }
    else {
        cout << "STACK FULL" << endl;
        data.remove(1);
    }
}

void Stack::pop() {
    
    if (top() == -1) {        // If stack is empty.
        cout << " STACK IS EMPTY. DAMN IT" << endl;
        //return NULL;
    }
    else {
        data.remove(1);
        //data = arr[top]; // assign number of values in arr to data
        //arr[top] = NULL; // assign null to number of values in arr
        //top--; // decrement top by 1
        //return data; // return previous top
    }
}

int Stack::top() {
    
    return data.get(1);
    
}

void Stack::clear() {
    data.ClearAll();
}

