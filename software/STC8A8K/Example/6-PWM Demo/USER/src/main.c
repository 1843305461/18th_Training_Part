/*********************************************************************************************************************
 * -*-encoding: GB2312
 * 
 * @file       		main.c
 * @author     		���ܳ�ʵ����
 * @version    		v1.0
 * @Software 		MDK FOR C51 V9.60
 * @Target core		STC8A8K64S4
 * @date       		2020-9-21
 * @note			PWM���
 * 					P25��P52��LED�𽥵�����Ϩ��
 ********************************************************************************************************************/

#include "headfile.h"

uint16 duty = 10000;

void main()
{
	DisableGlobalIRQ();					// �ر����ж�
	board_init();						// ȫ�ֳ�ʼ��
	
	pwm_init(PWM5_P25, 10000, duty);	// ��ʼ��PWM5  ʹ������P2.5  ���PWMƵ��10000HZ   ռ�ձ�Ϊ�ٷ�֮ pwm_duty/PWM_DUTY_MAX*100
	
	EnableGlobalIRQ();					// �������ж�
    while(1)
	{
		pwm_duty(PWM5_P25, duty);		// ����ռ�ձ�
		
		if(duty <= 0)		// ռ�ձ��޷�
		{
			duty = 10000;
		}
		duty -= 50;
		
		pca_delay_ms(10);
    }
}











