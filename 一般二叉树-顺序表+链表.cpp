/*
/*

#include<iostream>
using namespace std;



typedef struct node
{
	char data;
	struct node* left;
	struct node* right;
}*treelist;
//每一个节点就放在这里面咯



treelist inittreelist(char root)
{
	node* s = (node*)malloc(sizeof(node));
	s->data = root;
	s->left = s->right = NULL;
	return s;//如果是void函数不设置返回值，那么修改无效，要么事先声明传入目标链表，要么简化函数的参数列表像皮皮学长这样在函数体外面额外赋值一次
}
//treelist(treelist t,char root){}


static node* find(node* f, char fx)
{
	if (f == NULL || (f != NULL && f->data == fx))
	{
		return f;//ans指针都是被递归函数的结果赋值的，递归函数只有两种结果，一个是F,另一个是NULL,只有这两种可能。
		//也就是说，ans的值就是find()函数递归调用的最后的值，那就是f或者NULL.
	}
	else if (f->left != NULL)
	{
		node* ans = find(f->left, fx);
		return ans;
		//return find(f->left,fx)即可
	}
	else if (f->right != NULL)
	{
		node* ans = find(f->right, fx);
		return ans;
	}//如果不用else if语句就需要额外对ans进行判断，同理，递归和for循环一样，不要掉进逻辑无限循环的陷阱，和电脑一样会死机的，只需要知道起点，终点，操作基本模式和特殊例子就差不多了？
	else
	{
		return NULL;
	}
}


void insert(treelist t, char x, char fx)
{
	//目标是插入x节点，条件是作为fx的子节点，
	//第一步，找到fx节点在哪里
	node* f = find(f, fx);//需要找到目标位置的节点，也就是fx的节点位置，位置是用指针变量存储的
	//传入f节点是为了进行递归操作，表示我们的查找操作是在以f为根节点的树中进行的，这个看上面的👆find(treelist f,char fx)函数就明白了
	if (f == NULL)
	{
		cout << "目标节点不存在" << endl;
	}
	node* s = (node*)malloc(sizeof(node));//要插入的那个节点就是这里的S
	s->data = x;
	if (f->left == NULL)
	{
		s->left = s->right = f->left;//因为f->left是NULL，所以就直接用来给s->left以及s->right进行赋值
		f->left = s;
	}
	else
	{
		s->left = f->left;
		//f->left = s;//?这个是二叉链表，不是单链表那种一条直接过去的结构，不是这么放的，错误
		s->right = f->left->right;//why?如上，左边放儿子（而且是长子），右边放同辈的兄弟
	}
}

void findfather()
{}//非常难

void findson(treelist t, char fx)
{
	node* search = (node*)malloc(sizeof(node));
	search = find(t, fx);
	if (search != NULL)
	{
		search = search->left;//search指向长子
		while (search->right != NULL)
		{
			cout << search->right << " ";
			search = search->right;//找到长子然后在right方向上一直循环就能一锅端了。颇有一种消消乐的美。
		}
	}
	else
	{
		cout << fx << "不存在子节点" << endl;
	}
}


int main()
{
	int n;
	cin >> n;
	char root;
	//getchar();//其实也不用，因为cin不会读入空白字符，空格啊，制表符啊，换行符啊都不会读入进去
	cin >> root;
	treelist t = inittreelist(root);
	char x, fx;
	for (int i = 0; i <= n; ++i)//多次重复创建节点用循环操作
	{
		cin >> x >> fx;
		insert(t, x, fx);
	}
	findson(t, fx);

	return 0;
}


*/


