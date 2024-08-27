#include <iostream>
#include <string>
#include <algorithm>

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int rest = 0;
        int sum = 0;

        if (l1)
        {
            sum += l1->val;
            l1 = l1->next;
        }
        if (l2)
        {
            sum += l2->val;
            l2 = l2->next;
        }
        rest = sum / 10;
        ListNode *result = new ListNode(sum < 10 ? sum : sum % 10);
        ListNode *a = result;
        while ((l1) || ( l2))
        {
            sum = rest;
            if (l1)
            {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2)
            {
                sum += l2->val;
                l2 = l2->next;
            }
            rest = sum / 10;
            result->next = new ListNode(sum < 10 ? sum : sum % 10);
            result = result->next;
        }
        if (rest)
            result->next = new ListNode(rest);
        return a;
    }
};