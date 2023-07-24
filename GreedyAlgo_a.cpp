#include <bits/stdc++.h>
using namespace std;

//  JOB SEQUENCING PROBLEM

struct Job
{
    int id;     // Job Id
    int dead;   // Deadline of job
    int profit; // Profit if job is over before or on deadline
};

bool comp(Job a, Job b)
{
    return a.profit > b.profit;
}
vector<int> JobScheduling(Job arr[], int n)
{
    sort(arr, arr + n, comp);
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i].dead);
    }
    int prof = 0;
    int count = 0;
    vector<int> slot(maxi + 1, -1);
    for (int i = 0; i < n; i++)
    {
        for (int j = arr[i].dead; j > 0; j--)
        {
            if (slot[j] == -1)
            {
                slot[j] = i;
                prof += arr[i].profit;
                count++;
                break;
            }
        }
    }
    return {count, prof};
}