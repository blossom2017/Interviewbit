/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    ListNode * ptra=A;
    ListNode * ptrb=B;
    ListNode * newptr;
    ListNode * prevptra;
    ListNode * prevptrb;
     ListNode * prevptr;
    int value,carry=0;
    int flag=0;
    

     while(ptra!=NULL&& ptrb!=NULL)
    {
        
         value=ptra->val+ptrb->val;
       
       
       
    
       
        ptrb->val=value+carry;
        carry=0;
         if(ptrb->val>=10){carry=1;ptrb->val=ptrb->val%10;}
        // cout<<" "<<carry;
    prevptra=ptra;   ptra=ptra->next;
    prevptrb=ptrb; ptrb=ptrb->next;
        
       
    }
  //  carry=0;
   flag=0;
    if(ptra!=NULL)
    {
prevptrb->next=ptra;
    
    
    while(ptra!=NULL)
    {
        ptra->val=ptra->val+carry;
        carry=0;
        if(ptra->val>=10){ptra->val=ptra->val%10;carry=1;}
        prevptr=ptra;
        ptra=ptra->next;
        
    }
        if(carry!=0)
        {
           ListNode * newnode=new ListNode(carry);
            prevptr->next=newnode;
        }
    }
    else if(ptrb!=NULL)
    {
        while(ptrb!=NULL)
        {
        ptrb->val=ptrb->val+carry;
        carry=0;
        if(ptrb->val>=10){ptrb->val=ptrb->val%10;carry=1;}
        prevptr=ptrb;
        ptrb=ptrb->next;
        
        }
        if(carry!=0)
        {
          ListNode *  newnode=new ListNode(carry);
            prevptr->next=newnode;
        }
    }
    return B;
    
    
}
