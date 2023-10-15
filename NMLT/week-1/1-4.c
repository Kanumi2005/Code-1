#include <stdio.h>

int main()
{
	int n;
	long s;
	printf("Nhap n = ");
	scanf("%d", &n);
	for (s = 1; n > 0; n--)
		s = s * n;
	printf("s = %d", s);
}