#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int key = 30;
    int found = 0;

    for (int i = 0; i < 5; i++) {
        if (arr[i] == key) {
            found = 1;
            break;
        }
    }

    if (found == 1) {
        printf("Element found");
    } else {
        printf("Element not found");
    }

    return 0;
}