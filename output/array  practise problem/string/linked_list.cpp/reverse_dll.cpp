#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node* next;
    node* back;

    node(int data1, node* next1, node* back1) {
        data = data1;
        next = next1;
        back = back1;
    }

    node(int data1) {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

node* reverseDLL(node* head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }

    node* current = head;
    node* prev = nullptr;

    while (current != nullptr) {
        prev = current->back;

        current->back = current->next;
        current->next = prev;

        current = current->back;
    }

    return prev->back;
}

void printDLL(node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};

    node* head = new node(arr[0]);

    node* current = head;

    for (int i = 1; i < arr.size(); i++) {
        node* newNode = new node(arr[i]);

        current->next = newNode;
        newNode->back = current;

        current = newNode;
    }

    cout << "Original DLL: ";
    printDLL(head);

    head = reverseDLL(head);

    cout << "Reversed DLL: ";
    printDLL(head);

    return 0;
}