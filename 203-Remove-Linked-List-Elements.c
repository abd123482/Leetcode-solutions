struct ListNode* removeElements(struct ListNode* head, int val) {

    while (head != NULL && head->val == val) {
        struct ListNode* r = head;
        head = head->next;
        free(r);
    }

    struct ListNode* p = head;
    while (p != NULL && p->next != NULL) {
        struct ListNode* q = p->next;
        if (q->val == val) {
            p->next = q->next;
            free(q);
        } else {
            p = p->next;
        }
    }

    return head;
}
