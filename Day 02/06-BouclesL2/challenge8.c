#include <stdio.h>

int     binary_search(int arr[], int size, int target) {
    int i = 0;
    
    while (i <= size)
    {
        if (arr[i] == target)
        {
            return i;
        }   
        i++;
    }

    return -1;
}

int     main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Entrez le nombre à rechercher : ");
    scanf("%d", &target);

    int result = binary_search(arr, size, target);

    if (result != -1)
        printf("Le nombre %d est trouvé à l'index %d.\n", target, result);
    else
        printf("Le nombre %d n'est pas trouvé dans le tableau.\n", target);

    return 0;
}
