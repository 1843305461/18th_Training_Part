/*********************************************************************************************************************
 * -*-encoding: GB2312
 * 
 * @file       		main.c
 * @author     		���ܳ�ʵ����
 * @version    		v1.0
 * @Software 		MDK FOR C51 V9.60
 * @Target core		STC8A8K64S4
 * @date       		2020-9-21
 * @note			�ⲿ����
 * 					ʹ�����ߵ��ԣ��鿴dat����ֵ�����Եõ��ⲿ��������
					���������ظ��ˣ�������
 ********************************************************************************************************************/

#include "headfile.h"

int16 dat = 0;

void main()
{
	DisableGlobalIRQ();	//�ر����ж�
	board_init();	
	ctimer_count_init(CTIM0_P34);
	EnableGlobalIRQ();	//�������ж�
    while(1)
	{
		//ʹ�����ߵ��ԣ��鿴dat����ֵ�����Եõ��ⲿ��������
		dat = ctimer_count_read(CTIM0_P34);
		ctimer_count_clean(CTIM0_P34);
		pca_delay_ms(100);
    }
}











