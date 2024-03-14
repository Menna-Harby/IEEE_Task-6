#include <stdio.h>


int max(int a, int b) {
    return (a > b) ? a : b;
}


int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int num1, num2;

  
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);


    int max_val = max(num1, num2);
    int min_val = min(num1, num2);

    
    printf("Maximum value: %d\n", max_val);
    printf("Minimum value: %d\n", min_val);

    return 0;
}