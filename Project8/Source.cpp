#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	// i want start 0 cuz can + don't have problem
	int x[10];
	int siGMax = 0, sigMAPower = 0;
	float SD, Xbar;
	printf("Enter number to point range : ");
	for (int i = 0; i < 2; i++)
	{
		scanf_s("%d", &x[i]);
	}
	if (x[0] > x[1])
	{
		for (int i = x[0]; i >= x[1]; i--)
		{
			printf("%d\t", i);
			siGMax += i;
			sigMAPower += pow(i, 2);
		}
	}
	else if (x[0] < x[1])
	{
		for (int i = x[0]; i <= x[1]; i++)
		{
			printf("%d\t", i);
			siGMax += i;
			sigMAPower += pow(i, 2);
		}
	}//Xbar=SigmaX/(k+1) SD=sqrt((sigMAPower/n)-xbar(power^2))
	printf("\n\n");
	int k = abs(x[0] - x[1]);
	//n=k+1
	Xbar = siGMax / (k + 1.0);
	SD = sqrt((sigMAPower / (k + 1.0) - pow(Xbar, 2)));
	printf("Average : %.1f\n", Xbar);
	printf("SD      :%.2f", SD);
	return 0;
}
