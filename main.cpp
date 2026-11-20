#include <iostream>
using namespace std;

class Stack {
private:
    int data[100];
    int top;
public:
    Stack() { top = -1; }

    void push(int x) {
        if (top >= 99) {
            cout << "Stack penuh!" << endl;
            return;
        }
        data[++top] = x;
        cout << x << " ditambahkan ke stack" << endl;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack kosong! Tidak bisa pop." << endl;
            return -1;
        }
        return data[top--];
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack kosong!" << endl;
            return -1;
        }
        return data[top];
    }

    bool isEmpty() { return top == -1; }
    int size() { return top + 1; }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << "Peek: " << s.peek() << endl;
    cout << "Size: " << s.size() << endl;
    cout << "Pop: " << s.pop() << endl;
    cout << "IsEmpty: " << s.isEmpty() << endl;
    return 0;
}
