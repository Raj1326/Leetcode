/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* firstnode = head;
        ListNode* secondnode= head;
        if(head->next == NULL){
            return NULL;
        }
       
        while(firstnode->next != NULL){
            if(n>0){
                firstnode = firstnode->next;
                n--;
            }
            else{
                secondnode = secondnode->next;
                firstnode = firstnode->next;
            }
        }
        if(n>=1) 
            return head->next;
        secondnode->next = secondnode->next->next;
        return head;
        
        
    }
};