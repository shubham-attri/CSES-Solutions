class Solution{
  public:
    bool hasCycle(ListNode* head){
    
      if(!head || !head->next || !head->next->next)return 0;

      ListNode* p1 = head;
      ListNode* p2 = head;

      while(p2 && p2->next){
        p1 = p1->next;
        p2 = p2->next->next;
        if(p1==p2)return 1;
      }
      return 0;
  
    }

};
