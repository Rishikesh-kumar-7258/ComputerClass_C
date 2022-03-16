#include <iostream>
#include <vector>
#include <queue>
using namespace std;

#define pi pair<int,int>

int main()
{
    const int maxSize = 20;
    int processCount;
    cout << "Enter the count of processes: ";
    cin >> processCount;

    cout << "Ente the CPU burst time ";
    vector<int> process(processCount);
    vector<bool> done(processCount, false);
    for (int &i : process) cin >> i;

    int turnAroundTime = 0, WaitingTime = 0;
    cout << "Process\t\tTurnAround Time\t\tWaiting Time" << endl;
    for (int i = 0; i < processCount; i++)
    {
        int min_i = 0;
        while (done[min_i]) min_i++;

        for (int j = 0; j < processCount; j++)
        {
            if (!done[j] && process[j] < process[min_i]) min_i = j;
        }

        done[min_i] = true;
        turnAroundTime += process[min_i];
        cout << min_i+1 << "\t\t" << turnAroundTime << "\t\t\t" << WaitingTime << endl;
        if (i < processCount-1) WaitingTime += process[min_i];
    }

    cout << "Average Turn Around Time: " << turnAroundTime / processCount << endl;
    cout << "Average Waiting Time: " << WaitingTime / processCount << endl;

    return 0;
}