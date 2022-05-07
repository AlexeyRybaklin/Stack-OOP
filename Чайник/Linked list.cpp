#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

void insert_front(struct Node** head, int newData)
{
    struct Node* newNode = new Node;

    newNode->data = newData;

    newNode->next = (*head);
    newNode->prev = NULL;

    
    if ((*head) != NULL)
        (*head)->prev = newNode;

    
    (*head) = newNode;
}

void insert_After(struct Node* prevNode, int newData)
{
    if (prevNode == NULL) {
        cout << "Previous node cannot be NULL";
        return;
    }
     struct Node* newNode = new Node;

    newNode->data = newData;
    newNode->next = prevNode->next;
    prevNode->next = newNode;
    newNode->prev = prevNode;

        if (newNode->next != NULL)
        newNode->next->prev = newNode;
}


void insert_end(struct Node** head, int newData)
{
    struct Node* newNode = new Node;
    struct Node* last = *head; 
    newNode->data = newData;
    newNode->next = NULL;

    if (*head == NULL) {
        newNode->prev = NULL;
        *head = newNode;
        return;
    }

    while (last->next != NULL)
        last = last->next;

    last->next = newNode;
    newNode->prev = last;
    return;
}

void displayList(struct Node* node) {
    struct Node* last;

    while (node != NULL) {
        cout << node->data << "  ";
        last = node;
        node = node->next;
    }

    if (node == NULL)
        cout << "NULL";
}


int main() {
    
    struct Node* head = NULL;
    insert_end(&head, 40);
    insert_front(&head, 20);
    insert_front(&head, 10);
    insert_end(&head, 50);
    insert_After(head->next, 30);

    displayList(head);
    return 0;
}