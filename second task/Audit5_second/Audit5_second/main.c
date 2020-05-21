#include<stdio.h>
#include<conio.h>
#include<Windows.h>
#include<time.h>
int main() {
	system("color 02");
	srand(time(0));
	while (1 == 1) {
		for (int i = 0; i < 100; i++) {
			if (rand() % 10 >= 7) {
				int d = 50 + rand() % 200;
				printf("%c ", d);
			}
			else {
				printf("%c ", 32);
			}
		}
		Sleep(100);
		printf("\n");
	}
	return 0;
}