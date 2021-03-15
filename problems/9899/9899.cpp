//https://www.e-olymp.com/ru/problems/9899
int length(ListNode *head)
{
    int ans = 1;
    head = head->next;
    while(head != NULL)
    {
        ans++;
        head = head->next;
    }
    return ans;
}