#include <stdio.h>

void replaceNegative(int *array, int size) {
    int minPositive = -1;
    
    // Знаходимо мінімальне додатнє значення
    for (int i = 0; i < size; i++) {
        if (array[i] > 0 && (minPositive == -1 || array[i] < minPositive)) {
            minPositive = array[i];
        }
    }
    
    // Замінюємо від'ємні елементи на мінімальне додатнє значення
    for (int i = 0; i < size; i++) {
        if (array[i] < 0) {
            array[i] = minPositive;
        }
    }
}

int main() {
    int n;
    printf("Введіть розмір масиву: ");
    scanf("%d", &n);

    int array[n];
    printf("Введіть елементи масиву:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    
    // Викликаємо функцію для заміни від'ємних елементів
    replaceNegative(array, n);
    
    // Виводимо оновлений масив
    printf("Оновлений масив: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
