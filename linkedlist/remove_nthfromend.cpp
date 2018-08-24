/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

int length=0;
ListNode * p=A;

while(p!=NULL)
{
    p=p->next;
    length++;
    
}
if(B>=length)return A->next;
int pos=length-B;
int i=1;
ListNode * prev;
ListNode * ptrn=A;
while(i<pos)
{
    prev=ptrn;
    ptrn=ptrn->next;
    i++;
}
ptrn->next=ptrn->next->next;
return A;
    
    
}
