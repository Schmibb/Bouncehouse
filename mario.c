#include <cs50.h>
#include <stdio.h>

int main(void) {
// Get input from user
    int H;
    do {
        H = get_int("Height: ");
       }

// Calculate block pyramid
// Establish reverse counting order, for spaces

    while (H < 1 || H > 8); {
    int i, start, end, r, j, g;
    start = 0;
    end = H;
    r = 0;
    // solution for the single block dilema
if (H == 1) {
            printf("#");
            }

else {
    for (i = (end - 1); i > start; i--) {
    for (j = start; j < i; j++) {
            printf(".");
        }
    for (g = 0; g < H; g++) {
        
            printf("#");
        }
            printf("\n");   
}
}
}
}
