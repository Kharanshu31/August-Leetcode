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
    void reorderList(ListNode* head) {
        if(!head)
            return;
        vector<ListNode*>ar;
        ListNode* temp=head;
        while(temp)
        {
            ar.push_back(temp);
            temp=temp->next;
        }
        int i=1;
        int j=ar.size()-1;
        int ct=0;
        ListNode* cur=head;
        head->next=NULL;
        while(i<=j)
        {
            if(ct%2==0)
            {
                cur->next=ar[j--];
                cur=cur->next;
                cur->next=NULL;
            }
            else
            {
                cur->next=ar[i++];
                cur=cur->next;
                cur->next=NULL;
            }
            ++ct;
        }
    }
};
