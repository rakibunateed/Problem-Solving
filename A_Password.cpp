#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter number of processes: ";
  cin >> n;
  int pid[n], at[n], bt[n], wt[n], tat[n], ct[n];
  cout << "Enter Arrival Time and Burst Time:\n";
  for (int i = 0; i < n; i++) {
    cin >> at[i] >> bt[i];
    pid[i] = i + 1;
  }

  ct[0] = at[0] + bt[0];
  for (int i = 1; i < n; i++) ct[i] = max(at[i], ct[i - 1]) + bt[i];
  int watSum = 0, tatSum = 0;
  for (int i = 0; i < n; i++) {
    tat[i] = ct[i] - at[i];
    wt[i] = tat[i] - bt[i];
    watSum += wt[i];
    tatSum += tat[i];
  }

  cout << "\nPID\tAT\tBT\tCT\tTAT\tWT\n";
  for (int i = 0; i < n; i++)
    cout << pid[i] << "\t" << at[i] << "\t" << bt[i] << "\t" << ct[i] << "\t"
         << tat[i] << "\t" << wt[i] << "\n";

  cout << "\nAverage Waiting Time:  " << (float)watSum / n << '\n';
  cout << "\nAverage TrunAround Time:  " << (float)tatSum / n << '\n';
}