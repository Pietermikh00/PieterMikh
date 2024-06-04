#include <stdio.h>

int sequentialSearch(int arr[], int n, int x) {
    int last = arr[n-1];
    arr[n-1] = x;
    int i = 0;

    while (arr[i] != x) {
        i++;
    }

    arr[n-1] = last;

    if ((i < n-1) || (x == arr[n-1])) {
        return i;
    } else {
        return -1;
    }
}

int binarySearch(int arr[], int l, int r, int x) {
    if (r >= l) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x) {
            return mid;
        }

        if (arr[mid] > x) {
            return binarySearch(arr, l, mid - 1, x);
        }

        return binarySearch(arr, mid + 1, r, x);
    }

    return -1;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("Pencarian sekuensial dengan sentinel:\n");
    printf("52 ada di indeks %d\n", sequentialSearch(arr1, n1, 52));
    printf("10 ada di indeks %d\n", sequentialSearch(arr1, n1, 10));

    printf("Pencarian biner:\n");
    printf("41 ada di indeks %d\n", binarySearch(arr2, 0, n2 - 1, 41));
    printf("8 ada di indeks %d\n", binarySearch(arr2, 0, n2 - 1, 8));
    printf("41 ada di indeks %d\n", binarySearch(arr2, 0, n2 - 1, 41));
    printf("19 ada di indeks %d\n", binarySearch(arr2, 0, n2 - 1, 19));

    return 0;
}
