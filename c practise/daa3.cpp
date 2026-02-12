#include <stdio.h>

struct Item {
    int weight;
    int value;
};

void knapsack(struct Item items[], int n, int W) {
    double ratio[n];

    for (int i = 0; i < n; i++) {
        ratio[i] = (double)items[i].value / items[i].weight;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ratio[i] < ratio[j]) {
                double tempR = ratio[i];
                ratio[i] = ratio[j];
                ratio[j] = tempR;

                struct Item temp = items[i];
                items[i] = items[j];
                items[j] = temp;
            }
        }
    }

    double totalValue = 0.0;
    int currentWeight = 0;

    for (int i = 0; i < n; i++) {
        if (currentWeight + items[i].weight <= W) {
            currentWeight += items[i].weight;
            totalValue += items[i].value;
        } else {
            int remain = W - currentWeight;
            totalValue += items[i].value * ((double)remain / items[i].weight);
            break;
        }
    }

    printf("Maximum value in Knapsack = %.2f\n", totalValue);
}

int main() {
    printf("Name: Bhavana\n");
    printf("Roll No: 2301920100105\n");

    int n, W;
    printf("Enter number of items: ");
    scanf("%d", &n);

    struct Item items[n];

    printf("Enter weight and value of each item:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &items[i].weight, &items[i].value);
    }

    printf("Enter capacity of knapsack: ");
    scanf("%d", &W);

    knapsack(items, n, W);

    return 0;
}