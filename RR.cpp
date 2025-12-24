#include <bits/stdc++.h>
using namespace std;

struct Process {
  int pid, at, bt, rt, ct = 0, tat = 0, wt = 0;
};

int main() {
  cout << "Enter number of processes: ";
  int n;
  cin >> n;
  cout << "Enter time quantum: ";
  int tq;
  cin >> tq;
  cout << "Enter Arrival Time and Burst Time:\n";
  vector<Process> p(n);
  for (int i = 0; i < n; ++i) {
    cin >> p[i].at >> p[i].bt;
    p[i].pid = i + 1;
    p[i].rt = p[i].bt;
  }

  queue<int> q;
  vector<bool> inQueue(n, 0);
  int time = 0, complete = 0;

  // initial enqueue of processes that arrive at time 0
  for (int i = 0; i < n; ++i) {
    if (p[i].at <= time && p[i].rt > 0 && !inQueue[i]) {
      q.push(i);
      inQueue[i] = true;
    }
  }

  while (complete < n) {
    if (q.empty()) {
      // no process ready -> advance time and enqueue newly arrived
      time++;
      for (int i = 0; i < n; ++i)
        if (p[i].at <= time && p[i].rt > 0 && !inQueue[i]) {
          q.push(i);
          inQueue[i] = true;
        }
      continue;
    }

    int idx = q.front();
    q.pop();
    inQueue[idx] = false;  // mark as not in queue while executing

    int exec = min(tq, p[idx].rt);
    p[idx].rt -= exec;
    time += exec;

    // enqueue any processes that arrived during this timeslice (avoid
    // duplicates)
    for (int i = 0; i < n; ++i) {
      if (p[i].at <= time && p[i].rt > 0 && !inQueue[i]) {
        q.push(i);
        inQueue[i] = true;
      }
    }

    if (p[idx].rt == 0) {
      p[idx].ct = time;
      complete++;
      p[idx].tat = p[idx].ct - p[idx].at;
      p[idx].wt = p[idx].tat - p[idx].bt;
    }
  }
  int avrgTAT = 0, avrgWT = 0;
  cout << "\nPID\tAT\tBT\tCT\tTAT\tWT\n";
  for (int i = 0; i < n; ++i) {
    cout << p[i].pid << "\t" << p[i].at << "\t" << p[i].bt << "\t" << p[i].ct
         << "\t" << p[i].tat << "\t" << p[i].wt << "\n";
    avrgTAT += p[i].tat;
    avrgWT += p[i].wt;
  }
  cout << "Average TAT = " << (float)avrgTAT / n << endl;
  cout << "Average WT  = " << (float)avrgWT / n << endl;
  return 0;
}