/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 TreeNode * util(ListNode * A,ListNode * B)
 {
     if(A==B)return NULL;
     ListNode * fast = A;
     ListNode * slow = A;
     ListNode * prev=slow;
     while(fast!=B&&fast->next!=B)
     {
         prev=slow;
         
         fast= fast->next->next;
         slow = slow->next;
     }
   //  cout<<slow->val<<" ";
     TreeNode * nn = new TreeNode(slow->val);
     nn->left = util(A,slow);
     nn->right = util(slow->next,B);
     return nn;
 }
TreeNode* Solution::sortedListToBST(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
if(!A)return NULL;
return util(A,NULL);
    
}
