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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == NULL)
            return list2;
        if (list2 == NULL)
            return list1;

        if (list1->val <= list2->val) {
            list1->next = mergeTwoLists(list1->next, list2);
            return list1;
        } else {
            list2->next = mergeTwoLists(list2->next, list1);
            return list2;
        }
    }

    ListNode* partition_merge(int start, int end, vector<ListNode*>& lists) {
        if (start == end) {
            return lists[start];
        }
        if (start > end) {
            return NULL;
        }

        int mid = start + (end - start) / 2;

        ListNode* L1 = partition_merge(start, mid, lists);
        ListNode* L2 = partition_merge(mid + 1, end, lists);
        return mergeTwoLists(L1, L2);
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int k = lists.size();
        if (k == 0)
            return NULL;

        return partition_merge(0, k - 1, lists);
    }
};