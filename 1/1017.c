#include <stdio.h>

int main(void) {
	int hours;
	int speed;
	int totalTravel;
	double fuelSpent;
	
	scanf("%d%d", &hours, &speed);
	totalTravel = hours * speed;
	fuelSpent = totalTravel / 12.0;
	
	printf("%.3lf\n", fuelSpent);
	
	return 0;
}
