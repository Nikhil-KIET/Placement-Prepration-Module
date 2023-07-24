#include <bits/stdc++.h>
using namespace std;

//   ROTATE LIST

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *rotateRight(ListNode *head, int k)
{
    ListNode *tmp = head, *lst = head;
    if (head == NULL)
        return head;
    if (head->next == NULL)
        return head;
    int len = 0, t;
    while (tmp != NULL)
    {
        tmp = tmp->next;
        len++;
        if (tmp != NULL && tmp->next == NULL)
            lst = tmp;
    }
    k = k % len;
    t = len - k;
    tmp = head;
    while (t > 1)
    {
        tmp = tmp->next;
        t--;
    }
    lst->next = head;
    head = tmp->next;
    tmp->next = NULL;
    return head;
}