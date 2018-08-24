/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reorderList(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
ListNode * fastptr=A;
ListNode * slowptr=A;
ListNode * slowprev=NULL;
if(A==NULL||A->next==NULL||A->next->next==NULL)return A;
while(fastptr!=NULL&&fastptr->next!=NULL)
{
    if(slowprev)slowprev=slowprev->next;
    else {slowprev=slowptr;}
    slowptr=slowptr->next;
    fastptr=fastptr->next->next;
    
}
ListNode * temp;
ListNode * revprev=NULL;
while(slowptr!=NULL)
{
    temp=slowptr->next;
    slowptr->next=revprev;
    revprev=slowptr;
    slowptr=temp;
}
   slowprev->next=NULL;
    ListNode * ptra=A;
    ListNode * ptrb=revprev;
    ListNode * tempa;
    ListNode * tempb;
    ListNode * trvptr=A;
    while(ptra!=NULL &&ptrb!=NULL)
    {
        tempa=ptra->next;
        tempb=ptrb->next;
        ptra->next=ptrb;
        ptrb->next=tempa;
        // if(trvptr)trvptr=trvptr->next;
        //else trvptr=ptra;
        ptra=tempa;
        ptrb=tempb;
       
    }
    
    if(ptrb!=NULL)
    {while(trvptr->next!=NULL)
        {
            trvptr=trvptr->next;
        }
        trvptr->next=ptrb;
    }
    return A;
    
}
