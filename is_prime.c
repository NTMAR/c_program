#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    // Handle edge cases
    if (n <= 1) {
        return 0; // Not prime
    }
    if (n <= 3) {
        return 1; // 2 and 3 are prime
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return 0; // Divisible by 2 or 3
    }
    
    // Check for divisors from 5 to sqrt(n)
    // Only check numbers of form 6k ± 1
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return 0; // Found a divisor
        }
    }
    
    return 1; // Prime number
}

int main() {
    int num;
    char choice;
    
    printf("=== Prime Number Checker ===\n");
    
    do {
        printf("\nEnter a positive integer: ");
        scanf("%d", &num);
        
        if (num < 0) {
            printf("Please enter a positive integer.\n");
            continue;
        }
        
        if (isPrime(num)) {
            printf("%d is a PRIME number.\n", num);
        } else {
            printf("%d is NOT a prime number.\n", num);
        }
        
        printf("\nDo you want to check another number? (y/n): ");
        scanf(" %c", &choice);
        
    } while (choice == 'y' || choice == 'Y');
    
    printf("Thank you for using the Prime Number Checker!\n");
    
    return 0;
}