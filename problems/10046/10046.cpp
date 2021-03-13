//https://www.e-olymp.com/ru/problems/10046
ListNode* reverse(ListNode *head)
{
    if(head == NULL)
        return NULL;

    int len = 0;
    ListNode * curHead = head;
    while(curHead != NULL)
    {
        len++;
        curHead = curHead->next;
    }
    ListNode* arr[len];

    int i = 0;
    while(head != NULL)
    {
        arr[i] = head;
        head = head->next;
        i++;
    }

    ListNode* ans;
    ListNode* cur;
    ListNode* preCur;
    ans = new ListNode(arr[len - 1]->val);
    preCur = ans;
    for(int i = len - 2; i >= 0; i--)
    {
        cur = arr[i];
        preCur->next = cur;
        preCur = cur;
        if(i == 0)
            preCur->next = NULL;
    }

    return ans;
}