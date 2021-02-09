#ifndef _stack_h

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define _stack_h
struct Node;
typedef struct Node* PtrToNode; 
typedef PtrToNode Stack;

//一些基本操作（创栈，检查是否为空，将栈清空，销毁栈）

Stack CreateStack();
int IsEmpty(Stack S);
void MakeEmpty(Stack S);//将栈变成空栈
void DisposeStack(Stack S);//把这个栈销毁

//一些动作（出栈，进栈，查看栈顶）

PtrToNode Top(Stack S);
void Push(Stack S, char ch);
void Pop(Stack S);


struct Node{
	char ch;
	PtrToNode next;
};

#endif

