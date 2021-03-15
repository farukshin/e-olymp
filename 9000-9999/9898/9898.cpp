//https://www.e-olymp.com/ru/problems/9898
int sum(ListNode *head)
{
    int ans = head->val;
    head = head->next;
    while(head != NULL)
    {
        ans += head->val;
        head = head->next;
    }
    return ans;
}