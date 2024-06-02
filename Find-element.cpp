#include<bits/stdc++.h>
using namespace.std;
// code to find the 5/7 th element of likned list 

// assuming the node and linked list to be
/*
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
public:
    Node* head;
    LinkedList() : head(nullptr) {}

    void append(int data) {
        if (!head) {
            head = new Node(data);
            return;
        }
        Node* current = head;
        while (current->next) {
            current = current->next;
        }
        current->next = new Node(data);
    }*/
int findFractionElement(double fraction) {
        // Calculate the length of the linked list
        int length = 0;
        Node* current = head;
        while (current) {
            length++;
            current = current->next;
        }
        
        
        int targetIndex = static_cast<int>(length * fraction);

        // Traverse the list again to get the element at the target index
        current = head;
        for (int i = 0; i < targetIndex; i++) {
            if (current) {
                current = current->next;
            } else {
                throw out_of_range("Cannot find the element");
            }
        }

        if (current) {
            return current->data;
        } else {
            throw out_of_range("Cannot find the element");
        }
    }

int main(){
    return 0;
}