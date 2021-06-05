//比较键入的两个整数的大小并显示较大值
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int n1 = 0;
	int n2 = 0;
	int max = 0;
	printf("请输入两个整数:");
	scanf("%d %d", &n1, &n2);
	max = Max(n1, n2);
	printf("较大值为%d", max);
	return 0;
}