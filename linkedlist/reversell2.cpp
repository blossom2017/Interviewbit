/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseBetween(ListNode* A, int m, int n) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    
    int nf=m-1;
    ListNode * ptr=A;
    ListNode * prevptr=NULL;
    if(A->next==NULL)return A;
    for(int i=1;i<=nf;i++)
    {
        prevptr=ptr;
        ptr=ptr->next;
    }
    ListNode * temp;
    ListNode * start=ptr;
    ListNode * prev=NULL;
    for(int j=1;j<=n-m+1;j++)
    {
        temp=ptr->next;
        ptr->next=prev;
        prev=ptr;
        ptr=temp;
        
        
    }
   if(start) start->next=ptr;
    if(prevptr)prevptr->next=prev;
    else A=prev;
    return A;
}
