#include <stdio.h>

int main(void) {
    const char *stars[] = {
        "Sirius",
        "Canopus",
        "Arcturus",
        "Vega",
        "Capella",
        "Rigel",
        "Procyon",
        "Achernar",
        "Betelgeuse",
        "Altair"
    };

    for (int i = 0; i < 10; i++) {
        printf("%d. %s\n", i + 1, stars[i]);
    }

    return 0;
}
