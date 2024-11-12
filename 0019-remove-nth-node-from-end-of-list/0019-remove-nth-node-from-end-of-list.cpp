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
        if( head != NULL && head->next != NULL){
            int i = 1;
            ListNode *temp1 = head;
            ListNode *temp2 = head;
            while(temp1->next!=NULL){
                temp1 = temp1->next;
                i++;
            }
            int j = 1;
            if((i-n)==0){
                head = head->next;
            }  
            else{
                while(j != (i-n)){
                temp2 = temp2->next;
                j++;
            }  
            }
                  
                   
             if(temp2->next !=NULL){
                    temp2->next = temp2->next->next;
                    }
            else if(temp2->next==NULL){
                temp2 = NULL;
            }
             return head;
            }
       else {
           head = NULL;
       }
        return head;
        
    }
};