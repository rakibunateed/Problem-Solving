#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cout << "Enter number of processes: " << '\n';
  cin >> n;
  int pid[n], at[n], bt[n], rt[n], ct[n], tat[n], wt[n];
  cout << "Enter Arrival Time and Burst Time: ";
  for (int i = 0; i < n; i++) {
    cin >> at[i] >> bt[i];
    rt[i] = bt[i];
    pid[i] = i + 1;
  }
  int complete = 0, time = 0, watSum = 0, tatSum = 0;
  while (complete < n) {
    int idx = -1, min_rt = INT_MAX;
    for (int i = 0; i < n; i++) {
      if (at[i] <= time && rt[i] > 0 && rt[i] < min_rt) {
        min_rt = rt[i];
        idx = i;
      }
    }
    if (idx == -1) {
      time++;
      continue;
    }
    rt[idx]--;
    time++;
    if (rt[idx] == 0) {
      complete++;
      ct[idx] = time;
      tat[idx] = ct[idx] - at[idx];
      wt[idx] = tat[idx] - bt[idx];
      tatSum += tat[idx];
      watSum += wt[idx];
    }
  }
  cout << "\nPID\tAT\tBT\tCT\tTAT\tWT\n";
  for (int i = 0; i < n; i++)
    cout << "p" << pid[i] << "\t" << at[i] << "\t" << bt[i] << "\t" << ct[i]
         << "\t" << tat[i] << "\t" << wt[i] << "\n";

  cout << "\nAverage Turnaround Time = " << (float)tatSum / n << '\n';
  cout << "Average Waiting Time = " << (float)watSum / n << '\n';
  return 0;
}