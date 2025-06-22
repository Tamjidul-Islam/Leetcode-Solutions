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
    ListNode* reverseList(ListNode* head) {
      ListNode* previous=nullptr;
      ListNode*current=head;
      while(current!=nullptr){
        ListNode* next=current->next;
        current->next=previous;
        previous=current;
        current=next;

      }
      return previous;
    }
};

//Leetcode Solution Link: https://leetcode.com/problems/reverse-linked-list/solutions/6869126/c-iterative-method-beats-100-by-tamjidul-teke

