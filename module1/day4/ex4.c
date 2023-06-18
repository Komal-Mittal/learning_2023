#include <stdio.h>

#define SIZE 6

int main() {
    int arr[SIZE] = {11, 22, 33, 44, 55, 66};
    int evenSum = 0; 
    int oddSum = 0;  

    for (int i = 0; i < SIZE; i++) {
        if (arr[i] % 2 == 0) {
            evenSum += arr[i];
        } else {
            oddSum += arr[i];
        }
    }
    int difference = evenSum - oddSum;
    printf("Difference between even and odd elements: %d\n", difference);

    return 0;
}
