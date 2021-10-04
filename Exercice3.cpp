#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	float tab[10], somme;
	int i;

	for (i = 0; i < 10; i++) {
		printf("Entrer l'element %d :", i + 1);
		scanf("%f", &tab[i]);
	}

	somme = tab[1] + tab[2] + tab[3] + tab[4] + tab[5] + tab[6] + tab[7] + tab[8] + tab[9] + tab[0];

	printf("%f", somme);

}

/* Soit le tableau t déclaré ainsi :
float t[10];
Réalisez un programme en C permettant de calculer dans une variable somme, la
somme des éléments de t. */