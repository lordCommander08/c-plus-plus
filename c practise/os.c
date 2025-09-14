#include <stdio.h>

struct Process {
    int pid;
    int bt;
    int priority;
    int wt;
    int tat;
};

void calculateWaitingTime(struct Process p[], int n) {
    p[0].wt = 0;
    for (int i = 1; i < n; i++) {
        p[i].wt = p[i - 1].wt + p[i - 1].bt;
    }
}

void calculateTurnaroundTime(struct Process p[], int n) {
    for (int i = 0; i < n; i++) {
        p[i].tat = p[i].wt + p[i].bt;
    }
}

void sortByPriority(struct Process p[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (p[j].priority < p[i].priority) {
                struct Process temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
}

void calculateAverageTimes(struct Process p[], int n, float *avg_wt, float *avg_tat) {
    int total_wt = 0, total_tat = 0;
    for (int i = 0; i < n; i++) {
        total_wt += p[i].wt;
        total_tat += p[i].tat;
    }
    *avg_wt = (float)total_wt / n;
    *avg_tat = (float)total_tat / n;
}

void display(struct Process p[], int n, float avg_wt, float avg_tat) {
    printf("\nProcess\tBT\tPriority\tWT\tTAT\n");
    for (int i = 0; i < n; i++) {
        printf("P%d\t%d\t%d\t\t%d\t%d\n", p[i].pid, p[i].bt, p[i].priority, p[i].wt, p[i].tat);
    }
    printf("\nAverage Waiting Time = %.2f\n", avg_wt);
    printf("Average Turnaround Time = %.2f\n", avg_tat);
}

int main() {
    int n;
    printf("Enter number of processes: ");
    scanf("%d", &n);

    struct Process p[n];
    for (int i = 0; i < n; i++) {
        p[i].pid = i + 1;
        printf("Enter Burst Time and Priority for Process %d: ", p[i].pid);
        scanf("%d%d", &p[i].bt, &p[i].priority);
    }

    sortByPriority(p, n);
    calculateWaitingTime(p, n);
    calculateTurnaroundTime(p, n);

    float avg_wt, avg_tat;
    calculateAverageTimes(p, n, &avg_wt, &avg_tat);
    display(p, n, avg_wt, avg_tat);

    return 0;
}
#include <stdio.h>

struct Process {
    int pid;
    int bt;
    int priority;
    int wt;
    int tat;
};

void calculateWaitingTime(struct Process p[], int n) {
    p[0].wt = 0;
    for (int i = 1; i < n; i++) {
        p[i].wt = p[i - 1].wt + p[i - 1].bt;
    }
}

void calculateTurnaroundTime(struct Process p[], int n) {
    for (int i = 0; i < n; i++) {
        p[i].tat = p[i].wt + p[i].bt;
    }
}

void sortByPriority(struct Process p[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (p[j].priority < p[i].priority) {
                struct Process temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
}

void calculateAverageTimes(struct Process p[], int n, float *avg_wt, float *avg_tat) {
    int total_wt = 0, total_tat = 0;
    for (int i = 0; i < n; i++) {
        total_wt += p[i].wt;
        total_tat += p[i].tat;
    }
    *avg_wt = (float)total_wt / n;
    *avg_tat = (float)total_tat / n;
}

void display(struct Process p[], int n, float avg_wt, float avg_tat) {
    printf("\nProcess\tBT\tPriority\tWT\tTAT\n");
    for (int i = 0; i < n; i++) {
        printf("P%d\t%d\t%d\t\t%d\t%d\n", p[i].pid, p[i].bt, p[i].priority, p[i].wt, p[i].tat);
    }
    printf("\nAverage Waiting Time = %.2f\n", avg_wt);
    printf("Average Turnaround Time = %.2f\n", avg_tat);
}

int main() {
    int n;
    printf("Enter number of processes: ");
    scanf("%d", &n);

    struct Process p[n];
    for (int i = 0; i < n; i++) {
        p[i].pid = i + 1;
        printf("Enter Burst Time and Priority for Process %d: ", p[i].pid);
        scanf("%d%d", &p[i].bt, &p[i].priority);
    }

    sortByPriority(p, n);
    calculateWaitingTime(p, n);
    calculateTurnaroundTime(p, n);

    float avg_wt, avg_tat;
    calculateAverageTimes(p, n, &avg_wt, &avg_tat);
    display(p, n, avg_wt, avg_tat);

    return 0;
}
