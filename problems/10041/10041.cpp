//https://www.e-olymp.com/ru/problems/10041
void PrintReverse(ListNode *head)
{
    int len = 0;
    ListNode * curHead = head;
    while(curHead != NULL)
    {
        len++;
        curHead = curHead->next;
    }
    int arr[len];

    int i = 0;
    while(head != NULL)
    {
        arr[i] = head->val;
        head = head->next;
        i++;
    }
    for(int i = len - 1; i >= 0; i--)
        printf("%d ", arr[i]);
}