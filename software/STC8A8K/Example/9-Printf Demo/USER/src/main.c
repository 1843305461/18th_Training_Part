/*********************************************************************************************************************
 * -*-encoding: GB2312
 * 
 * @file       		main.c
 * @author     		���ܳ�ʵ����
 * @version    		v1.0
 * @Software 		MDK FOR C51 V9.60
 * @Target core		STC8A8K64S4
 * @date       		2020-9-21
 * @note			���ڵ�printf����
					�򿪴������֣������ı� �θ��޵�
 ********************************************************************************************************************/

#include "headfile.h"


void main()
{
	DisableGlobalIRQ();		// �ر����ж�
	board_init();			// ȫ�ֳ�ʼ��
	//uart_init(DEBUG_UART,DEBUG_UART_RX_PIN,DEBUG_UART_TX_PIN,DEBUG_UART_BAUD);
	//UART1����board_init �г�ʼ����������115200

	EnableGlobalIRQ();		// �������ж�
    while(1)
	{
		printf("�θ��޵�\r\n");
    }
}











