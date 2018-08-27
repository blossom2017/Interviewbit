/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
struct compare
{
  bool operator()(ListNode * a, ListNode * b)
  {
      return a->val>b->val;
  }
};
ListNode* Solution::mergeKLists(vector<ListNode*> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    ListNode * dummy = new ListNode (-1);
    ListNode * ptr = dummy;
    priority_queue<ListNode *,vector<ListNode*>,compare> pq;
    for(int i=0;i<A.size();i++)if(A[i])pq.push(A[i]);
    while(!pq.empty())
    {
        ListNode * top = pq.top();
        pq.pop();
        dummy->next = new ListNode(top->val);
        dummy=dummy->next;
        if(top->next)pq.push(top->next);
    }
    return ptr->next;
    
}
