#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void char_c()
{
		char c = 'A';
		char* p = "helloworld";
		printf("%c\n", c);
}

void float_0()
{
	float f = 12345678900.0 + 1;
	printf("%f\n", f);
	printf("%f\n", 12345678900.0 + 1);//�����ͳ���Ĭ�ϰ�double������
}

void mixed_operation()
{
	short i = 10;
	int j = 5;
	i = (short)j;
	printf("%d\n", i);
}

void muti_overflow()
{
	long long i;
	i = (long long)131076 * 131076;
	printf("%lld\n", i);//x64�� %ld ����
}

void float_overflow()
{
	float f = 12345678900.0 + 1;
	double d = f;
	printf("%f\n", 12345678900.0 + 1);
	printf("%f\n", d);
}

void long_float()
{
	short i = 10;
	long j = 2;
	float k, p;
	k = (float)5 / 2;
	p = 5 / 2.0;

	printf("%f\n", k);
	printf("%f\n", p);
}

void scanf_space()
{
	//scanf %d %f ����������\n �ո�,����
	//scanf %c ����������\n �ո�,������
	int i, j;
	char c;
	scanf("%d", &i);
	printf("%d\n", i);
	scanf("%d", &j);
	printf("%d\n", j);
	rewind(stdin);
	scanf("%c", &c);
	printf("%c\n", c);
}

void cyclic_polling_0()
{
	int i, ret;
	while (rewind(stdin), (ret = scanf("%d", &i)) != EOF)
	{
		printf("%d\n", i);
	}
}

void cyclic_polling_1()
{
	int i, ret;
	char c;
	float f;
	double d;
	printf("������:\n");

	while (rewind(stdin), (ret = scanf(" %d %c%f%lf", &i, &c, &f, &d)) != EOF)
	{

		printf("i=%d,c=%c,f=%5.2f,d=%f\n", i, c, f, d);
	}
}

void putchar_c()
{
	char c;
	printf("����һ���ַ�:");
	c = getchar();
	printf("����ַ�:");
	putchar(c);
	printf("\n");
	printf("you=%c\n", c);
}

void int_float()
{
	int i = 10;
	float f = 95.5;
	printf("ѧ����ѧ��=%05d,����=%5.2f\n", i, f);
	printf("ѧ����ѧ��=%-10d,����=%5.2f\n", i, f);
	printf(" %s\n", "hello");
}

void while_i()
{
	int i = 12321, result;
	while (i)
	{
		printf("%d\n", i % 10);
		i = i / 10;
	}
}

void while_year()
{
	int year;
	printf("��������:");
	while (scanf("%d", &year) != EOF)
	{
		if (3 < year && year < 10)
		{
			printf("������ȷ\n");
		}
		else {
			printf("�������\n");
		}
	}
}

void while_years()
{
	printf("���������:");
	int year;
	while (scanf("%d", &year) != EOF)
	{
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		{
			printf("��������������\n");
		}
		else {
			printf("�������ݲ�������\n");
		}
	}
}

void short_circuit_0()
{
	int i = 1;
	i == 1 && printf("systom is error\n");
}//��·����

void short_circuit_1()
{
	int i = 1, j = 5;
	i == 0 && (j == 3);
	printf("%d\n", j);
}//��·����

void short_circuit_2()
{
	int i = 1;
	i == 1 || printf("system is error\n");
}//��·����

void bit_operation()
{
	//λ����
	//���Ƴ˶�
	// ����,����:��λ��0,����:��λ��1(������һ����)
	short i = 0x70ff;//��ֹ�ƶ�������λ
	i = i << 1;
	i = -5;
	printf("i <<=%d\n", i<<1);
	printf("%d\n", i>>1);
}

void xor_operation()
{
	//�������
	printf("%d", 5 & 8);
	int a[7] = { 7,5,7,8,11,8,11};
	int i, ret = 0;
	for (i = 0; i < 7; i++)
	{
		ret = ret ^ a[i];

	}
	printf("ret=%d\n", ret);
	printf("~5=%d\n", ~5);
	printf("5|7=%d\n", 5 | 7);
	printf("28&-28=%d\n", 28 & -28);
}

void default_int()
{
	char c = 0x93 << 1 >> 1;
	printf("%x\n", c);
	c = 0x93 << 1;
	c = c >> 1;
	printf("%x\n", c);
}

void condition()
{
	int i, j, k, max_value;
	printf("��������������(�ÿո����):");
	while (scanf("%d%d%d", &i, &j, &k) != EOF)
	{
		max_value = (i > j ? i : j) > k ? (i > j ? i : j) : k;
		printf("�����Ϊ:%d\n", max_value);
	}

}

void add_self()
{
	int i = -1;
	int j;
	j = i++ > -1;
	printf("i=%d,j=%d\n", i, j);
	j = !++i;
	printf("i = % d, j = % d\n", i, j);

}



int main()
{
	//char_c();

	//float_0();

	//mixed_operation();

	//muti_overflow();

	//float_overflow();

	//long_float();

	//scanf_space();

	//cyclic_polling_0();

	//cyclic_polling_1();

	//putchar_c();

	//int_float();

	//while_i();

	//while_year();

	//while_years();

	//short_circuit_0();

	//short_circuit_1();

	//short_circuit_2();

	//bit_operation();

	//xor_operation();

	//default_int();

	//condition();

	//add_self();


	return 0;
}