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
    bool isPalindrome(ListNode* head) {
        ListNode*current=head;
        stack<int>st;
        while(current!=nullptr){
            st.push(current->val);
            current=current->next;
        }
        current=head;
        while(current!=nullptr){
            if(current->val!=st.top()) return false;
            st.pop();
            current=current->next;
        }
        return true;
    }
};
