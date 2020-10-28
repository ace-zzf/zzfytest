#include<stdio.h>
#include<string.h>
#pragma warning (disable:4996)

int strLen(char str[]);//声明求字符串长度函数（递归法）
int strLen1(char str[]);//声明求字符串长度函数（非递归法）
int reverse_string(char str[]);//声明求逆向输出字符函数
int DigitSum(int n);//声明求一个数的各个位之和函数
int exp(int n, int k);//声明一个求n的k次方的函数
int fib(int n);//声明求第n的斐波那契数函数（递归法）
int fib1(int n);//声明求第n的斐波那契数函数（非递归法）

int main()
{
	/*求字符串长度*/
	/*char str[] = "hello";
	int n = strLen(str);
	printf("%d  %d\n", n, strLen1(str));
	system("pause");
	return 0;*/

	/*输入字符串然后逆序输出*/
	/*char str[100];
	gets(str);
	reverse_tring(str);
	system("pause");
	return 0; */

	/*计算一个数的各个位的和*/
	/*int n = 1729;
	int ret = DigitSum(n);
	printf("%d", ret);
	system("pause");
	return 0;*/

	/*求n的k次方*/
	/*int n = 4,k = 4;
	int ret=exp(n, k);
	printf("%d\n", ret);
	system("pause");
	return 0; */

	/*求n的斐波那契数*/
	/*int n = 0;
	printf("请输入一个数：");
	scanf("%d",&n);
	int ret=fib(n);
	printf("%d\n", ret);
	system("pause");
	return 0;*/
}

//求字符串长度（递归法）
int strLen(char str[])
{
	if (str[0] == '\0'){
		return 0;
	}
	return 1 + strLen(str + 1);
}

//非递归法求字符串长度
int strLen1(char str[])
{
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++){
		count++;
	}
	return count;
}

//将字符串按反向排列输出（递归法）
void reverse_tring(char *str)
{
	if (strlen(str)>0)
	{
		printf("%c ", str[strlen(str) - 1]);
		str[strlen(str) - 1] = '\0';
		reverse_tring(str);
	}
}

//实现一个数的各个位之和（递归法）
int DigitSum(int n)
{
	if (n <= 9){
		return n;
	}
	return  n % 10 + DigitSum(n / 10);
}

//实现n的k次方（递归法）
int exp(int n, int k)
{
	if (k <= 1){
		return n;
	}
	return n*exp(n, k - 1);
}

//求斐波那契数列（递归法）
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

//求斐波那契数列（非递归法）
int fib1(int n) 
{
	if (n == 1) {
		return 1;
	}
	if (n == 2) {
		return 1;
	}
	int last1 = 1;//表示第i-1项
	int last2 = 1;//表示第i-2项
	int cur = 0;//cur 表示当前这个第 i 项
	for (int i = 3; i <= n; i++) {
		cur = last1 + last2;
		last2 = last1;
		last1 = cur;
	}
	return cur;
}

