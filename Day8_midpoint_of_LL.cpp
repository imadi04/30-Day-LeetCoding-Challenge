class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *slow=head;
    ListNode *fast=head->next;
  if(!fast)
        return head;
    while(fast){
        if(fast->next){
             slow=slow->next;
            fast=fast->next->next;
        }        
        else{
            slow=slow->next;
            break;
        }

}
    return slow; 
    }
};
