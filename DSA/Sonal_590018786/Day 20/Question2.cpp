struct Node {
      int val;
      Node *next;
      Node() : val(0), next(nullptr) {}
      Node(int x) : val(x), next(nullptr) {}
      Node(int x, Node *next) : val(x), next(next) {}
 }; 
Node* divide(Node* head) {
        if (head == nullptr) return head;

        Node *evenHead = nullptr, *evenTail = nullptr;
        Node *oddHead = nullptr, *oddTail = nullptr;

        Node* curr = head;

        while (curr != nullptr) {
            Node* nextNode = curr->next;
            curr->next = nullptr;   // Detach current node

            if (curr->val % 2 == 0) {
                if (evenHead == nullptr) {
                    evenHead = evenTail = curr;
                } else {
                    evenTail->next = curr;
                    evenTail = curr;
                }
            } else {
                if (oddHead == nullptr) {
                    oddHead = oddTail = curr;
                } else {
                    oddTail->next = curr;
                    oddTail = curr;
                }
            }

            curr = nextNode;
        }

        // If no even nodes
        if (evenHead == nullptr)
            return oddHead;

        // Attach odd list after even list
        evenTail->next = oddHead;

        return evenHead;
    }