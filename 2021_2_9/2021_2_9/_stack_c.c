#define _CRT_SECURE_NO_WARNINGS
#include"_stack_h.h"

//�����������ADT�У�malloc��free�ϵ�ʱ�俪���ϴ���Ϊ��Ҫ�����ڴ�������õķ����ǿ����õڶ���ջ��ΪfreeStack��������free�ĵ�Ԫ��Ȼ�������һ���������Զ����ڴ����ĺ���
//���ǿ���д��Stack freeStack=CreateStack();����ʹ�ó�ʼ����ȷ��freestack�Ŀռ��С,���£�
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

//���ｫջ����ǰ�ջ������ݶ��ͷ�������յģ����ֱ����S->next=NULL,��ôջ����ڴ沢û���ͷţ���һֱռ���ſռ�
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

//�����������ʵ�����ǲ��׵ģ���ʹ��ʹ�÷���Ҫ��סջ��ָ��ʵ�ֵģ���Ϊ����ֵ��Ҫͨ��->�ſ��Կ����ڲ�
//����������˵���Ż�Ӧ�÷���ջ���д洢�����ݣ������ڲ�֪��η����������ݣ���ֻ�ܷ���ָ��
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