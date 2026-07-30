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
    ListNode* merge(ListNode* head1, ListNode* head2) {
        ListNode* dummy = new ListNode(0);

        ListNode* head = dummy;

        while (head1 && head2) {
            if (head1->val <= head2->val) {
                head->next = head1;
                head1 = head1->next;
            } else {
                head->next = head2;
                head2 = head2->next;
            }
            head = head->next;
            // head->next=NULL;
        }
        if (head1) {
            head->next = head1;

        } else {
            head->next = head2;
        }

        return dummy->next;
    }
    ListNode* mergeSort(vector<ListNode*>& arr, int start, int end) {
        if (start > end) {
            return NULL;
        }
        if (start == end) {
            return arr[start];
        }

        int mid = start + (end - start) / 2;

        ListNode* left = mergeSort(arr, start, mid);
        ListNode* right = mergeSort(arr, mid + 1, end);

        return merge(left, right);
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size();
        if (lists.empty()) {
            return NULL;
        }
        return mergeSort(lists, 0, n - 1);
    }
};