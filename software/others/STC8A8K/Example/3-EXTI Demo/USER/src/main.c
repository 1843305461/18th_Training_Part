/*********************************************************************************************************************
 * -*-encoding: GB2312
 * 
 * @file       		main.c
 * @author     		���ܳ�ʵ����
 * @version    		v1.0
 * @Software 		MDK FOR C51 V9.60
 * @Target core		STC8A8K64S4
 * @date       		2020-9-21
 * @note			�ⲿ�жϿ���LED
					P32��GND��LED����
 ********************************************************************************************************************/

#include "headfile.h"

#define LED P52


void main()
{
	DisableGlobalIRQ();			// �ر����ж�
	board_init();				// ȫ�ֳ�ʼ��
	exit_init(INT0_P32, BOTH);	// �ⲿ�жϳ�ʼ�������ش���INT0_P32�ж�
	EnableGlobalIRQ();			// �������ж�
	
    while(1)
	{

    }
}












