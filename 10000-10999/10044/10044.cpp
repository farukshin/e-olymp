//https://www.e-olymp.com/ru/problems/10044
ListNode* merge(ListNode *l1, ListNode *l2)
{
    ListNode * res;
    if(l1 == NULL && l2 == NULL)
        return NULL;
    else if(l1 != NULL && l2 == NULL)
    {
        res = new ListNode(l1->val);
        l1 = l1->next;
    }
    else if(l1 == NULL && l2 != NULL)
    {
        res = new ListNode(l2->val);
        l2 = l2->next;
    }
    else if(l1->val <= l2->val)
    {
        res = new ListNode(l1->val);
        l1 = l1->next;
    }
    else
    {
        res = new ListNode(l2->val);
        l2 = l2->next;
    }
    ListNode * ans = res;

    while(true)
        if(l1 == NULL && l2 == NULL)
            break;
        else if(l1 != NULL && l2 == NULL)
        {
            ListNode * cur = new ListNode(l1->val);
            l1 = l1->next;
            res->next = cur;
            res = res->next;
        }
        else if(l1 == NULL && l2 != NULL)
        {
            ListNode * cur = new ListNode(l2->val);
            l2 = l2->next;
            res->next = cur;
            res = res->next;
        }
        else if(l1->val <= l2->val)
        {
            ListNode * cur = new ListNode(l1->val);
            l1 = l1->next;
            res->next = cur;
            res = res->next;
        }
        else
        {
            ListNode * cur = new ListNode(l2->val);
            l2 = l2->next;
            res->next = cur;
            res = res->next;
        }

    return ans;
}