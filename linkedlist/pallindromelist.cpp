/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::lPalin(ListNode* A) {
    
    if(A==NULL||A->next==NULL)return 1;

   ListNode * fastptr=A;
   ListNode * slowptr=A;
   ListNode * slowprev=NULL;
   ListNode * temp;
   while(fastptr!=NULL&&fastptr->next!=NULL)
   {
       if(slowprev)slowprev=slowprev->next;
       else {slowprev=slowptr;}
       slowptr=slowptr->next;
       
       fastptr=fastptr->next->next;
   }
   
   ListNode * prevrev=NULL;
 
   while(slowptr!=NULL)
   {
       temp=slowptr->next;
       slowptr->next=prevrev;
       prevrev=slowptr;
       slowptr=temp;
     //  count++;
       
   }
   slowprev->next=prevrev;
    ListNode * ptra;
   
  ptra=prevrev;
   
  
   ListNode * ptrb=A;
   while(ptra!=NULL&& ptrb!=NULL&& ptrb!=prevrev)
   {
       if(ptra->val!=ptrb->val)return 0;
       ptra=ptra->next;
       ptrb=ptrb->next;
   }
   return 1;
}

