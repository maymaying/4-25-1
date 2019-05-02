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
		printf("请输入密码:>");
		scanf("%s", password);//%s 字符串
		if(strcmp(password, "123456") == 0)//string compare  两个字符串的比较，坚决不能用“=”
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("密码输入错误,请重新输入!\n");
		}
	}
	if(i == 3)
	{
		printf("三次密码均输入错误，退出程序\n");
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
	//生成随机数   rand()
	int ret = 0;
	int guess = 0;
	ret = rand()%100+1;//rand返回值“0-32767”  rand()%100得到的是“0~99”个数字，再加一就是“1~100”
	//printf("%d\n", ret);
	//猜数字
	while(1)            
	{
		printf("请猜数字:>");
		scanf("%d", &guess);
		if(guess>ret)
		{
			printf("猜大了\n");
		}
		else if(guess<ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}

int main()
{                                  //null   NUL   '\0'
	int input = 0;                 //srand在整个工程里面，设置随机数的生成起点，只需设置一次就够了
	srand((unsigned int)time(NULL));//生成随机数and rand  强制类型转换  #include<time.h>  NULL-初始化指针
	do                                                                                   //int a=0;
	{                                                                                    //int *p=NULL;     
		//打印菜单
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择!\n");
			break;
		}
	} while (input);
	return 0;
}
*/



/*
//goto语句能跳出两层或多层循环    break只能从最内层循环退出到上一层的循环
int main()
{
again:
	printf("hehe\n");
	goto again;//死循环  不断打印“hehe”

	return 0;
}
*/


/*
int main()
{
	char input[20] = {0};
	system("shutdown -s -t 60");//关机
again:
	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
	scanf("%s", &input);
	if(strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");//取消关机
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
		printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
		scanf("%s", input);
		if(strcmp(input, "我是猪") == 0)
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
	memset(arr, '*', 5);   //memset是以字节为单位设置的，
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
//x,y为形参
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
	//a,b为实参
	Swap1(a, b);
	printf("a = %d b = %d\n", a, b);
	system("pause");   
	return 0;
}
//结果为：  a=10 b=20
//	        a=10 b=20  并未交换

//当实参传给形参的时候
//形参是实参的一份临时拷贝
//对形参的修改不会改变实参
*/


/*
int main()
{
	int a = 10;
	int *p = &a;

	*p = 20;
	printf("%d\n", a); //结果为：20
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
	//Swap1(a, b);//传值调用  函数的形参和实参分别占有不同内存块，对形参的修改不会影响实参
    Swap2(&a, &b);//传址调用  把函数外部创建变量的内存地址传递给函数参数的一种调用函数的方式
	printf("a = %d b = %d\n", a, b);
	system("pause");
	return 0;
}
//结果为： a = 10 b = 20
//         a = 20 b = 10
*/


/*
//写一个函数可以判断一个数是不是素数
int is_prime(int i)
{
	int j = 0;
	for(j=2; j<i; j++)
	{
		if(i%j == 0)
			return 0;//只要整除了就不是素数，但不能整除不一定是素数
	}
	return 1;
}
int main()
{
	int i = 0;
	for(i=100; i<=200; i++)
	{
		//判断i是否为素数
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
		//判断闰年
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
		printf("找不到\n");
	}
	else
	{
		printf("找到了，下标是：%d\n", ret);
	}
	system("pause");
	return 0;
}



int binary_search(int arr[], int k, int sz)//int arr[] =int *arr  本身为指针  一个指针变量的大小为4
{
	int left = 0;      //sizeof(arr)/sizeof(arr[0])=1    sizeof(arr[0])=4,sizeof(arr)=4
	int right = sz-1;//int right = sizeof(arr)/sizeof(arr[0])-1;  right=0 在函数内部不能计算参数部分数组元素个数
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
		printf("找不到\n");
	}
	else
	{
		printf("找到了，下标是：%d\n", ret);
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
	printf("%d\n", strlen("abcdef"));//链式访问
	system("pause");
	return 0;
}


int main()
{
	printf("%d", printf("%d", printf("%d", 43)));
	//printf("%d", printf("%d", 2));
	//printf("%d", 1);
	//printf : Each of these functions returns the number of characters printed, or a negative value if an error occurs
	system("pause");//结果为：4321
	return 0;
}
*/


//#pragma comment(lib, "add.lib")  //".lib"静态库

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
