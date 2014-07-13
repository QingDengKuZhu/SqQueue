/*
**循环队列的数据结构
*/
#ifndef DATA_H
#define DATA_H

#define MAXQSIZE	100	//最大队列长度
typedef int Elem;

typedef struct SqQueue
{
	Elem *data;	/*基地址,初始化的动态分配存储空间.*/
	int front;	/*存储队列头元素下标.*/
	int rear;	/*若队列不为空,存储队尾元素的下一个位置的下标.*/
}SQQUEUE;

#endif