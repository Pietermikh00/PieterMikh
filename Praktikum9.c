#include <stdio.h>

void countSort(int array[], int size) {
    int output[10];
    int count[10];
    int max = array[0];

    for (int i = 1; i < size; i++) {
        if (array[i] > max)
            max = array[i];
    }

    for (int i = 0; i <= max; ++i) {
        count[i] = 0;
    }

    for (int i = 0; i < size; i++) {
        count[array[i]]++;
    }

    for (int i = 1; i <= max; i++) {
        count[i] += count[i - 1];
    }

    for (int i = size - 1; i >= 0; i--) {
        output[count[array[i]] - 1] = array[i];
        count[array[i]]--;
    }

    for (int i = 0; i < size; i++) {
        array[i] = output[i];
    }
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int array[], int size) {
    for (int step = 0; step < size - 1; step++) {
        int min_idx = step;
        for (int i = step + 1; i < size; i++) {
            if (array[i] > array[min_idx])
                min_idx = i;
        }
        swap(&array[min_idx], &array[step]);
    }
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d  ", array[i]);
    }
    printf("\n");
}

int main() {
    int data[] = {7, 1, 0, 5, 3, 6, 6};
    int size = sizeof(data) / sizeof(data[0]);
    countSort(data, size);
    printf("coun sort: \n");
    printArray(data, size);
    selectionSort(data, size);
    printf("selection sort: \n");
    printArray(data, size);
}
