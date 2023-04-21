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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || k == 0) 
            return head;
        ListNode* temp,*tail,*nh,*nt;
        tail=head;
        int l=1;
        nt=head; //new tail
        while(tail->next!=NULL)
        {
            l++;
            tail=tail->next;
        }
        k=k%l;
        if (k==0)
            return head;
        for (int i=0;i<l-k-1;i++)
        {
            nt=nt->next;
        }
        nh=nt->next;
        nt->next=NULL;
        tail->next=head;
        return nh;
    }
};
