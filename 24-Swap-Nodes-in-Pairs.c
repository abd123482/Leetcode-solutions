struct ListNode* swapPairs(struct ListNode* head) {
      if (head == NULL || head->next == NULL) return head;

    struct ListNode* s = (struct ListNode*)malloc(sizeof(struct ListNode));
    s->next = head;

    struct ListNode* r = s;
    struct ListNode* p = head;
    struct ListNode* q = head->next;

    while (p != NULL && q != NULL) {
        r->next = q;
        p->next = q->next;
        q->next = p;
        r = p;
        p = p->next;
        if (p != NULL) q = p->next;
    }

    return s->next;
}
