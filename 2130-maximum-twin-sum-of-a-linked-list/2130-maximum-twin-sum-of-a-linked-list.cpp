
class Solution {
public:
    int pairSum(ListNode* head) {
        stack<int> st;
        ListNode* curr = head;
        while (curr != NULL) {
            st.push(curr->val);
            curr = curr->next;
        }

        int N = st.size();
        curr = head;
        int count = 0;
        int result = 0;
        while (count < N / 2) {
            result = max(st.top() + curr->val, result);
            st.pop();
            curr = curr->next;
            count++;
        }
        return result;
    }
};