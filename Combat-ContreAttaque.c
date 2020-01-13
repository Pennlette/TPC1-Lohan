#include <stdio.h>

int main() {
	int hpMonstre;
	int hpHeros;
	int decision;
	int loop;
	hpHeros = 20;
	hpMonstre = 10;
	loop = 1;
	printf("Vous etes Luminoez Poavreusel\n");
	printf("Vous etes une chasseuse de primes, vous tuez des monstres\n");
	printf("Soudainement un Mashikouly vous attaque !! C'est terrible\n");
	printf("STRIFE\n");
	printf("\n");
	printf("\n");
	printf("Vos HP : %d\n",hpHeros);
	printf("HP du Mashikouly : %d\n",hpMonstre);
	printf("\n");
	printf("\n");
	printf("Qu'allez vous entreprendre ?\n");
	printf("Attaquer(1) / Esquiver(2)\n");
	scanf("%d", &decision);
	while (loop == 1)
	{
		if (decision == 1)
		{
			printf("Un tres joli coup, dommage que la tete soi un peu plus haut\n");
			printf("Le Mashikouly perd 3 HP\n");
			hpMonstre = hpMonstre - 2;
			printf("Le Mashikouly vous lance une pomme... C'est tres peu efficace\n");
			printf("Vous perdez 1 HP\n");
			hpHeros = hpHeros - 1;
			printf("Le Mashikouly a desormais %d HP\n", hpMonstre);
			printf("Vous avez %d HP\n", hpHeros);
			printf("Qu'allez vous entreprendre ?\n");
			printf("Attaquer(1) / Esquiver(2)\n");
			scanf("%d", &decision);
		}
		if (decision == 2)
		{
			printf("Vous roulez sur le cote avec la grace de la marmotte du Perigord\n");
			printf("Le Mashikouly tente de vous toucher mais il vous frole a peine\n");
			printf("Le Mashikouly a desormais %d HP\n", hpMonstre);
			printf("Vous avez %d HP\n", hpHeros);
			printf("Qu'allez vous entreprendre ?\n");
			printf("Attaquer(1) / Esquiver(2)\n");
			scanf("%d", &decision);
		}
		if (hpMonstre == 0)
		{
			printf("Le Mashikouly fuis, on dirai bien que la chasse commence\n");
			loop = 0;
		}
	}	
	return 0;
}