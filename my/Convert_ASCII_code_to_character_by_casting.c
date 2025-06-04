#include <stdio.h>

int main(void) {
    // Print header for the table
    printf(" ASCII Code | Character \n");
    printf("------------|-----------\n");
    // Loop through ASCII codes for the printable characters
    for (int code = 32; code <= 126; ++code) {
        // Cast the integer code to char to get the corresponding character.
        printf("%11d | %c\n", code, (char)code);
    }
    
    return 0;
}