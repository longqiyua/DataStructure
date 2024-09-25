/*

5. 设有一个线性表 (e0, e1, …, en-2, en-1)
存放在一个一维数组A[arraySize]中的前n个数组元素位置。
请编写一个函数将这个线性表原地逆置，
即将数组的前n个原址内容置换为  (en-1, en-2, …, e1, e0) 。
*/
/*
#include<iostream>
using namespace std;

void invert(int* data, int n);//传递数组第一个元素的指针以及数组大小

int main()
{
	int n = 0;
	cout << "请输入需要逆置的数组大小为？" << endl;
	cin >> n;

	int* data = (int*)malloc(sizeof(int) * n);
	if (data == NULL)
	{
		cout << "内存分配失败" << endl;
		return 1;
	}

	for (int i = 0; i < n; ++i)
	{
		data[i] = i;
	}


	//int* temp = (int*)malloc(sizeof(int) * n);
	invert(data, n);


	for (int i = 0; i < n; ++i)
	{
		cout << data[i] << " ";
	}


	free(data);
	return 0;
}

void invert(int* data, int n)
{
	int* temp = (int*)malloc(sizeof(int) * n);
	if (temp == NULL)
	{
		cerr << "内存分配失败" << endl;
		exit(1);
	}

	for (int i = 0; i < n; ++i)
	{
		temp[i] = data[i];//创建数组的副本
	}
	int j = 0;
	for (int i = n - 1; i >= 0; --i)
	{
		data[j] = temp[i];
		j++;
	}

	free(temp); // 释放临时数组内存
}

*/

