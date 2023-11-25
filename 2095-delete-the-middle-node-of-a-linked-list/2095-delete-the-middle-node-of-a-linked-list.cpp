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
    ListNode* deleteMiddle(ListNode* head) {
        int size=0 ;
        ListNode * p =head;
        while(p){
            size++;
            p=p->next;
        }
        int pos = (size/2)+1;
        p=head;
        ListNode *q = nullptr;
        for(int i =0 ; i<pos-1;i++){
            q=p;
            p=p->next;
        }
        if(q){
            q->next = p->next;
            delete p;
        }else{
            head=p->next;
            delete p ;
        }
        return head;
    }
};