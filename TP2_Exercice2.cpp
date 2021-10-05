#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	float t[3][4], m[3], moyenne = 0.0;
	int z, y;

	for (z = 0; z < 4; z++) {
		for (y = 0; y < 4; y++) {
			scanf("%f", &t[z][y]);
			moyenne = moyenne + t[z][y];
		}
		m[z] = moyenne / 4.0;
	}
	for (z = 0; z < 3; z++) {
		printf("%.2f ", m[z]);
	}
}

/* Soit le tableau t déclaré ainsi
float t[3][4] ;
Et le tableau m ainsi déclaré :
float m[3] ;
Ecrire le programme qui calcule la moyenne de chaque ligne du tableau t et le stocke
dans la case correspondante du tableau m. */
