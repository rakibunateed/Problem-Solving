#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, tq;
  cout << "Enter number of processes: " << '\n';
  cin >> n;
  cout << "Enter time quantum: " << '\n';
  cin >> tq;

  int pid[100], at[100], bt[100], rt[100];
  int ct[100], tat[100], wt[100];
  cout << "Enter Arrival Time and Burst Time:\n";
  for (int i = 0; i < n; i++) {
    cin >> at[i] >> bt[i];
    pid[i] = i + 1;
    rt[i] = bt[i];
    ct[i] = tat[i] = wt[i] = 0;
  }
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (at[j] > at[j + 1]) {
        swap(at[j], at[j + 1]);
        swap(bt[j], bt[j + 1]);
        swap(rt[j], rt[j + 1]);
        swap(pid[j], pid[j + 1]);
      }
    }
  }
  queue<int> q;
  int time = 0, completed = 0;
  bool inQ[100] = {false};
  time = at[0];
  int idx = 0;
  while (idx < n && at[idx] <= time) {
    q.push(idx);
    inQ[idx] = true;
    idx++;
  }

  while (completed < n) {
    if (q.empty()) {
      time = at[idx];
      q.push(idx);
      inQ[idx] = true;
      idx++;
      continue;
    }
    int i = q.front();
    q.pop();
    inQ[i] = false;
    int exec = (rt[i] > tq) ? tq : rt[i];
    rt[i] -= exec;
    time += exec;

    while (idx < n && at[idx] <= time) {
      if (!inQ[idx] && rt[idx] > 0) {
        q.push(idx);
        inQ[idx] = true;
      }
      idx++;
    }

    if (rt[i] > 0) {
      if (!inQ[i]) {
        q.push(i);
        inQ[i] = true;
      }
    } else {
      ct[i] = time;
      tat[i] = ct[i] - at[i];
      wt[i] = tat[i] - bt[i];
      completed++;
    }
  }
  cout << "\nPID\tAT\tBT\tCT\tTAT\tWT\n";
  int totalWT = 0, totalTAT = 0;
  for (int i = 0; i < n; i++) {
    cout << pid[i] << "\t" << at[i] << "\t" << bt[i] << "\t" << ct[i] << "\t"
         << tat[i] << "\t" << wt[i] << '\n';

    totalWT += wt[i];
    totalTAT += tat[i];
  }
  cout << "\nAverage Waiting Time = " << (float)totalWT / n;
  cout << "\nAverage Turnaround Time = " << (float)totalTAT / n;
  return 0;
}