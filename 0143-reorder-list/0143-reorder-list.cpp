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
    void reorderList(ListNode* head) {
        if(head!=NULL)
        {
        vector<int> arr;
        ListNode* temp = head;
        int i=0;
        while(temp->next!=NULL){
            arr.push_back(temp->val);
            temp = temp->next;
        }
        if(temp->next==NULL){
            arr.push_back(temp->val);
        }
        temp=head;
        i=0;
        int j=arr.size()-1;
        while( i< j){
            temp->val = arr[i];
            i++;
            temp=temp->next;
            temp->val = arr[j];
            j--;
            temp=temp->next;
        }
        if (i == j) {
                temp->val = arr[i];
            }
        }
    }
};