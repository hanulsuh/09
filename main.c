#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void) 
{
	int grade[SIZE];
	int i;
	int average, sum = 0;
		
	for(i=0; i<SIZE; i++)
	{
		printf("Input grade : ");
		scanf("%d", &grade[i]);
		sum += grade[i];
	}
	
	average = sum / SIZE;
	
	printf("grade average : %d\n", average);
	
	return 0;
}
