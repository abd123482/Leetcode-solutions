/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
struct ListNode p ={0 , NULL};
struct ListNode* q=&p;
while(list1 && list2){
    int x=list1->val;
    int y=list2->val;
    if(x<y){
        struct ListNode* node = malloc(sizeof(struct ListNode));
        node->next = NULL;
        node->val = x;
        q->next =node;
        q = node;
        list1 =list1->next;
    }
    else{
        struct ListNode* node = malloc(sizeof(struct ListNode));
        node->next = NULL;
        node->val = y;
        q->next =node;
        q = node;
        list2 =list2->next;
    }
    
}
while(list1){
        int x=list1->val;
        struct ListNode* node = malloc(sizeof(struct ListNode));
        node->next = NULL;
        node->val = x;
        q->next =node;
        q = node;
        list1 =list1->next;
}
while(list2){
       int y=list2->val;
        struct ListNode* node = malloc(sizeof(struct ListNode));
        node->next = NULL;
        node->val = y;
        q->next =node;
        q = node;
        list2 =list2->next;    
}
 return p.next;
}
