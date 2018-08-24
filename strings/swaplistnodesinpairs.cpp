/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    ListNode * ptr=A;
    ListNode * temp;
    ListNode * prevptr=new ListNode(-1);
    prevptr->next=A;
    if(A->next==NULL)return A;
    ListNode * newhead=ptr->next;
    while(ptr!=NULL&&ptr->next!=NULL)
    {
        temp=ptr->next->next;
        ptr->next->next=ptr;
        prevptr->next=ptr->next;
        ptr->next=temp;
        prevptr=ptr;
        ptr=temp;
        
    }
    return newhead;
}
