#include <stdio.h>

// Function declarations
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);
int modulus(int a, int b);

int main() {
    int choice, a, b;
    float result;

    printf("\n===== MINI CALCULATOR =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch(choice) {
        case 1:
            printf("Result = %d", add(a, b));
            break;

        case 2:
            printf("Result = %d", subtract(a, b));
            break;

        case 3:
            printf("Result = %d", multiply(a, b));
            break;

        case 4:
            if(b != 0)
                printf("Result = %.2f", divide(a, b));
            else
                printf("Error! Division by zero.");
            break;

        case 5:
            printf("Result = %d", modulus(a, b));
            break;

        default:
            printf("Invalid choice!");
    }

    return 0;
}

// Function definitions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    return (float)a / b;
}

int modulus(int a, int b) {
    return a % b;
}