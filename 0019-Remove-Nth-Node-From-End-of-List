struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    int length = 0;
    struct ListNode* p = head;

    while (p) {
        length++;
        p = p->next;
    }

    if (n == len) {
        struct ListNode* q = head;
        head = head->next;
        free(q);
        return head;
    }

    p = head;
    for (int i = 1; i < length - n; i++) {
        p = p->next;
    }

    struct ListNode* q = p->next;
    p->next = q->next;
    free(q);

    return head;
}
