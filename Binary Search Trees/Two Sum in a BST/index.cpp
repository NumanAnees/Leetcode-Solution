class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        if (!root) return false;
        if (s.count(k - root->val)) return true;
        s.insert(root->val);//insert after so no duplicates
        return findTarget(root->left, k) || findTarget(root->right, k);//or operator here because we find any 1 true.
    }
    
private:
    unordered_set<int> s;
};