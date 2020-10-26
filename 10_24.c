#include<stdio.h>
#include<windows.h>
#pragma warning (disable:4996)

int binarysearch(int *arr, int len, int toFind);//声明二分法查找函数
void printNum(int n);//声明打印每一位的函数
int factor(int n);//声明n的阶乘的函数,递归法
int infactor(int n);///声明n的阶乘的函数,非递归法
void multi(int n);//声明x*x乘法口诀表的函数
void exchangeNum(int *x, int *y);//声明交换两个整数的函数
void isLeapyear(int n);//声明判断闰年的函数
void isPrimer(int n);//声明求区间范围内的素数函数

int main()
{
	/*实现100-200之间的素数显示*/
	for (int i = 100; i <= 200; i++)
	{
		isPrimer(i);
	}
	system("pause");
	return 0;

	///*判断闰年*/
	//int year = 0;
	//printf("请输入要判断的年份：");
	//scanf("%d", &year);
	//isLeapyear(year);
	//system("pause");
	//return 0;

	///*交换两个数*/
	//int num1,num2;
	//printf("请输入要交换的两个数：");
	//scanf("%d%d", &num1,&num2);
	//exchangeNum(&num1,& num2);
	//printf("交换后的结果是：\n num1=%d,num2=%d\n",num1,num2);
	//system("pause");
	//return 0;

	///*打印x*x的乘法口诀表*/
	//int num = 0;
	//printf("请输入要打印x*x的乘法口诀表：");
	//scanf("%d",&num);
	//multi(num);
	//system("pause");

	///*打印输入数的每一位*/
	//int num = 0;
	//printf("请输入一个整数：");
	//scanf("%d",&num);
	//printNum(num);
	//system("pause");

	///*求n的阶乘*/
	//int num = 0;
	//printf("请输入一个整数n：");
	//scanf("%d",&num);
	//factor(num);
	//infactor(num);
	//printf("递归法：%d的阶乘是%d\n", num,factor(num));
	//printf("非递归法：%d的阶乘是%d\n", num, infactor(num));
	//system("pause");

	///*二分法查找*/
	//int arr[] = {2,3,5,7,8,9};
	//int len = sizeof(arr) / sizeof(arr[0]);
	//int ret=binarysearch(arr,len, 5);
	//printf("%d\t", ret);//返回找到元素的下标
	//printf("%d\n",arr[ret]);//显示找到的元素
	//system("pause");
	//return 0;
}

//求区间范围内的素数函数
void isPrimer(int n)
{
	int j;
	for (j = 2; j < n; j++){
		if (n % j == 0){
			break;
		}
	}
	if (n == j){
		printf("%d\n", n);
	}
}

//判断输入的数是不是闰年
void isLeapyear(int n)
{
	if ((n % 100 != 0 && n % 4 == 0) || n % 400 == 0){
		printf("%d是闰年!\n", n);
	}
	else{
		printf("%d不是闰年!\n", n);
	}
}

//交换两个整数的函数
void exchangeNum(int *x, int *y)
{
	int temp = 0;
	temp = *x;
	*x = *y;
	*y = temp;
}

/* x*x乘法口诀表函数 */
void multi(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d*%d=%d\t", j, i, j*i);
		}
		printf("\n");
	}
}

//一个整型数按照顺序打印它的每一位,采用递归的方法
void printNum(int n)
{
	if (n > 9){
		printNum(n / 10);
	}
	printf("%d\t", n % 10);
}

//求n的阶乘的递归做法，即数学归纳法,初始条件1!=1,递归公式：n!=n*(n-1)!
int factor(int n)//递归法
{
	if (n == 1){
		return 1;
	}
	return n*factor(n - 1);
}
int infactor(int n)//非递归法
{
	int result=1;
	for (int i = 1; i <= n; i++){
		result *= i;
	}
	return result;
}
//二分法查找函数
int binarysearch(int *arr, int len, int toFind)
{
	int left = 0;
	int right = len - 1;
	while (left <= right){
		int mid = (left + right) / 2;
		if (toFind < arr[mid]){
			right = mid - 1;
		}
		else if (toFind>arr[mid]){
			left = mid + 1;
		}
		else{
			return mid;
		}
	}
	return -1;
}
