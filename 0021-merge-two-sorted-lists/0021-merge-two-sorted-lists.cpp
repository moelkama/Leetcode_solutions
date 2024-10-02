class Solution {
public:
    ListNode*   lastNode(ListNode* list)
    {
        ListNode*   res;
        while (list)
        {
            res = list;
            list = list->next;
        }
        return res;
    }
    int listLength(ListNode* list)
    {
        int res = 0;
        while (list)
        {
            res++;
            list = list->next;
        }
        return res;
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*   res = NULL;
    
        while (list1 && list2)
        {
            if (list1->val <= list2->val)
            {
                if (res)
                    this->lastNode(res)->next = new ListNode(list1->val);
                else
                    res =  new ListNode(list1->val);
                list1 = list1->next;
            }
            else
            {
                if (res)
                    this->lastNode(res)->next =  new ListNode(list2->val);
                else
                    res =  new ListNode(list2->val);
                list2 = list2->next;
            }
        }
        if (list1)
        {
            if (res)
                this->lastNode(res)->next = list1;
            else
                res = list1;
        }
        if (list2)
        {
            if (res)
                this->lastNode(res)->next = list2;
            else
                res = list2;
        }
        return res;
    }
};