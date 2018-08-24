/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::detectCycle(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
if(A->next==A)return A;
    ListNode * fastptr=A;
    int flag=0;
    ListNode * slowptr=A;
    while(slowptr!=NULL&&fastptr!=NULL&&fastptr->next!=NULL)
    {
       
      //  cout<<"entering while loop";
        slowptr=slowptr->next;
        fastptr=fastptr->next->next;
          if( slowptr==fastptr)
        {
             flag=1;
            break;
           
        }
        
       
    }
  //  cout<<flag;
    
    if(flag==1)
    {
    ListNode * startptr=A;
    while(startptr!=slowptr)
    {
        
        startptr=startptr->next;
        slowptr=slowptr->next;
        
    }return slowptr;}
    
    return NULL;
    
}
