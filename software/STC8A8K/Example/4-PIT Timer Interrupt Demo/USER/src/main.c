/*********************************************************************************************************************
 * -*-encoding: GB2312
 * 
 * @file       		main.c
 * @author     		���ܳ�ʵ����
 * @version    		v1.0
 * @Software 		MDK FOR C51 V9.60
 * @Target core		STC8A8K64S4
 * @date       		2020-9-21
 * @note			��ʱ�жϿ���LED
					LEDÿ��һ����˸һ��
 ********************************************************************************************************************/

#include "headfile.h"

void main()
{
	DisableGlobalIRQ();					// �ر����ж�
	board_init();						// ȫ�ֳ�ʼ��
	pca_init_interrupt_ms(PCA_0, 1);	// ʹ��PCA_0��Ϊ�����жϣ�ʱ��1msһ��
	EnableGlobalIRQ();					// �������ж�
	
    while(1)
	{

    }
}












