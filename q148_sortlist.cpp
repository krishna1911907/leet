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
    ListNode* sortList(ListNode* head) {
        if (!head || !head->next) return head;
        vector<int> values;
        ListNode* current = head;
        while (current) {
            values.push_back(current->val);
            current = current->next;
        }

        
        sort(values.begin(), values.end());

        current = head;
        int index = 0;
        while (current) {
            current->val = values[index++];
            current = current->next;
        }

        return head;
    }
};
