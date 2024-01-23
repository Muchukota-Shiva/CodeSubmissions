#include <stdio.h>


void decToBin(int decimal) {
    int binary[32], i = 0;

    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }

    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}


void decToOct(int decimal) {
    int octal[32], i = 0;

    while (decimal > 0) {
        octal[i] = decimal % 8;
        decimal = decimal / 8;
        i++;
    }

    printf("Octal representation: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
    printf("\n");
}


void decToHex(int decimal) {
    char hexadecimal[32];
    int i = 0;

    while (decimal > 0) {
        int remainder = decimal % 16;
        if (remainder < 10) {
            hexadecimal[i] = remainder + '0';
        } else {
            hexadecimal[i] = remainder + 'A' - 10;
        }
        decimal = decimal / 16;
        i++;
    }

    printf("Hexadecimal representation: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hexadecimal[j]);
    }
    printf("\n");
}

int main() {
    int decimal, choice;

    
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    
    printf("Choose the conversion format:\n");
    printf("1. Binary\n");
    printf("2. Octal\n");
    printf("3. Hexadecimal\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            decToBin(decimal);
            break;
        case 2:
            decToOct(decimal);
            break;
        case 3:
            decToHex(decimal);
            break;
        default:
            printf("Please choose between 1 to 3.\n");
            break;
    }

    return 0;
}
