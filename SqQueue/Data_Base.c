﻿#include "Data.h"
#include "Main_First.h"
#include "Data_Base.h"


/*
**初始化建立空对列时,令front = rear = 0.
**每当插入新的队尾元素时,"尾指针增加1",
**每当删除队头元素时,"头指针增加1",
**因此,在非空队列中,头指针始终指向队列头元素,
**而尾指针始终指向对列尾元素的下一个位置.
*/
void InitQueue(SQQUEUE *pQ)
{
	pQ->data = (Elem *)malloc(MAXQSIZE * sizeof(Elem));
	if (!pQ->data)
	{
		printf("动态分配内存错误!\n");
		exit(ERROR);
	}
	pQ->front = pQ->rear = 0;

	return;
}

void DestroyQueue(SQQUEUE *pQ)
{
	pQ->front = pQ->rear = 0;
	free(pQ->data);

	return;
}

BOOL QueueEmpty(const SQQUEUE *pQ)
{
	if (pQ->front == pQ->rear)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

/*
**约定以"对头指针在队尾指针的下一位置(指环状的下一位置)上",作为队列呈"满"状态的标志.
*/
BOOL QueueFull(const SQQUEUE *pQ)
{
	if (1 == (pQ->rear - pQ->front))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

STATUS GetHead(const SQQUEUE *pQ, Elem *e)
{
	if (TRUE == QueueEmpty(pQ))
	{
		return FAILE;
	}
	else
	{
		*e = pQ->data[pQ->front];
		
		return OK;
	}
}