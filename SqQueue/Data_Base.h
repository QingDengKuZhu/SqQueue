/**********************
**链式队列的基本操作.
***********************/
#ifndef DATA_BASE_H
#define DATA_BASE_H

#include "Main_First.h"
#include "Data.h"

/*
pQ为指向循环队列的指针,且pQ不为NULL.
*/

/*构造一个空的循环队列.*/
void InitQueue(SQQUEUE *pQ);

/*销毁循环队列.*/
void DestroyQueue(SQQUEUE *pQ);

/*将循环队列清空.*/
void ClearQueue(SQQUEUE *pQ);

/*判断循环队列是否为空.若为空,函数返回TRUE;否者函数返回FALSE.*/
BOOL QueueEmpty(const SQQUEUE *pQ);

/*判断循环队列是否为满.若为满,函数返回TRUE;否者函数返回FALSE.*/
BOOL QueueFull(const SQQUEUE *pQ);

/*返回循环对列的长度*/
size_t QueueLength(const SQQUEUE *pQ);

/*获取队头元素.若成功,函数返回OK,*e保存队头元素;否者返回FAILE,*e无定义.*/
STATUS GetHead(const SQQUEUE *pQ, Elem *e);

/*在队尾插入元素v.若成功插入,函数返回OK;否者,函数返回FAILE.*/
STATUS InsertQueue(SQQUEUE *pQ, const Elem v);

/*在队头删除元素,若成功删除,函数返回ok, *e保存删除值;否者函数返回FAIlE,*e无定义*/
STATUS DeleteQueue(SQQUEUE *pQ, Elem *e);

/*遍历输出循环对列.*/
void TraveQueue(const SQQUEUE *pQ);

#endif