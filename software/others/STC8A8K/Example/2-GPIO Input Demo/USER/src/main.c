/*********************************************************************************************************************
 * -*-encoding: GB2312
 * 
 * @file       		main.c
 * @author     		���ܳ�ʵ����
 * @version    		v1.0
 * @Software 		MDK FOR C51 V9.60
 * @Target core		STC8A8K64S4
 * @date       		2020-9-21
 * @note			ͨ��IO�������LED����
 * 					��P04����GND,���Կ���LED ���
 ********************************************************************************************************************/

#include "headfile.h"

#define LED P52


void main()
{
	DisableGlobalIRQ();		// �ر����ж�
	board_init();			// ȫ�ֳ�ʼ��
	EnableGlobalIRQ();		// �������ж�
	
    while(1)
	{
		if(P04 == 1)		// P04����ߵ�ƽ	
			LED = 0;
		else
			LED = 1;
    }
}












