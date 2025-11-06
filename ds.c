#include <stdio.h>

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5;    // current size
    int pos, val;

    printf("Enter position and value: ");
    scanf("%d %d", &pos, &val);

    // Step 1: Shift elements right
    for (int i = n - 1; i >= pos ; i--) {
        arr[i + 1] = arr[i];
    }

    // Step 2: Insert new element
    arr[i] = val;
    n++;

    // Step 3: Print array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
