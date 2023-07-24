#include <bits/stdc++.h>
using namespace std;

//   REVERSE NODES IN K-GROUPS

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *reverselist(ListNode *first, ListNode *last)
{
    ListNode *prev = last;
    while (first != last)
    {
        ListNode *temp = first->next;
        first->next = prev;
        prev = first;
        first = temp;
    }
    return prev;
}
ListNode *reverseKGroup(ListNode *head, int k)
{
    ListNode *node = head;
    for (int i = 1; i <= k; i++)
    {
        if (!node)
        {
            return head;
        }
        node = node->next;
    }
    ListNode *newhead = reverselist(head, node);
    head->next = reverseKGroup(node, k);
    return newhead;
}