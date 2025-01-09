#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 16

int main() {
    int i, carry = 1;
    char num[SIZE + 1], one[SIZE + 1], two[SIZE + 1];

    // Prompt the user for input
    printf("Enter an 16-bit binary number: ");
    scanf("%s", num);


    // Calculate one's complement
    for (i = 0; i < SIZE; i++) {
        if (num[i] == '0') {
            one[i] = '1';
        } else if (num[i] == '1') {
            one[i] = '0';
        } else {
            printf("Error: Invalid character in binary number. Only '0' and '1' are allowed.\n");
            return 1;
        }
    }
    one[SIZE] = '\0';
    printf("One's complement of binary number %s is %s\n", num, one);   

    // Calculate two's complement
    for (i = SIZE - 1; i >= 0; i--) {
        if (one[i] == '1' && carry == 1) {
            two[i] = '0';
        } else if (one[i] == '0' && carry == 1) {
            two[i] = '1';
            carry = 0;
        } else {
            two[i] = one[i];
        }
    }
    two[SIZE] = '\0';
    printf("Two's complement of binary number %s is %s\n", num, two);

    return 0;
}