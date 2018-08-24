/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::insertionSortList(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    ListNode * newhead=A;
  //  ListNode * newptr=A;
//    LisNode * newprev=NULL;
    ListNode *  ptr;
   
   
    if(A==NULL||A->next==NULL)return A;
    ptr=A->next;
    newhead->next=NULL;
    while(ptr!=NULL)
    {
        ListNode * temp =ptr->next;
      //  cout<<"enterting while";
        //cout<<"value of node "<<ptr->val;
          ListNode * newptr=newhead;
   
     if(ptr->val<=newhead->val)
            {
                
                ptr->next=newhead;
                newhead=ptr;
            }
        else {    
          
    
     
        while(newptr->next!=NULL&&newptr->next->val<ptr->val)
        {
           newptr=newptr->next;
        }
         ptr->next=newptr->next;
        newptr->next=ptr;
       
        
            
        }
        
        ptr=temp;
            
        
    }
    return newhead;
    
}
