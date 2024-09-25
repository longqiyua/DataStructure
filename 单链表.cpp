/*
6. 针对带头结点的单链表，试编写下列函数。
(1) 定位函数Locate：在单链表中寻找第i个结点。若找到，则函数返回第i个结点的地址；若找不到，则函数返回NULL。
(2) 求最大值函数max：通过一趟遍历在单链表中确定值最大的结点。
(3) 统计函数number：统计单链表中具有给定值x的所有元素。
(4) 建立函数create：根据一维数组a[n]建立一个单链表，使单链表中各元素的次序与a[n]中各元素的次序相同。
(5) 整理函数tidyup：在非递减有序的单链表中删除值相同的多余结点。
*/



#include<iostream>
#include<limits.h>//漏s
using namespace std;

//节点定义：
template<class T>
class node
{
public:
	node()//构造函数作为这个类的初始化函数
	{
		data = 0;
		next = NULL;
	}
	~node(){}
//private:
	T data;
	node<T>* next;
};

//全局对象：
static node<int>* head = new node<int>;//创建头节点（对象）
static node<int>* rear = head;//尾指针初始化
//局部静态指针防止越界访问

//链表初始化：
//template<typename T>
//node<T> init();

//链表插入
//头插
template<typename T>
void headinsert(T data)
{
	node<T>* n = new node<int>;
	n->data = data;
	n->next = head;//插入指针指向原头指针指向的节点
	head->next = n;//头指针指向插入的节点
}

//尾插
template<typename T>
void rearinsert(T data)
{
	node<T>* n = new node<int>;
	n->data = data;
	n->next = rear;//传递
	head->next = n;//连接
}


template<typename T>
node<T>* locate(T i)
{
	node<T>* search = head;
	int count = 1;//第i个的i最小为1）无第零个
	while(1)
	{
		if (search != NULL)
		{
			if (count == i)
			{
				return search;
			}
			else
			{
				search = search->next;
				i++;
			}
		}
		else
		{
			return NULL;
		}
	}
}

template<typename T>
T max()
{
	T* search = head;
	T max = search->data;
	while (search != NULL)
	{
		if (search->data > max)
		{
			max = search->data;
		}
		search = search->next;
	}
	return max;
	//else//该链表必有最大值
	//{
	//	
	//}
}

template<typename T>
T number(T data)
{
	static int count = 0;//静态变量防止执行完之后原变量值被清除
	node<T>* search = head;
	while (search != NULL)
	{
		if (search->data = data)
		{
			count++;
		}
		else
		{
			search = search->next;
		}
	}
	return count;
}






template<typename T>
T create(T* num)//传入数组指针num
{
	static int n = 2;
	for (int i = 0; i < n; ++i)
	{
		T* A = (T*)malloc(sizeof(T) * n);

		node<T>* n = new node<T>;//生成节点

		n->data = A[i];//赋值
		rear->next = n;
		n = rear;
	}
}



template<typename T>
T tidyup(T* head)
{
	T* search = head;
	T* search2 = search;//在search前面查找相同元素
	search = search->next;//search2比search落后一个节点，
	//T* findnote = (T*)malloc(sizeof(T) * n);
	while (1)
	{
		while (search2->next != search && search != NULL)//search指针不为null也代表search2指针不为null.
		{//解释：每当search前移一个节点，让search2重回头节点，之后让search2重新检索至search的前一个位置，来判断是否有相同节点，如果有，调用dropout()函数，如果没有，直接让search向前移动一位。（若为NULL直接不进入循环）
			T* search = head;//
			if (search2->data == search->data)
			{
				dropout(search2);
				break;
			}
			break;
		}
		search = search->next;
	}
}


template<typename T>
T dropout(T *search2)//节点删除函数
{
	T* p = head;
	T* q = p;
	p = p->next;
	while (p != search2)
	{
		p = p->next;
		q = q->next;
	}
	//找到了跳出循环开始删除。
	q->next = p->next;
	//忽略这个节点==删除这个节点
}



int main()
{
	//此部分无输入，只是用来初始化链表

	headinsert(2);
	//rearinsert(b);
	//插入完成后共三个元素，0,1,2

	//题目：
	cout << locate(2) << endl;
	//cout << max() << endl;
	cout << number(1) << endl;
	return 0;
}