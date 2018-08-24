/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 * 
 * typedef struct ListNode listnode;
 * 
 * listnode* listnode_new(int val) {
 *     listnode* node = (listnode *) malloc(sizeof(listnode));
 *     node->val = val;
 *     node->next = NULL;
 *     return node;
 * }
 */
/**
 * @input A : Head pointer of linked list 
 * @input B : Integer
 * 
 * @Output head pointer of list.
 */
listnode* partition(listnode* A, int B) {

    listnode * ptr=A;
    listnode * counterptr=NULL;
    
    listnode * first=NULL;
    listnode * head=NULL;
    listnode * temp;

    listnode * prevptr=NULL;
    int countl=1;
    int countg=1;
    if(A->next==NULL)return A;
    while(ptr!=NULL)
    {
        if(ptr->val>=B&& countg==1)
        {
         // printf("Entering first block");
            first=ptr;
           // printf("%d",first->val);
            
        prevptr=ptr;
            ptr=ptr->next;
            countg++;
            
        }
        
        else if(ptr->val<B&& countl==1)
        {
            listnode * newnode=listnode_new(ptr->val);
            
            head=newnode;
            counterptr=newnode;
        if(prevptr){prevptr->next=ptr->next; }else{ prevptr=ptr;}
            
            ptr=ptr->next;
        countl++;
        
            
        }
        else if(ptr->val<B)
        {
            listnode * newnode=listnode_new(ptr->val);
            counterptr->next=newnode;
            counterptr=counterptr->next;
             temp=ptr->next;
            if(prevptr)   prevptr->next=temp;
         else{ prevptr=ptr;}
           
            ptr=temp;
            countl++;
         
        }
       else if(ptr->val>=B)
       {
           ptr=ptr->next;
           prevptr=prevptr->next;
           countg++;
       }
    }
 if(counterptr!=NULL&& head!=NULL)  {counterptr->next=first;return head;}
 else {return first;}
    
}

