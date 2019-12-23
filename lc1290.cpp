//runtime:4 ms, faster than 58.69% of C++ online submissions
//memory:8.4 MB, less than 100.00% 


class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int sum=0;
        while(head!=NULL)
        {
            sum=sum*2+head->val;
            head=head->next;
        }
        return sum;
    }
};
