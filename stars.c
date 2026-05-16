#include<stdio.h>
// print 10 brightest stars in the night sky
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