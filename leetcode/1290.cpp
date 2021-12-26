#include "cppincludes.h"

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
    int getDecimalValue(ListNode *head) {
        int r = 0;
        while (head != nullptr) {
            r *= 2;
            r += head->val;
            head = head->next;
        }
        return r;
    }
};