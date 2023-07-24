#include <bits/stdc++.h>
using namespace std;

//    MIDDLE OF LINKED LIST

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *middleNode(ListNode *head)
{
    ListNode *slow = head, *fst = head;
    while (fst != NULL && fst->next != NULL)
    {
        slow = slow->next;
        fst = fst->next->next;
    }
    return slow;
}