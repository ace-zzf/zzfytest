#include<stdio.h>
#include<string.h>
#pragma warning (disable:4996)

int strLen(char str[]);//�������ַ������Ⱥ������ݹ鷨��
int strLen1(char str[]);//�������ַ������Ⱥ������ǵݹ鷨��
int reverse_string(char str[]);//��������������ַ�����
int DigitSum(int n);//������һ�����ĸ���λ֮�ͺ���
int exp(int n, int k);//����һ����n��k�η��ĺ���
int fib(int n);//�������n��쳲��������������ݹ鷨��
int fib1(int n);//�������n��쳲��������������ǵݹ鷨��

int main()
{
	/*���ַ�������*/
	/*char str[] = "hello";
	int n = strLen(str);
	printf("%d  %d\n", n, strLen1(str));
	system("pause");
	return 0;*/

	/*�����ַ���Ȼ���������*/
	/*char str[100];
	gets(str);
	reverse_tring(str);
	system("pause");
	return 0; */

	/*����һ�����ĸ���λ�ĺ�*/
	/*int n = 1729;
	int ret = DigitSum(n);
	printf("%d", ret);
	system("pause");
	return 0;*/

	/*��n��k�η�*/
	/*int n = 4,k = 4;
	int ret=exp(n, k);
	printf("%d\n", ret);
	system("pause");
	return 0; */

	/*��n��쳲�������*/
	/*int n = 0;
	printf("������һ������");
	scanf("%d",&n);
	int ret=fib(n);
	printf("%d\n", ret);
	system("pause");
	return 0;*/
}

//���ַ������ȣ��ݹ鷨��
int strLen(char str[])
{
	if (str[0] == '\0'){
		return 0;
	}
	return 1 + strLen(str + 1);
}

//�ǵݹ鷨���ַ�������
int strLen1(char str[])
{
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++){
		count++;
	}
	return count;
}

//���ַ�������������������ݹ鷨��
void reverse_tring(char *str)
{
	if (strlen(str)>0)
	{
		printf("%c ", str[strlen(str) - 1]);
		str[strlen(str) - 1] = '\0';
		reverse_tring(str);
	}
}

//ʵ��һ�����ĸ���λ֮�ͣ��ݹ鷨��
int DigitSum(int n)
{
	if (n <= 9){
		return n;
	}
	return  n % 10 + DigitSum(n / 10);
}

//ʵ��n��k�η����ݹ鷨��
int exp(int n, int k)
{
	if (k <= 1){
		return n;
	}
	return n*exp(n, k - 1);
}

//��쳲��������У��ݹ鷨��
int fib(int n)
{
	if (n == 1){
		return 1;
	}
	if (n == 2){
		return 1;
	}
	return fib(n-1)+ fib(n-2);
}

//��쳲��������У��ǵݹ鷨��
int fib1(int n) 
{
	if (n == 1) {
		return 1;
	}
	if (n == 2) {
		return 1;
	}
	int last1 = 1;//��ʾ��i-1��
	int last2 = 1;//��ʾ��i-2��
	int cur = 0;//cur ��ʾ��ǰ����� i ��
	for (int i = 3; i <= n; i++) {
		cur = last1 + last2;
		last2 = last1;
		last1 = cur;
	}
	return cur;
}

