/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    
    int length=0;
    ListNode * ptr=A;
    
    while(ptr->next!=NULL)

    {
        ptr=ptr->next;
        length++;
    }
    length++;
    ptr->next=A;
    //ptr=A;
    ListNode * ptrn=A;
    ListNode * prev;
    int i=1;
    while(i<=length-B%length)
    {
         prev=ptrn;
        ptrn=ptrn->next;
       
        i++;
    }
    prev->next=NULL;
    return ptrn;
    
    
}
