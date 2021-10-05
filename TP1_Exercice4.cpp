#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	int nombre = 1;
	int i, r, n = 100;
	printf("Les nombres premiers inferieurs a 100 sont:\n", n);
	while (nombre < n) {//tant que nombre < n alors
		r = 0;//pour compter le nombre de diviseurs
		nombre++;
		for (i = 1; i <= nombre; i++)
		{
			if ((nombre%i) == 0)
				r++;
		}
		if (r == 2)//Le nombre premier se divise sur 1 et sur lui meme
		{
			printf(" %d \n", nombre);
		}
	}
	system("pause");
}

/* Réaliser le programme en langage C qui utilise un tableau de 100 entiers et qui met
la valeur 1 à l’indice i si i est premier et 0 si i n’est pas premier.
A la fin vous afficherez le tableau sous la forme :

	1 1
	2 1
	3 1
	4 0
	5 1
	6 0
	7 1
	8 0
	9 0
	10 0 

*/
