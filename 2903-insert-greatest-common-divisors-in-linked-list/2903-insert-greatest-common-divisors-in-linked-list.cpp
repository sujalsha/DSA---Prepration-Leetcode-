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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp = head;
        while(temp->next != NULL) {
            ListNode* temp2 = temp->next;  
            ListNode* newNode = new ListNode();
            int gcd = __gcd(temp->val, temp2->val);
            newNode->val = gcd;
            temp->next = newNode;
            newNode->next = temp2;
            temp = temp2;
        }
        return head;
    }
};
