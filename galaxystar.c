#include <stdio.h>

int main(void) {
	const char *stars[] = {
		"Sirius",
		"Canopus",
		"Rigil Kentaurus",
		"Arcturus",
		"Vega",
		"Capella",
		"Rigel",
		"Procyon",
		"Achernar",
		"Betelgeuse"
	};
	int n = sizeof(stars) / sizeof(stars[0]);
	for (int i = 0; i < n; ++i) {
		printf("%d. %s\n", i + 1, stars[i]);
	}
	return 0;
}
