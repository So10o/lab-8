#include <stdio.h>  
#include<locale.h>
#define _CRT_SECURE_NO_DEPRECATE
#define _USE_MATH_DEFINES 
#include <math.h> 



float dva(float x)
{
	float y;
	y = ((pow(x, 3)) + (3 * pow(x, 2)) - 3);
	return y;
}

int main()
{
	setlocale(0, "RUS");
	puts("������� 0");
	int i;
	puts("������� ���������� ��������");
	scanf("%d", &i);
	for (int start = 1; start < 2; start++)
	{
		putchar('+');
		putchar('!');
	}
	for (int x = 1; x <= i / 2; x++)
	{
		putchar('*');
		putchar('!');
	}
	puts("");
	for (int x = 1; x <= i / 2; x++)
	{
		putchar('%');
		putchar('!');
	}
	int start = 1;
	while (start < 2) {
		putchar('+');
		putchar('!');
		start++;
	}
	puts("\n������� 1");
	int n;
	int m;
	int s = 0;
	int o = 0;
	puts("������� ��������� �����");
	scanf("%d", &m);
	puts("������� �������� �����");
	scanf("%d", &n);
	for (int i = m; i <= n; i++)
	{
		s += i;
		o += 1;
		printf("��������� %d ���\n", o);
	}
	printf("��������� %d\n", s);
	puts("������� 2");
	float q;
	puts("������� ��� ���������");
	scanf("%f", &q);
	printf("| x    |  f(x)|\n");
	for (float x = 2; x <= 4; x += q)
	{
		printf("| %.2f | %.2f | \n", x, dva(x));
	}
	return 0;

}