/*********************************************************************************************************************
 * -*-encoding: GB2312
 * 
 * @file       		main.c
 * @author     		���ܳ�ʵ����
 * @version    		v1.0
 * @Software 		MDK FOR C51 V9.60
 * @Target core		STC8A8K64S4
 * @date       		2020-9-21
 * @note			ADC�ɼ�
 * 					ʹ�����ߵ��ԣ��鿴adc_data�������ֵ�����Եõ�AD���ݡ�
 ********************************************************************************************************************/

#include "headfile.h"

uint16 adc_data[3];


void main()
{
	DisableGlobalIRQ();						// �ر����ж�
	board_init();							// ȫ�ֳ�ʼ��
	
	adc_init(ADC_P10, ADC_SYSclk_DIV_2);	// ��ʼ��ADC,P1.0ͨ�� ��ADCʱ��Ƶ�ʣ�SYSclk/2
	adc_init(ADC_P11, ADC_SYSclk_DIV_2);	// ��ʼ��ADC,P1.1ͨ�� ��ADCʱ��Ƶ�ʣ�SYSclk/2
	adc_init(ADC_P12, ADC_SYSclk_DIV_2);	// ��ʼ��ADC,P1.2ͨ�� ��ADCʱ��Ƶ�ʣ�SYSclk/2
	
	EnableGlobalIRQ();						// �������ж�
	
    while(1)
	{
		adc_data[0] = adc_once(ADC_P10, ADC_10BIT);		// �ɼ�һ��ADC������10λ
		adc_data[1] = adc_once(ADC_P11, ADC_9BIT);		// �ɼ�һ��ADC������9λ
		adc_data[2] = adc_once(ADC_P12, ADC_8BIT);		// �ɼ�һ��ADC������8λ
		pca_delay_ms(100);
    }
}











