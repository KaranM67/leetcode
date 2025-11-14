/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
        
            int n=0;
        struct ListNode* temp=head;
        while(temp!=NULL)
        {
           temp = temp->next;

            n=n+1;
        }
        struct ListNode* curr=head;
        if(n%2 !=0)
        {
        for(int i=0;i<n/2;i++)
        {
            curr=curr->next;
        }
        }
        else
        {
        for(int i=0;i<((n+1)/2);i++)
        {
            curr=curr->next;
        }
}
     return curr;
}