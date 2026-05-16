#include <stdio.h>

// Array of 10 galaxy star names
const char *galaxy_stars[] = {
    "Sirius",
    "Proxima Centauri",
    "Betelgeuse",
    "Rigel",
    "Polaris",
    "Altair",
    "Deneb",
    "Vega",
    "Arcturus",
    "Antares"
};

#define TOTAL_STARS 10

int main() {
    printf("=== Galaxy Star Names ===\n\n");
    
    for (int i = 0; i < TOTAL_STARS; i++) {
        printf("%d. %s\n", i + 1, galaxy_stars[i]);
    }
    
    printf("\nTotal Stars: %d\n", TOTAL_STARS);
    
    return 0;
}