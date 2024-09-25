/*
6. ��Դ�ͷ���ĵ������Ա�д���к�����
(1) ��λ����Locate���ڵ�������Ѱ�ҵ�i����㡣���ҵ����������ص�i�����ĵ�ַ�����Ҳ�������������NULL��
(2) �����ֵ����max��ͨ��һ�˱����ڵ�������ȷ��ֵ���Ľ�㡣
(3) ͳ�ƺ���number��ͳ�Ƶ������о��и���ֵx������Ԫ�ء�
(4) ��������create������һά����a[n]����һ��������ʹ�������и�Ԫ�صĴ�����a[n]�и�Ԫ�صĴ�����ͬ��
(5) ������tidyup���ڷǵݼ�����ĵ�������ɾ��ֵ��ͬ�Ķ����㡣
*/



#include<iostream>
#include<limits.h>//©s
using namespace std;

//�ڵ㶨�壺
template<class T>
class node
{
public:
	node()//���캯����Ϊ�����ĳ�ʼ������
	{
		data = 0;
		next = NULL;
	}
	~node(){}
//private:
	T data;
	node<T>* next;
};

//ȫ�ֶ���
static node<int>* head = new node<int>;//����ͷ�ڵ㣨����
static node<int>* rear = head;//βָ���ʼ��
//�ֲ���ָ̬���ֹԽ�����

//�����ʼ����
//template<typename T>
//node<T> init();

//�������
//ͷ��
template<typename T>
void headinsert(T data)
{
	node<T>* n = new node<int>;
	n->data = data;
	n->next = head;//����ָ��ָ��ԭͷָ��ָ��Ľڵ�
	head->next = n;//ͷָ��ָ�����Ľڵ�
}

//β��
template<typename T>
void rearinsert(T data)
{
	node<T>* n = new node<int>;
	n->data = data;
	n->next = rear;//����
	head->next = n;//����
}


template<typename T>
node<T>* locate(T i)
{
	node<T>* search = head;
	int count = 1;//��i����i��СΪ1���޵����
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
	//else//������������ֵ
	//{
	//	
	//}
}

template<typename T>
T number(T data)
{
	static int count = 0;//��̬������ִֹ����֮��ԭ����ֵ�����
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
T create(T* num)//��������ָ��num
{
	static int n = 2;
	for (int i = 0; i < n; ++i)
	{
		T* A = (T*)malloc(sizeof(T) * n);

		node<T>* n = new node<T>;//���ɽڵ�

		n->data = A[i];//��ֵ
		rear->next = n;
		n = rear;
	}
}



template<typename T>
T tidyup(T* head)
{
	T* search = head;
	T* search2 = search;//��searchǰ�������ͬԪ��
	search = search->next;//search2��search���һ���ڵ㣬
	//T* findnote = (T*)malloc(sizeof(T) * n);
	while (1)
	{
		while (search2->next != search && search != NULL)//searchָ�벻ΪnullҲ����search2ָ�벻Ϊnull.
		{//���ͣ�ÿ��searchǰ��һ���ڵ㣬��search2�ػ�ͷ�ڵ㣬֮����search2���¼�����search��ǰһ��λ�ã����ж��Ƿ�����ͬ�ڵ㣬����У�����dropout()���������û�У�ֱ����search��ǰ�ƶ�һλ������ΪNULLֱ�Ӳ�����ѭ����
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
T dropout(T *search2)//�ڵ�ɾ������
{
	T* p = head;
	T* q = p;
	p = p->next;
	while (p != search2)
	{
		p = p->next;
		q = q->next;
	}
	//�ҵ�������ѭ����ʼɾ����
	q->next = p->next;
	//��������ڵ�==ɾ������ڵ�
}



int main()
{
	//�˲��������룬ֻ��������ʼ������

	headinsert(2);
	//rearinsert(b);
	//������ɺ�����Ԫ�أ�0,1,2

	//��Ŀ��
	cout << locate(2) << endl;
	//cout << max() << endl;
	cout << number(1) << endl;
	return 0;
}