#include <stdio.h>

int main(void) {
	int moneyQueEGoodNoisNumHave;
	int notas100;
	int notas50;
	int notas20;
	int notas10;
	int notas5;
	int notas2;
	int notas1;
	
	scanf("%d", &moneyQueEGoodNoisNumHave);
	
	notas100 = moneyQueEGoodNoisNumHave / 100;
	notas50 = (moneyQueEGoodNoisNumHave % 100) / 50;
	notas20 = ((moneyQueEGoodNoisNumHave % 100) % 50) / 20;
	notas10 = (((moneyQueEGoodNoisNumHave % 100) % 50) % 20) / 10;
	notas5 = ((((moneyQueEGoodNoisNumHave % 100) % 50) % 20) % 10) / 5;
	notas2 = (((((moneyQueEGoodNoisNumHave % 100) % 50) % 20) % 10) % 5) / 2;
	notas1 = (((((moneyQueEGoodNoisNumHave % 100) % 50) % 20) % 10) % 5) % 2;
	
	printf("%d\n", moneyQueEGoodNoisNumHave);
	printf("%d nota(s) de R$ 100,00\n", notas100);
	printf("%d nota(s) de R$ 50,00\n", notas50);
	printf("%d nota(s) de R$ 20,00\n", notas20);
	printf("%d nota(s) de R$ 10,00\n", notas10);
	printf("%d nota(s) de R$ 5,00\n", notas5);
	printf("%d nota(s) de R$ 2,00\n", notas2);
	printf("%d nota(s) de R$ 1,00\n", notas1);
	
	return 0;
}
