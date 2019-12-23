/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       int c=0;
        int sum;
        ListNode* h1=NULL;
        ListNode** trail=&h1;
        
        while(l1!=NULL || l2!=NULL)
        {
            sum=getvalue(l1)+getvalue(l2)+c;
            c=sum/10;
            ListNode* add=new ListNode(sum%10);
            *trail=add;
            trail=&add->next;
        }
       if (c>0)
       {
           ListNode* add=new ListNode(c);
           *trail=add;
       }
       return h1; 
    }
    
private: 
    int getvalue(ListNode* &l) //&l 传递地址，使实参改变，否则只改变了形参
    {   int value=0;
        if(l!=NULL)
        {
            value=l->val;
            l=l->next;
        }
        
        return value;
    }
};