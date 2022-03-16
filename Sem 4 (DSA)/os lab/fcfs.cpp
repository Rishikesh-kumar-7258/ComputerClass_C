#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;


int main()
{
    const int MAXSIZE = 20;
    int n;
    cout << "Enter the size of the process array: ";
    cin >> n;

    vector<int> processes(n), turnAround(n), waitingTime(n);
    cout << "Enter the CPU burst time of the process: ";
    for (int &i : processes) cin >> i;

    for (int i = 0; i < n; i++)
    {
        turnAround[i] = (i-1 < 0 ? 0 : turnAround[i-1]) + processes[i];
        waitingTime[i] = i-1 < 0 ? 0 : (waitingTime[i-1] + processes[i-1]);
    }

    cout<< "process\t\tTurnAround Time\t\tWaiting Time"<< endl;
    for (int i = 0; i < n; i++)
    {
        cout << i+1 << "\t\t" << turnAround[i] << "\t\t\t" << waitingTime[i] << endl;
    }

    double sumTurnAround = 0;
    for (int i : turnAround) sumTurnAround += i;
    cout << "Average turn around time is: " << (sumTurnAround / n) << endl;

    double sumWaitingTime = 0;
    for (int i : waitingTime) sumWaitingTime += i;
    cout << "Average waiting time is: " << sumWaitingTime / n << endl;
    return 0;
}