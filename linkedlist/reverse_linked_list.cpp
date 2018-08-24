/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    ListNode * ptra=A;
    ListNode * temp;
    ListNode * prev=NULL;
    ListNode * temp1;
    ListNode * ptrb=A->next;
    while(ptra!=NULL&&ptrb!=NULL)
    {
    temp1=ptrb->next;
    ptrb->next=ptra;
    ptra->next=prev;
    prev=ptra;
    ptra=ptrb;
    ptrb=temp1;
    
    
    
    }
    return ptra;
}
