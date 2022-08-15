/*********************************************************************************************************************
 * -*-encoding: GB2312
 * 
 * @file       		main.c
 * @author     		���ܳ�ʵ����
 * @version    		v1.0
 * @Software 		MDK FOR C51 V9.60
 * @Target core		STC8A8K64S4
 * @date       		2020-9-21
 * @note			UART����ʹ��
					�򿪴������֣�ÿ0.1s���յ�һ��ʮ��������0x1E
 ********************************************************************************************************************/

#include "headfile.h"

void main()
{
	DisableGlobalIRQ();		// �ر����ж�
	board_init();			// ȫ�ֳ�ʼ��	
	//uart_init(DEBUG_UART,DEBUG_UART_BAUD,DEBUG_UART_RX_TX_PIN);
	//UART1����board_init �г�ʼ����������115200

	EnableGlobalIRQ();		// �������ж�
    while(1)
	{
		uart_putchar(DEBUG_UART,0x1E);	// ���ڷ�������
		pca_delay_ms(100);
    }
}











