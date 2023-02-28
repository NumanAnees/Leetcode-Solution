//----------------------------------------Recursive-----------------------------------------------
class Solution {
public:
    void findSum(TreeNode* root, int temp ,int &ans){
        if(root==NULL){
            return;
        }
        temp=temp*10+root->val; //temp mein jo b value woh phly 10 k sath multiply hogi phr root value add hogi. 
        //doing this before base condition.......................................
        //If reached the last node
        if(root->left==NULL and root->right==NULL){
            ans+=temp;
        }
        findSum(root->left,temp,ans);
        findSum(root->right,temp,ans);
    }
    int sumNumbers(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        //Output
        int ans=0;
        findSum(root,0,ans);//at start only value
        return ans;
    }
};

//---------------------------------------Iteratitve-------------------------------------------------