#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
int main()
{
	int i = 0;
	char password[20] = {0};
	for(i=0; i<3; i++)
	{
		printf("����������:>");
		scanf("%s", password);//%s �ַ���
		if(strcmp(password, "123456") == 0)//string compare  �����ַ����ıȽϣ���������á�=��
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("�����������,����������!\n");
		}
	}
	if(i == 3)
	{
		printf("�����������������˳�����\n");
	}
	system("pause");
	return 0;
}
*/



/*
#include <time.h>
void menu()
{
	printf("*********************************\n");
	printf("******        1. play       *****\n");
	printf("******        0. exit       *****\n");
	printf("*********************************\n");
}
void game()
{
	//���������   rand()
	int ret = 0;
	int guess = 0;
	ret = rand()%100+1;//rand����ֵ��0-32767��  rand()%100�õ����ǡ�0~99�������֣��ټ�һ���ǡ�1~100��
	//printf("%d\n", ret);
	//������
	while(1)            
	{
		printf("�������:>");
		scanf("%d", &guess);
		if(guess>ret)
		{
			printf("�´���\n");
		}
		else if(guess<ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}

int main()
{                                  //null   NUL   '\0'
	int input = 0;                 //srand�������������棬�����������������㣬ֻ������һ�ξ͹���
	srand((unsigned int)time(NULL));//���������and rand  ǿ������ת��  #include<time.h>  NULL-��ʼ��ָ��
	do                                                                                   //int a=0;
	{                                                                                    //int *p=NULL;     
		//��ӡ�˵�
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��!\n");
			break;
		}
	} while (input);
	return 0;
}
*/



/*
//goto����������������ѭ��    breakֻ�ܴ����ڲ�ѭ���˳�����һ���ѭ��
int main()
{
again:
	printf("hehe\n");
	goto again;//��ѭ��  ���ϴ�ӡ��hehe��

	return 0;
}
*/


/*
int main()
{
	char input[20] = {0};
	system("shutdown -s -t 60");//�ػ�
again:
	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
	scanf("%s", &input);
	if(strcmp(input, "������") == 0)
	{
		system("shutdown -a");//ȡ���ػ�
	}
	else
	{
		goto again;
	}
	return 0;
}


int main()
{
	char input[20] = {0};
	system("shutdown -s -t 60");
	while(1)
	{
		printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
		scanf("%s", input);
		if(strcmp(input, "������") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}
*/


/*
int main()
{
	
	char arr1[20] = "aaaaaaaa";
	char arr2[] = "xian";
	strcpy(arr1, arr2);     //#include<string.h>
	printf("%s\n", arr1);
	system("pause");
	return 0;
}
*/

/*
int main()
{
	char arr[] = "hello xian";
	printf("%s\n", arr);
	memset(arr, '*', 5);   //memset�����ֽ�Ϊ��λ���õģ�
	printf("%s\n", arr);
	system("pause");
	return 0;
}
*/


/*
int get_max(int x, int y)
{
	if(x>y)
		return x;
	else
		return y;
}
int main()
{
	int a = 10;
	int b = 20;
	int max = get_max(10+1, get_max(2, 3));
	printf("max = %d\n", max);
	system("pause");
	return 0;
}
*/


/*
//x,yΪ�β�
void Swap1(int x, int y)
{
	int tmp = x;
	x = y;
	y = tmp;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("a = %d b = %d\n", a, b);
	//a,bΪʵ��
	Swap1(a, b);
	printf("a = %d b = %d\n", a, b);
	system("pause");   
	return 0;
}
//���Ϊ��  a=10 b=20
//	        a=10 b=20  ��δ����

//��ʵ�δ����βε�ʱ��
//�β���ʵ�ε�һ����ʱ����
//���βε��޸Ĳ���ı�ʵ��
*/


