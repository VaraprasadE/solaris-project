#include <stdio.h>
int main() {
    const char *planets[] = {
        "Mercury",
        "Venus",
        "Earth",
        "Mars",
        "Jupiter",
        "Saturn",
        "Uranus",
        "Neptune"
    };

    for (int i = 0; i < 8; i++) {
        printf("%s\n", planets[i]);
    }

    return 0;
}   