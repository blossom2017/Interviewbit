/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    ListNode * ptra=A;
    ListNode * ptrb=B;
    ListNode* ptrnew;
    int flag=0;
    ListNode * temp;
    
    if(ptra->val<=ptrb->val)
    {

    ptrnew=A;    
    ptra=ptra->next;
    flag=1;
    }
    else{ ptrnew=B;
 
    ptrb=ptrb->next;}
    
    while(ptra!=NULL&&ptrb!=NULL)
    {
       
        if (ptra->val<=ptrb->val)
        {
           
           temp=ptra;
           ptra=ptra->next;
            ptrnew->next=temp;
        
            
        }
        
        else if(ptrb->val<ptra->val)
        {
          
           temp=ptrb;
            ptrb=ptrb->next;
            ptrnew->next=temp;
         
            
        }
        ptrnew=ptrnew->next;
    }
    if(ptrb!=NULL)
    {
        ptrnew->next=ptrb;
    }
    else if(ptra!=NULL)
    {
        ptrnew->next=ptra;
    }
    
    if(flag)return A;
    else return B;
}
