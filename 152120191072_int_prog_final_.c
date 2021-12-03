#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int i, j, m, n, r, k, a, b, c, t, f;// t and m will be used at parabola eq.
	double l;
	printf("Student's name, surname and number; Mucahid Mutluer 152120191072 \n");
	printf("Which shape would you like to draw?\n");
	printf("1. Line\n");
	printf("2. Parabola\n");
	printf("3. Circle\n");
	printf("Please insert the number to choose the shape\n");
	scanf_s("%d", &f);
	if (f == 1)
	{
		printf("to draw the line with mx+n=y equation please give first m and then n integers respectively\n");
		scanf_s("%d", &m);
		scanf_s("%d", &n);
		printf("\n");

		for (i = 0; i < 41; i++)
		{
			for (j = 0; j < 41; j++)
			{
				{

					if (20 - i == m * (j - 20) + n)
					{
						printf("*");
					}
					else if (j == 20)
					{
						printf("|");
					}
					else if (i == 20)
						printf("-");
					else
					{
						printf(" ");
					}
				}


			}
			printf("\n");

		}
	}
	if (f == 2)
	{
		printf("to draw the parabola with y=a*x*x+b*x+c equation please give a, b and c integers respectively\n");
		scanf_s("%d", &t);
		scanf_s("%d", &m);
		scanf_s("%d", &c);
		printf("\n");

		for (i = 0; i < 41; i++)
		{
			for (j = 0; j < 41; j++)
			{
				{

					if (20 - i == t * (j - 20)*(j - 20) + m * (j - 20) + c)
					{
						printf("*");
					}
					else if (j == 20)
					{
						printf("|");
					}
					else if (i == 20)
						printf("-");
					else
					{
						printf(" ");
					}
				}


			}
			printf("\n");

		}
	}
	if (f == 3)
	{
		printf("to draw the cirlce with r^2=(x-a)^2+(y-b)^2 equation please give a, b and r integers respectively\n");
		scanf_s("%d", &a);
		scanf_s("%d", &b);
		scanf_s("%d", &r);
		printf("\n");

		for (i = 0; i < 41; i++)
		{
			for (j = 0; j < 41; j++)
			{
				{
					k = (j - 20 - a)*(j - 20 - a) + (20 - i - b)*(20 - i - b);
					(double)k;
					l = sqrt(k); //i created a virtual l variable to fit the shape in screen with limited amount of pixel
					if (fabs(l - r) <= 0.3)//it's possible to adjust the view of circle with changing of 0.3 value
					{
						printf("*");
					}
					else if (j == 20)
					{
						printf("|");
					}
					else if (i == 20)
						printf("-");
					else
					{
						printf(" ");
					}
				}


			}
			printf("\n");

		}

	}
	if ((f != 1) && (f != 2) && (f != 3))
		printf("Please insert 1, 2 or 3");
	else
		printf(" ");
	system("pause");
}