#include<stdio.h>
#include<windows.h>
#pragma warning (disable:4996)

int binarysearch(int *arr, int len, int toFind);//�������ַ����Һ���
void printNum(int n);//������ӡÿһλ�ĺ���
int factor(int n);//����n�Ľ׳˵ĺ���,�ݹ鷨
int infactor(int n);///����n�Ľ׳˵ĺ���,�ǵݹ鷨
void multi(int n);//����x*x�˷��ھ���ĺ���
void exchangeNum(int *x, int *y);//�����������������ĺ���
void isLeapyear(int n);//�����ж�����ĺ���
void isPrimer(int n);//���������䷶Χ�ڵ���������

int main()
{
	/*ʵ��100-200֮���������ʾ*/
	for (int i = 100; i <= 200; i++)
	{
		isPrimer(i);
	}
	system("pause");
	return 0;

	///*�ж�����*/
	//int year = 0;
	//printf("������Ҫ�жϵ���ݣ�");
	//scanf("%d", &year);
	//isLeapyear(year);
	//system("pause");
	//return 0;

	///*����������*/
	//int num1,num2;
	//printf("������Ҫ��������������");
	//scanf("%d%d", &num1,&num2);
	//exchangeNum(&num1,& num2);
	//printf("������Ľ���ǣ�\n num1=%d,num2=%d\n",num1,num2);
	//system("pause");
	//return 0;

	///*��ӡx*x�ĳ˷��ھ���*/
	//int num = 0;
	//printf("������Ҫ��ӡx*x�ĳ˷��ھ���");
	//scanf("%d",&num);
	//multi(num);
	//system("pause");

	///*��ӡ��������ÿһλ*/
	//int num = 0;
	//printf("������һ��������");
	//scanf("%d",&num);
	//printNum(num);
	//system("pause");

	///*��n�Ľ׳�*/
	//int num = 0;
	//printf("������һ������n��");
	//scanf("%d",&num);
	//factor(num);
	//infactor(num);
	//printf("�ݹ鷨��%d�Ľ׳���%d\n", num,factor(num));
	//printf("�ǵݹ鷨��%d�Ľ׳���%d\n", num, infactor(num));
	//system("pause");

	///*���ַ�����*/
	//int arr[] = {2,3,5,7,8,9};
	//int len = sizeof(arr) / sizeof(arr[0]);
	//int ret=binarysearch(arr,len, 5);
	//printf("%d\t", ret);//�����ҵ�Ԫ�ص��±�
	//printf("%d\n",arr[ret]);//��ʾ�ҵ���Ԫ��
	//system("pause");
	//return 0;
}

//�����䷶Χ�ڵ���������
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

//�ж���������ǲ�������
void isLeapyear(int n)
{
	if ((n % 100 != 0 && n % 4 == 0) || n % 400 == 0){
		printf("%d������!\n", n);
	}
	else{
		printf("%d��������!\n", n);
	}
}

//�������������ĺ���
void exchangeNum(int *x, int *y)
{
	int temp = 0;
	temp = *x;
	*x = *y;
	*y = temp;
}

/* x*x�˷��ھ����� */
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

//һ������������˳���ӡ����ÿһλ,���õݹ�ķ���
void printNum(int n)
{
	if (n > 9){
		printNum(n / 10);
	}
	printf("%d\t", n % 10);
}

//��n�Ľ׳˵ĵݹ�����������ѧ���ɷ�,��ʼ����1!=1,�ݹ鹫ʽ��n!=n*(n-1)!
int factor(int n)//�ݹ鷨
{
	if (n == 1){
		return 1;
	}
	return n*factor(n - 1);
}
int infactor(int n)//�ǵݹ鷨
{
	int result=1;
	for (int i = 1; i <= n; i++){
		result *= i;
	}
	return result;
}
//���ַ����Һ���
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
