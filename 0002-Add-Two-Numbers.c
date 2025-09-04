
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
   int C = 0;
   struct ListNode p ={0,NULL};
   struct ListNode* q = &p;

   while(l1 ||l2 ||C){
    int x = l1 ? l1 -> val : 0;
    int y = l2 ? l2 -> val : 0;
    int sum = x + y + C;
    C = sum / 10;

     struct ListNode* node = malloc(sizeof(struct ListNode));
     node -> val = sum % 10;
     node -> next = NULL;

     q -> next =node;
     q = node;

     if(l1) l1 = l1 -> next;
     if(l2) l2 = l2 -> next;
   }
   
   return p.next;
}
