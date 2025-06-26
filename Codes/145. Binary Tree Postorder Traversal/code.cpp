/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
      vector<int>result;
      stack<TreeNode*> st;
        TreeNode* current=root;
        TreeNode* lastvisited=nullptr;
        while(current!=nullptr || !st.empty()){
            while(current!=nullptr){
                st.push(current);
                current=current->left;
            }
            TreeNode* temp=st.top();

            if(temp->right!=nullptr && temp->right!=lastvisited){
              current=temp->right;
            }
            else{
                st.pop();
                result.push_back(temp->val);
                lastvisited=temp;
            }
        }
    return result;
    }
};
