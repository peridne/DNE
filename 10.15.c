#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>;

int main()
{
	int x, y, a, b, c;
	scanf("%d", &x);
	a = x % 10;
	b = x / 10 % 10;
	c = x / 100;
	y = a * 100 + b * 10 + c;
	printf("%d\n", y);
	return 0;
}


//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int c = (a / 100 * 60 + a % 100) + b;
//	printf("%d%d", c / 60, c % 60);
//	return 0;
//}

//{
//	int cm = 0;
//	scanf("%d", &cm);
//	int foot = cm / 30.48;
//	int inch = ((cm / 30.48) - foot) * 12;
//	printf("foot = %d inch = %d", foot, inch);
//	return 0;
//}


//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d+%d=%d\n", a, b, a + b);
//	printf("%d-%d=%d\n", a, b, a - b);
//	printf("%d*%d=%d\n", a, b, a * b);
//	printf("%d/%d=%d\n", a, b, a / b);
//	return 0;
//}




//{
//	int a = 10;
//	int b = a++;//�����10��but������ a�����11��
//	int c = ++a;//����һ��a=11�������ȣ�1�ٸ�ֵ��c��c=12,���ڸ����ã�a=12;
//	printf("a=%d b=%d c=%d\n", a, b, c);
//	return 0;
//}

//{
//	int a, b, c;
//	scanf("%d %d", &a, &b);
//	c = a;
//	a = b;
//	b = c;
//	printf("%d %d\n", a, b);
//	return 0;
//}
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	double c = (a + b) / 2.0;
//	printf("%lf\n", c);
//	return 0;
//}


//{
//	int h1, m1;
//	int h2, m2;
//	scanf("%d %d", &h1, &m1);
//	scanf("%d %d", &h2, &m2);
//	int t1 = h1 * 60 + m1;
//	int t2 = h2 * 60 + m2;
//	int t = t1 - t2;
//	printf("ʱ�����%dʱ%d��\n", t / 60, t % 60);
//	return 0;
//}