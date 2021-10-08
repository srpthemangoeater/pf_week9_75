#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	FILE* fa;
	FILE* fb;
	int a, b, sum = 0;
	fa = fopen("a.txt", "r");
	while (!feof(fa)) {
		a = 0; b = 0;
		fscanf(fa, "%d %d", &a, &b);
		sum = a+b;
	}
	//printf("%d\n", sum);
	fclose(fa);

	fb = fopen("b.txt", "w");
	fprintf(fb, "%d\n", sum);
	fclose(fb);

	return 0;
}