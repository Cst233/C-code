#define _CRT_SECURE_NO_WARNINGS
#include"_stack_h.h"

//点评：在这个ADT中，malloc与free上的时间开销较大，因为需要调用内存管理，更好的方法是考虑用第二个栈作为freeStack，来管理free的单元，然后和数组一样，单独自定义内存管理的函数
//于是可以写成Stack freeStack=CreateStack();建议使用初始化来确定freestack的空间大小,如下：
//Stack freeStack = CreateStack();
//void init(int sz)
//{
//	int count = sz;
//	while (count--)
//	{
//		Push(freeStack, NULL, 0);
//	}
//}

int IsEmpty(Stack S)
{
	return S->next == NULL;
}

Stack CreateStack()
{
	Stack S = (Stack)malloc(sizeof(struct Node));
	S->next = NULL;
	return S;
}

void DisposeStack(Stack S)
{
	MakeEmpty(S);
	free(S);
}

//这里将栈清空是把栈里的内容都释放了再清空的，如果直接让S->next=NULL,那么栈里的内存并没有释放，会一直占用着空间
void MakeEmpty(Stack S)
{
	if (S != NULL)
	{
		while (!IsEmpty(S))
			Pop(S);
	}
}

void Push(Stack S, char ch)
{
	PtrToNode P = (PtrToNode)malloc(sizeof(struct Node));
	if (P != NULL)
	{
		P->ch = ch;
		P->next = S->next;
		S->next = P;
	}
}

//返回这个类型实际上是不妥的，这使得使用方需要记住栈是指针实现的，因为返回值需要通过->才可以看到内部
//按照正常来说，放回应该返回栈顶中存储的数据，但由于不知如何返回两个数据，故只能返回指针
PtrToNode Top(Stack S)
{
	return S->next;
}

void Pop(Stack S)
{
	if (!IsEmpty(S))
	{
		PtrToNode tmp = S->next;
		S->next = tmp->next;
		free(tmp);
	}
}