/*
int main()
{
	int a = 10;
	int *p = &a;

	*p = 20;
	printf("%d\n", a); //���Ϊ��20
	system("pause");
	return 0;
}


void Swap2(int* px, int* py)
{
	int tmp = *px;
	*px = *py;
	*py = tmp;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("a = %d b = %d\n", a, b);
	//Swap1(a, b);//��ֵ����  �������βκ�ʵ�ηֱ�ռ�в�ͬ�ڴ�飬���βε��޸Ĳ���Ӱ��ʵ��
    Swap2(&a, &b);//��ַ����  �Ѻ����ⲿ�����������ڴ��ַ���ݸ�����������һ�ֵ��ú����ķ�ʽ
	printf("a = %d b = %d\n", a, b);
	system("pause");
	return 0;
}
//���Ϊ�� a = 10 b = 20
//         a = 20 b = 10
*/


/*
//дһ�����������ж�һ�����ǲ�������
int is_prime(int i)
{
	int j = 0;
	for(j=2; j<i; j++)
	{
		if(i%j == 0)
			return 0;//ֻҪ�����˾Ͳ���������������������һ��������
	}
	return 1;
}
int main()
{
	int i = 0;
	for(i=100; i<=200; i++)
	{
		//�ж�i�Ƿ�Ϊ����
		if(is_prime(i) == 1)
		{
			printf("%d ", i);
		}
	}
	system("pause");
	return 0;
}
*/


/*
int is_leap_year(int y)
{
	return (y%4==0 && y%100!=0) || (y%400==0);
	//if((y%4==0 && y%100!=0) || (y%400==0))
	//	return 1;
	//else
	//	return 0;
}

int main()
{
	int year=0;
	for(year=1000; year<=2000; year++)
	{
		//�ж�����
		if(is_leap_year(year) == 1)
		{
			printf("%d ", year);
		}
	}
	system("pause");
	return 0;
}
*/


/*
int binary_search(int arr[], int k, int left, int right)
{
	while(left<=right)
	{
		int mid = left+(right-left)/2;
		if(arr[mid] > k)
		{
			right = mid-1;
		}
		else if(arr[mid]<k)
		{
			left = mid+1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int left = 0;
	int right = sizeof(arr)/sizeof(arr[0])-1;
	int ret = binary_search(arr, 7, left, right);
	if(-1 == ret)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
	}
	system("pause");
	return 0;
}



int binary_search(int arr[], int k, int sz)//int arr[] =int *arr  ����Ϊָ��  һ��ָ������Ĵ�СΪ4
{
	int left = 0;      //sizeof(arr)/sizeof(arr[0])=1    sizeof(arr[0])=4,sizeof(arr)=4
	int right = sz-1;//int right = sizeof(arr)/sizeof(arr[0])-1;  right=0 �ں����ڲ����ܼ��������������Ԫ�ظ���
	while(left<=right)   
	{
		int mid = left+(right-left)/2;
		if(arr[mid] > k)
		{
			right = mid-1;
		}
		else if(arr[mid]<k)
		{
			left = mid+1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr)/sizeof(arr[0]);
	int ret = binary_search(arr, 7, sz);
	if(-1 == ret)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
	}
	system("pause");
	return 0;
}
*/


/*
void Add(int *p)
{
	(*p)++;
}
int main()
{
	int num = 0;
	Add(&num);
	printf("%d\n", num);
	Add(&num);
	printf("%d\n", num);
	system("pause");
	return 0;
}
*/


/*
int main()
{
	int len = strlen("abcdef");
	printf("%d\n", len);
	printf("%d\n", strlen("abcdef"));//��ʽ����
	system("pause");
	return 0;
}


int main()
{
	printf("%d", printf("%d", printf("%d", 43)));
	//printf("%d", printf("%d", 2));
	//printf("%d", 1);
	//printf : Each of these functions returns the number of characters printed, or a negative value if an error occurs
	system("pause");//���Ϊ��4321
	return 0;
}
*/


//#pragma comment(lib, "add.lib")  //".lib"��̬��

#include "add.h"
int main()
{
	int a = 10;
	int b = 20;
	int ret = Add(a, b);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
