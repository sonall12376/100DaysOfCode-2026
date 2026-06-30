struct Node {
    int data;
    Node* prev;
    Node* next;
};

Node* deleteLastNode(Node* head) {
    if (head == nullptr)
        return nullptr;

    if (head->next == nullptr) {
        delete head;
        return nullptr;
    }

    Node* temp = head;

    while (temp->next != nullptr) {
        temp = temp->next;
    }

    temp->prev->next = nullptr;
    delete temp;

    return head;
}