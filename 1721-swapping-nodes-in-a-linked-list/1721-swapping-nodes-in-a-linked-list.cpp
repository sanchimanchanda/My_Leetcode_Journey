
class Solution {
public:
int findLength(ListNode* head){
        int count = 0 ;
        while(head){
            head = head->next;
            count++;
        }
        return count;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        int length = findLength(head);

        int k_1 = k ;
        ListNode* node1 = head;
        while(k_1 >1){
            node1 = node1->next;
            k_1--;
        }
        int k_2 = length -k +1 ;
        ListNode* node2 = head;
        while(k_2 >1){
            node2 = node2->next;
            k_2--;
        }

        swap(node1->val,node2->val);
        return head;
    }
};