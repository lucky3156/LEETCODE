/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head1=l1;
        ListNode* head2=l2;
        ListNode* head=nullptr;
        ListNode* tail=nullptr;
        int carry=0,sum=0;
        while(head1!=nullptr || head2!=nullptr){
            if(head1!=nullptr && head2!=nullptr){
                sum=head1->val + head2->val + carry;
            }
            else if(head1!=nullptr && head2==nullptr){
                sum=head1->val  + carry;
            }
            else if(head2!=nullptr && head1==nullptr){
                sum=head2->val  + carry;
            }
            if(sum>9){
                carry=sum/10;
                sum=sum%10;
            }
            else{
                carry=0;
            }
            ListNode* newNode = new ListNode(sum);
            if (head == nullptr) {
                head = newNode;
                tail = newNode;
            } else {
                tail->next = newNode;
                tail = newNode;
            }
            if (head1) head1=head1->next;
            if (head2) head2=head2->next;
        }
        if (carry > 0) {
            tail->next = new ListNode(carry);
        }

        return head;
    }
};