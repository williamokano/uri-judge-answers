#include <stdio.h>

int main(void) {
	int seconds;
	int hours;
	int minutes;
	
	scanf("%d", &seconds);
	
	hours = seconds / 3600;
	minutes = (seconds % 3600) / 60;
	seconds = (seconds % 3600) % 60;
	
	printf("%d:%d:%d\n", hours, minutes, seconds);
	
	return 0;
}
