#include <stdio.h>

void ft_swap(int *arr, int idx, int min) {
    int tmp;

    tmp = arr[idx];
    arr[idx] = arr[min];
    arr[min] = tmp;
}

void ft_sort_int_tab(int *tab, int size) {
    int i;
    int j;
    int min;

    i = 0;
    while (i <= size - 1) {
        j = i + 1;
        min = i;                      
        while (j < size) {
            if (tab[j] < tab[min])
                min = j;
            j++;
        }
        if (tab[min] < tab[i])
            ft_swap(tab, i, min);
        i++;
    }
}

int main() {
    int n;

    printf("Entrez le nombre d'éléments : ");
    scanf("%d", &n);

    int arr[n];

    printf("Entrez les %d éléments :\n", n);
    for (int i = 0; i < n; i++) {
         printf("Entrez  élément %d  :\n", i+1);
        scanf("%d", &arr[i]);
    }

    ft_sort_int_tab(arr, n);

    printf("Tableau trié :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
