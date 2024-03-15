class Solution{
  public:
    ListNode* removeNthFromEnd(ListNode* head,inthttps://www.producthunt.com/ n){
    
      ListNode* dummy = ListNode(0);
      
      dummy->next = head;


      ListNode *first = dummy;
      ListNode *second = dummy;

      for(int i =0 ; i <=n;i++){
        first = first->next;
      }

      while(first != nullptr){
        first=first->next;
        second = second->next;
      }

      second->next = second->next->next;

      return dummy->next;

    }
};
