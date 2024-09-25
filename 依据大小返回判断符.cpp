//#include<iostream>
//using namespace std;
//
//
//
//
//
//
//int main()
//{
//	int n;
//	cin >> n;
//	//bool judge = 1;
//	int* p = (int*)malloc(sizeof(int) * n);//创建动态数组
//	int count1 = 0;
//	int count2 = 0;
//	int count3 = 0;
//	int count4 = 0;
//	int count5 = 0;
//	for (int i = 0; i < n; ++i)
//	{
//		p[i] = rand() % 200;//数组初始化
//		if (p[i] >= 0 && p[i] <= 20)
//		{
//			count1++;
//		}
//		else if (p[i] >= 21 && p[i] <= 50)
//		{
//			count2++;
//		}
//		else if (p[i] >= 51 && p[i] <= 80)
//		{
//			count3++;
//		}
//		else if (p[i] >= 81 && p[i] <= 130)
//		{
//			count4++;
//		}
//		else if (p[i] >= 131 && p[i] <= 200)
//		{
//			count5++;
//		}
//		//else
//		//{
//		//	judge = 0;
//		//}
//	}
//	//if (judge == 1)
//	//{
//		cout << count1 << " " << count2 << " " << count3 << " " << count4 << " " << count5 << endl;
//	//}
//	//else
//	//{
//	//	cout << "存在错误数据，请重新输入！" << endl;
//	//}
//	return 0;
//}