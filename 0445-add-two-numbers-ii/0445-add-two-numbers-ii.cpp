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


 ListNode* Reverse(ListNode* head) {
        ListNode* curr = head;
        ListNode* fut = NULL;
        ListNode* prev = NULL;
        while (curr != NULL) {
            fut = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fut;
        }
        return prev;
    }

class Solution {   
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = Reverse(l1);
        l2 = Reverse(l2);

        ListNode* curr1 = l1;
        ListNode* curr2 = l2;

        ListNode* head = new ListNode(0);
        ListNode* tail = head;

        int sum = 0, carry = 0;

        while (curr1 || curr2 || carry > 0) {
            sum = carry;
            if (curr1 != NULL) {
                sum += curr1->val;
                curr1 = curr1->next;
            }
            if (curr2 != NULL) {
                sum += curr2->val;
                curr2 = curr2->next;
            }

            carry = sum / 10;
            tail->next = new ListNode(sum % 10);
            tail = tail->next;
        }
        head=Reverse(head->next);
        
        return head;


    }
};