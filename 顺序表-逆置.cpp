/*

5. ����һ�����Ա� (e0, e1, ��, en-2, en-1)
�����һ��һά����A[arraySize]�е�ǰn������Ԫ��λ�á�
���дһ��������������Ա�ԭ�����ã�
���������ǰn��ԭַ�����û�Ϊ  (en-1, en-2, ��, e1, e0) ��
*/
/*
#include<iostream>
using namespace std;

void invert(int* data, int n);//���������һ��Ԫ�ص�ָ���Լ������С

int main()
{
	int n = 0;
	cout << "��������Ҫ���õ������СΪ��" << endl;
	cin >> n;

	int* data = (int*)malloc(sizeof(int) * n);
	if (data == NULL)
	{
		cout << "�ڴ����ʧ��" << endl;
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
		cerr << "�ڴ����ʧ��" << endl;
		exit(1);
	}

	for (int i = 0; i < n; ++i)
	{
		temp[i] = data[i];//��������ĸ���
	}
	int j = 0;
	for (int i = n - 1; i >= 0; --i)
	{
		data[j] = temp[i];
		j++;
	}

	free(temp); // �ͷ���ʱ�����ڴ�
}

*/

