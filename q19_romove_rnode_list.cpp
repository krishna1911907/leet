#include<bits/stdc++.h>
using namespace std;

 // Definition for singly-linked list.
 struct ListNode {
      int val;
     ListNode *next;
      ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //ListNode *newnode=new ListNode();
        ListNode*tp=head,*prev=head;
        while(n--){
            tp=tp->next;
        }
        if(!tp){
            return head->next;
        }
        while(tp->next){
            tp=tp->next;
            prev=prev->next;
        }
        ListNode *del=prev->next;
        prev->next=prev->next->next;
        delete(del);
        return head;
    }
};