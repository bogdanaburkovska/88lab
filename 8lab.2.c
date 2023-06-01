#include <stdio.h>
#include <stdlib.h>

void inputArray(int *arr, int n) {
    printf("Введіть елементи масиву:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

void outputArray(int *arr, int n) {
    printf("Масив:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int countZeroElements(int *arr, int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            count++;
        }
    }
    return count;
}

int productAfterMaxAbsolute(int *arr, int n) {
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (abs(arr[i]) > abs(arr[maxIndex])) {
            maxIndex = i;
        }
    }

    int product = 1;
    for (int i = maxIndex + 1; i < n; i++) {
        product *= arr[i];
    }

    return product;
}

int main() {
    int n;
    printf("Введіть розмір масиву: ");
    scanf("%d", &n);

    int *array = (int *)malloc(n * sizeof(int));

    inputArray(array, n);
    outputArray(array, n);

    int zeroCount = countZeroElements(array, n);
    printf("Кількість нульових елементів: %d\n", zeroCount);

    int product = productAfterMaxAbsolute(array, n);
    printf("Добуток елементів після максимального за модулем елемента: %d\n", product);

    free(array);

    return 0;
}
