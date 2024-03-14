class Solution {
  public:
    ListNode* addTwoNumbers(ListNode* l1,ListNode* l2){

      ListNode* dummy = new ListNode();
      ListNode* curr = dummy;
      int carry = 0;
      while(l1 || l2 ){
        int v1 = l1 ? l1->val:0;
        int v2 = l2 ? l2->val : 0;

        int sum = v1+v2+carry;
        carry = sum/10;
        curr->next = new ListNode(sum%10);
        curr = curr->next;
        if(l1)l1=l1->next;
        if(l2)l2=l2->next;
        if(carry==1)curr->next = new ListNode(1);
      }

      return dummy->next;

    }
};
