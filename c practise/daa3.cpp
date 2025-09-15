#include <stdio.h>
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            return mid;
        }
        else if (arr[mid] > key) {
            high = mid - 1;}
        else {
            low = mid + 1;}}
    return -1;}
int main() {
    printf("Name – Anurag Rathi\nRoll No. - 2301920100067\n");
    int n, key;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements in sorted order:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &key);
    int result = binarySearch(arr, n, key);
    if (result == -1) {
        printf("Element not found!\n");
    } else {
        printf("Element found at index: %d\n", result);
    }
    return 0;
}
