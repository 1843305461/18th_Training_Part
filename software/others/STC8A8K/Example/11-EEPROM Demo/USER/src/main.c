/*********************************************************************************************************************
 * COPYRIGHT NOTICE
 * Copyright (c) 2020,��ɿƼ�
 * All rights reserved.
 * ��������QQȺ��һȺ��179029047(����)  ��Ⱥ��244861897(����)  ��Ⱥ��824575535
 *
 * �����������ݰ�Ȩ������ɿƼ����У�δ��������������ҵ��;��
 * ��ӭ��λʹ�ò������������޸�����ʱ���뱣����ɿƼ��İ�Ȩ������
 *
 * @file       		main
 * @company	   		�ɶ���ɿƼ����޹�˾
 * @author     		��ɿƼ�(QQ790875685)
 * @version    		�鿴doc��version�ļ� �汾˵��
 * @Software 		MDK FOR C51 V9.60
 * @Target core		STC8A8K64S4
 * @Taobao   		https://seekfree.taobao.com/
 * @date       		2020-4-14
 ********************************************************************************************************************/

#include "headfile.h"


//board.h�ļ���FOSC��ֵ����Ϊ0,������Զ�ʶ��ϵͳƵ��

/*board.h�ļ���FOSC��ֵ���ò�Ϊ0����ϵͳƵ��ΪFOSC��ֵ��
��ʹ��stc-isp�������س����ʱ����Ҫ��IRCƵ������ΪFOSC��ֵ*/


uint8 str[] = "SEEKFREK";
uint8 read_str[8];

uint8 num = 0;
uint8 read_num = 0;

void main()
{
	DisableGlobalIRQ();	//�ر����ж�
	board_init();		//��ʼ���ڲ��Ĵ���
	
	iap_init();			//��ʼ��EEPROM
	
	//��"SEEKFREE"����ַ�����EEPROM�У���ַ(0x00-0x07)����8���ַ�
	//�ú�������ʵ�֣�����ͬһ����ַ���ж��д�룬����������д��
	extern_iap_write_bytes(0x00, str, 8);
	
	//��EEPROM�е����ݶ�ȡ��read_str�ַ����У���ַ(0x00-0x07)����8���ַ�
	iap_read_bytes(0x00, read_str, 8);
	
	EnableGlobalIRQ();	//�������ж�
	
	//���͸ղŶ�ȡ���ַ���
	uart_putstr(UART_1, read_str, 8);
	
	
    while(1)
	{
		num++;
		
		//����ͬһ����ַ���ж��д�룬�Ȳ�����д��
		//EEPROM����Ŀ���ַ���ڵ�һҳ��1����/512�ֽڣ�
		iap_erase_page(0x0A);
		//��0x0A��д��1���ֽ�
		iap_write_bytes(0x0A, (uint8 *)&num, 1);
		//��ȡ0x0A�е����ݵ�read_num
		iap_read_bytes(0x0A, &read_num, 1);
		//�������ݵ���������
		uart_putchar(UART_1, read_num);
		
		pca_delay_ms(1000);
    }
}
