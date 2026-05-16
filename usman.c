#include <stdio.h>

int main() {
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
        "Hadar"
    };

    for (int i = 0; i < 10; i++) {
        printf("%s\n", stars[i]);
    }

    return 0;
}