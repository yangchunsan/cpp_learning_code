#include <stdio.h>
int main()
{
	const int FIRST_0Z = 46;
	const int NEXT_OZ = 20;
	int ounces, cost;

	printf(" ounces cost\n");
	for (ounces = 1, cost = FIRST_0Z; ounces <= 16; ounces++, cost += NEXT_OZ)
		printf("%5d  $%4.2f\n", ounces, cost / 100.0);

	return 0;	
}