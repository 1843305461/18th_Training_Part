/*********************************************************************************************************************
 * -*-encoding: GB2312
 * 
 * @file       		main.c
 * @author     		���ܳ�ʵ����
 * @version    		v1.0
 * @Software 		MDK FOR C51 V9.60
 * @Target core		STC8A8K64S4
 * @date       		2020-9-21
 * @note			��Ļ��ʹ��
 * 
 * 
 * 1.8��TFT��Ļ��	
	ģ��ܽ�            ��Ƭ���ܽ�
	SCL                 P25     Ӳ��SPI���Ų��������л�
	SDA                 P23     Ӳ��SPI���Ų��������л�
	RES                 P20    
	DC                  P21  
	CS                  P22     
						
	��Դ����
	BL  3.3V��Դ������������ţ�Ҳ���Խ�PWM���������ȣ�
	VCC 3.3V��Դ
	GND ��Դ��
	���ֱ���128*160 

 * 0.96��OLED��Ļ��
 	OLEDҺ��    ��Ƭ��                        
    D0          P25
    D1          P23            
    RES         P20    
    DC          P21
	CS          P22	
 ********************************************************************************************************************/

#include "headfile.h"

//#define USE_LCD		// ���ʹ��1.8��Һ������Ҫ���д���
#define USE_OLED	// ���ʹ��0.96��OLED����Ҫ���д���

void main()
{
	uint16 test_u16 = 255;

	DisableGlobalIRQ();		// �ر����ж�
	board_init();			// ȫ�ֳ�ʼ��

#ifdef USE_LCD							// ʹ��1.8��Һ����
	lcd_init();							// Һ����ʼ��
	lcd_showstr(0, 0, "SmartCar");		// ��ʾ�ַ���
	lcd_showuint8(0, 1, uint8(test_u8));		// ��ʾuint8��������
#endif

#ifdef USE_OLED							// ʹ��0.96OLED��Ļ
	oled_init();						// OLED��ʼ��
	oled_p6x8str(0, 0, "SmartCar");		// ��ʾ�ַ���
	oled_uint16(0, 1, test_u16);	// ��ʾuint16��������
#endif

	EnableGlobalIRQ();		// �������ж�
    while(1)
	{
		
    }
}












