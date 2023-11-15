/**
 * Definition of doubly linked list:
 *
 * struct Node {
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() : data(0), prev(nullptr), next(nullptr) {}
 *      Node(int val) : data(val), prev(nullptr), next(nullptr) {}
 *      Node(int val, Node *p, Node *n) : data(val), prev(p), next(n) {}
 * };
 *
 *************************************************************************/

Node * deleteLastNode(Node *head) {
    // Write your code here
    // if(head==NULL){
    //     return;
    // }
    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return nullptr;
    }

    Node* current = head;
    while(current->next!=NULL){
        current = current->next;
    }

    current->prev->next = NULL;
    return head;
}
