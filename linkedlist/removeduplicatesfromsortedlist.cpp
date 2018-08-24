/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(A==NULL||A->next==NULL)return A;
    ListNode * ptra=A;
    ListNode * ptrb=A->next;
    while(ptrb!=NULL)
    {
        if(ptra->val==ptrb->val)
        {
            ptra->next=ptrb->next;
            ptrb=ptra->next;
            
        }
        else {
            ptra=ptra->next;
            ptrb=ptrb->next;
        }
    }
    return A;
}
