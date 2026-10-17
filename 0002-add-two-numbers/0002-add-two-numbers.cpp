class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            ListNode*res = new ListNode(0); // res naam ki new node bnai 
            ListNode*ptr = res; // ptr traverse krega res pr
            int carry = 0; // carry naam ka variable bnaya 
        while (l1 || l2 || carry){
        int sum = 0+ carry;   // sum m mein caary or sum+ ko bhi plus kar dunga 
        if (l1){
            sum+=l1->val;  // sum mein l1 ki val daal do
            l1=l1->next;  // fir l1 ko next node pr le jao
            }
            if (l2){ 
            sum+=l2->val;   // sum mein l2 ki val daal do
            l2=l2->next;    // fir l2 ko next node pr le jao
            }
        carry = sum/10; // fir carry nikala 
        sum = sum%10;    // bina carry wala sum nikala 
        ptr->next = new ListNode(sum); // sum ko res ke next node se add kar diya 
        ptr = ptr->next; // fir ptr ko next node pr le gye
        }
        if (carry>0) {
            ptr->next = new ListNode(carry);
        }
        return res->next;
    }
};