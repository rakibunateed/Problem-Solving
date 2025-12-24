#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cout << "Enter number of processes: " << '\n';
  cin >> n;
  int pid[n], at[n], bt[n], ct[n], tat[n], wt[n];
  bool done[n] = {false};
  cout << "Enter Arrival Time and Burst Time:\n";
  for (int i = 0; i < n; i++) {
    cin >> at[i] >> bt[i];
    pid[i] = i + 1;
  }
  int watSum = 0, tatSum = 0, completed = 0, time = 0;
  while (completed < n) {
    int idx = -1, mn = INT_MAX;
    for (int i = 0; i < n; i++) {
      if (!done[i] && at[i] <= time && bt[i] < mn) {
        mn = bt[i];
        idx = i;
      }
    }
    if (idx == -1) {
      time++;
      continue;
    }
    time += bt[idx];
    ct[idx] = time;
    tat[idx] = ct[idx] - at[idx];
    wt[idx] = tat[idx] - bt[idx];
    done[idx] = true;

    tatSum += tat[idx];
    watSum += wt[idx];
    completed++;
  }

  cout << "\nPID\tAT\tBT\tCT\tTAT\tWT\n";
  for (int i = 0; i < n; i++) {
    cout << "P" << pid[i] << "\t" << at[i] << "\t" << bt[i] << "\t" << ct[i]
         << "\t" << tat[i] << "\t" << wt[i] << "\n";
  }
  cout << "Average TAT = " << (float)tatSum / n << '\n';
  cout << "Average WT  = " << (float)watSum / n << '\n';
  return 0;
}