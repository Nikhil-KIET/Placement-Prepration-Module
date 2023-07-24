#include <bits/stdc++.h>
using namespace std;

// LINKED LIST CYCLE

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

bool hasCycle(ListNode *head)
{
    ListNode *s = head, *f = head;
    while (f != nullptr && f->next != nullptr)
    {
        s = s->next;
        f = (f->next)->next;
        if (s == f)
            return true;
    }
    return false;
}