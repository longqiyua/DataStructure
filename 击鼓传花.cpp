/*4. �Ա�дһ�����Josephus����ĺ�������
��������1��2��3������n��ʾ˳��Χ����Բ����Χ���ˣ������������ʾ��Ϊ��������ʹ�õ���
�ݽṹ��Ȼ��ʹ��n = 9��s = 1��m = 5���Լ�n = 9��s = 1��m = 0������n = 9��s = 1��m = 10��Ϊ�������ݣ������ĳ������
ȷ�ԡ�mΪֹͣ����ֵ��sΪ��ʼ����ֵ��*/
//���Ĵ���
/*
#include<iostream>
using namespace std;
int main()
{
	int n = 0;//��ʼ��
	int s = 0;
	int m = 0;

	cout << "��������Ϸ����Ϊ��" << endl;
	cout << "�����뿪ʼ������ţ�" << endl;
	cout << "������Ŀ�������" << endl;


	cin >> n;
	cin >> s;
	cin >> m;





	int* data = (int*)malloc(sizeof(int) * n);//��̬����
	/*
	for (int i = s; i <= s + m; ++i)
	{
		if (i == m)
		{
			cout << "Boom!" << endl;

		}
	}
	*/


	//int note;
/*
	if (m == 0)
	{
		cout << "Ŀ��λ��Ϊ��" << " " << s;
	}
	else
	{
		while (1)
		{
			//m = 0;->�����Ӧ������ţ�1����
			if (m == 0)
			{
				cout << "Ŀ��λ��Ϊ��" << " " << s + m;
				break;//����ѭ��
			}
			m--;
		}
	}







	return 0;
}
*/