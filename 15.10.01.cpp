#include <iostream>
using namespace std;

class node {
public:
    int val;
    node* next;

    node(int value) {
        val = value;
        next = nullptr;
    }
};

class MyLinkedList {
public:
    node* head;
    int size;

    MyLinkedList() {
        head = nullptr;
        size = 0;
    }

    int get(int index) {
        if (index < 0 || index >= size) return -1;
        node* curr = head;
        for (int i = 0; i < index; i++) {
            curr = curr->next;
        }
        return curr->val;
    }

    void addAtHead(int val) {
        node* newNode = new node(val);
        newNode->next = head;
        head = newNode;
        size++;
    }

    void addAtTail(int val) {
        node* newNode = new node(val);
        if (head == nullptr) {
            head = newNode;
        } else {
            node* curr = head;
            while (curr->next != nullptr) {
                curr = curr->next;
            }
            curr->next = newNode;
        }
        size++;
    }

    void addAtIndex(int index, int val) {
        if (index < 0 || index > size) return;

        if (index == 0) {
            addAtHead(val);
            return;
        }

        if (index == size) {  // ✅ Fix: handle tail insertion
            addAtTail(val);
            return;
        }

        node* newNode = new node(val);
        node* curr = head;
        for (int i = 0; i < index - 1; i++) {
            curr = curr->next;
        }
        newNode->next = curr->next;
        curr->next = newNode;
        size++;
    }

    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) return;

        if (index == 0) {
            node* temp = head;
            head = head->next;
            delete temp;
        } else {
            node* curr = head;
            for (int i = 0; i < index - 1; i++) {
                curr = curr->next;
            }
            node* temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
        }
        size--;
    }
};

