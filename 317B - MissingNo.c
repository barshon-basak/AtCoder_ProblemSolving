#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int a;
    scanf("%d", &a);

    int arr[a];
    
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }
    
    qsort(arr, a, sizeof(int), compare);
    
    for (int i = 1; i < a; i++) {
        if (arr[i] - arr[i - 1] != 1) {
            printf("%d\n", arr[i - 1] + 1);
            break;
        }
    }

    return 0;
}
