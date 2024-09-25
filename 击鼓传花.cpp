/*4. 试编写一个求解Josephus问题的函数。用
整数序列1，2，3，…，n表示顺序围坐在圆桌周围的人，并采用数组表示作为求解过程中使用的数
据结构。然后使用n = 9，s = 1，m = 5，以及n = 9，s = 1，m = 0，或者n = 9，s = 1，m = 10作为输入数据，检查你的程序的正
确性。m为停止报数值，s为开始报数值。*/
//击鼓传花
/*
#include<iostream>
using namespace std;
int main()
{
	int n = 0;//初始化
	int s = 0;
	int m = 0;

	cout << "请输入游戏人数为？" << endl;
	cout << "请输入开始人数序号？" << endl;
	cout << "请输入目标次数？" << endl;


	cin >> n;
	cin >> s;
	cin >> m;





	int* data = (int*)malloc(sizeof(int) * n);//动态数组
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
		cout << "目标位置为：" << " " << s;
	}
	else
	{
		while (1)
		{
			//m = 0;->输出对应人数序号（1基）
			if (m == 0)
			{
				cout << "目标位置为：" << " " << s + m;
				break;//跳出循环
			}
			m--;
		}
	}







	return 0;
}
*/