#ifndef _stack_h

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define _stack_h
struct Node;
typedef struct Node* PtrToNode; 
typedef PtrToNode Stack;

//һЩ������������ջ������Ƿ�Ϊ�գ���ջ��գ�����ջ��

Stack CreateStack();
int IsEmpty(Stack S);
void MakeEmpty(Stack S);//��ջ��ɿ�ջ
void DisposeStack(Stack S);//�����ջ����

//һЩ��������ջ����ջ���鿴ջ����

PtrToNode Top(Stack S);
void Push(Stack S, char ch);
void Pop(Stack S);


struct Node{
	char ch;
	PtrToNode next;
};

#endif

