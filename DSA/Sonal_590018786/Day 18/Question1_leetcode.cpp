struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr || head->next == nullptr || k == 0)
            return head;

        int len = 1;
        ListNode* tail = head;

        while(tail->next){
            tail = tail->next;
            len++;
        }

        k %= len;
        if(k == 0) return head;

        ListNode* newTail = head;
        for(int i = 1; i < len - k; i++){
            newTail = newTail->next;
        }

        ListNode* newHead = newTail->next;

        tail->next = head;
        newTail->next = nullptr;

        return newHead;
    }