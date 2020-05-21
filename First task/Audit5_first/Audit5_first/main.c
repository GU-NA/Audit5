#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void  ProstoeChislo(int num, int** mass, int** mass1, int a) {
	int j, flag = 0;
	int b = 1;
	double c;
	int numb = 1;
	while (numb < num) {
		for (int i = 0; i < a; i++) {
			if ((*mass)[i] == numb) {
				(*mass1)[i] = b;
				if (numb == 1)
					(*mass1)[i] = 2;
				if (numb == 2)
					(*mass1)[i] = 3;
				if (numb == 3)
					(*mass1)[i] = 5;
			}
		}
		b += 2;
		c = sqrt(b);
		for (j = 3; j <= (int)(c); j = j + 2) {
			if (b % j == 0) {
				flag += 1;
				break;
			}
		}
		if (flag == 0)
			numb += 1;
		else
			flag = 0;
		for (int i = 0; i < a; i++) {
			if ((*mass)[i] == numb) {
				(*mass1)[i] = b;
				if (numb == 1)
					(*mass1)[i] = 2;
				if (numb == 2)
					(*mass1)[i] = 3;
				if (numb == 3)
					(*mass1)[i] = 5;
			}
		}
	}
	return;
}
int main() {
	int a, i, max = 0;
	scanf_s("%d", &a);
	int* mass1 = (int)malloc(sizeof(int) * a);
	int* mass = (int)malloc(sizeof(int) * a);
	for (i = 0; i < a; i++)
		scanf_s("%d", &mass[i]);
	for (i = 0; i < a; i++)
		if (max < mass[i])
			max = mass[i];
	ProstoeChislo(max, &mass, &mass1, a);
	//printf("\n");
	for (i = 0; i < a; i++)
		printf("%d\n", mass1[i]);
	return 0;
}