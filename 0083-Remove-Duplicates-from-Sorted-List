struct ListNode* deleteDuplicates(struct ListNode* head) {
    if (head == NULL) return NULL;

    struct ListNode* p = head;

    while (p != NULL && p->next != NULL) {
        if (p->val == p->next->val) {
            struct ListNode* q = p->next;   
            p->next = q->next;            
            free(q);                   
        } else {
            p = p->next;  
        }
    }

    return head;
}
