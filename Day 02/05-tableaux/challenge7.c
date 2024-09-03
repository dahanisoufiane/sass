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

    printf("Entrez le nombre d'éléments du tableau : ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("d'élément %d :", i+1);
        scanf("%d", &arr[i]);
    }

    ft_sort_int_tab(arr, n);

    printf("Le tableau trié en ordre croissant est :\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
