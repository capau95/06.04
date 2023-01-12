#include <stdio.h>

int main () {

	int bereich, e, i, j, k;

	printf("Geben Sie den Primzahlbereich ein:\n");
	scanf("%d", &bereich);

	int prim[bereich];

	for (e=0; e< bereich; e++) {

		prim[e] = 1;
	}


	for (i=2; i< bereich/2; i++) {

		for (j = i*2; j< bereich; j+=i) {

			prim[j] = 2;
		
		}

	}

	for (k=2; k< bereich; k++) {

		if (prim[k] == 1) {

			printf("%d ", k);
		}

	}

	printf("\n");
}
