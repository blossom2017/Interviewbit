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
listnode* reverseList(listnode* A, int B) {
    
listnode * ptr=A;
listnode * ptra=NULL;
listnode * ptrb=A;
listnode * temp;
listnode * start;

int i;


    for( i=1;i<=B;i++)
    {
        temp=ptrb->next;
        ptrb->next=ptra;
        ptra=ptrb;
        ptrb=temp;
    }
    
   if(temp!=NULL) 
   A->next=reverseList(temp,B);
   



    return ptra;
    
}
