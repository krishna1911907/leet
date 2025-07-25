#include<bits/stdc++.h>
using namespace std;


 struct ListNode {
      int val;
     ListNode *next;
      ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
    public:
     ListNode *deleteMiddle(ListNode* head) {
        if(head->next == nullptr){
            return nullptr;
        }
        ListNode *slow = head;
        ListNode *fast = head->next;
        while(fast->next != nullptr && fast->next->next != nullptr){
           fast = fast->next->next;
           slow = slow->next;
        }
        slow->next = slow->next->next;
        return head;
    }
};