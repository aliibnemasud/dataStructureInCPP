#include <iostream>
using namespace std;

    int MAX = 10;
    int books[10];
    int top = -1;

    int peek (){
        return books[top];
    }

    // Checking elements full or empty

    int isEmpty() {
        return (top == -1 ) ? 1 : 0;
    }

    int isFull() {
        return (top == MAX) ? 1 : 0;
    }

    // Adding element to the stack

    int push (int data){
       if(isFull()){
        cout << "Stack Is full. You can't insert Data" << endl;
       }
       else {
         top = top + 1;
         books[top] = data;
       }
    }
    // Delete element from the top
    int pop (){
        if(isEmpty()){
            cout << "Stack is Empty. You can delete anything from here" << endl;
        }
        else {
            int data;
            top = top - 1;
            data = books[top];
            return data;
        }
    }

int main () {

    int i;
    push(52);
    push(75);
    push(52);
    push(75);
    push(52);
    push(75);
    push(52);
    push(75);
    push(52);
    push(75);
    push(52);

    pop();



    cout << "Top Elements is: " << peek() << endl;
    cout << "Other Elements: " << endl;

    for (i=top; i>=0; i--){
        cout << books[i] << endl;
    }

    string statusFull = isFull() ? "true" : "false";
    string statusEmpty = isEmpty() ? "true" : "false";

    cout << "Stack Is Full: " << statusFull << endl;
    cout << "Stack Is Empty: " << statusEmpty << endl;

    return 0;
}
