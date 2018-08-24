/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::getIntersectionNode(ListNode* A, ListNode* B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    ListNode * ptra=A;
    
    int la=0,lb=0,common;
    ListNode * ptrb=B;
    while(ptra!=NULL){
        ptra=ptra->next;
        la++;
    }
   // cout<<la;
    while(ptrb!=NULL)
    {
        ptrb=ptrb->next;
        lb++;
    }
    //cout<<lb;
    int flag;
    if(la>=lb)
    {common=la-lb;
    flag=1;
    }
    else
    {common=lb-la;
    flag=0;}
    ptra=A;
    ptrb=B;
    if(flag==1)
    {
      //  cout<<"if ";
        for(int i=1;i<=common;i++)
        {
            ptra=ptra->next;
        }
        while(ptra!=NULL&&ptrb!=NULL)
        {
            if(ptra==ptrb){
                return ptra;
            }
            ptra=ptra->next;
            ptrb=ptrb->next;
        }
        return NULL;
    }
    else{
        for(int i=1;i<=common;i++)
        {
            ptrb=ptrb->next;
        }
        while(ptra!=NULL&&ptrb!=NULL)
        {
            if(ptra==ptrb){
                return ptra;
            }
            ptra=ptra->next;
            ptrb=ptrb->next;
        }
        return NULL;
        
    }
    
}
