/*********************************************************************************************************************
 * -*-encoding: GB2312
 * 
 * @file       		main.c
 * @author     		���ܳ�ʵ����
 * @version    		v1.0
 * @Software 		MDK FOR C51 V9.60
 * @Target core		STC8A8K64S4
 * @date       		2020-9-21
 * @note			���ᴫ������ʹ��
 * 					������ʹ�����ģ��IICЭ���ȡ����������
 * 					ICM20602��֧�������Ӳ��SPIͨ��Э�飬�������г��ԣ�����鿴 SEEKFREE_ICM20602.c �ļ�
 * 
 * 
 * ���������IIC���ߣ�
 * 		SCL			P25
 * 		SDA			P23
 
 //������Ļ�ܽŵ�P2.5��P2.3ʹ�õ�Ӳ��SPI�����P2.5��P2.3���ű���ʼ��ΪӲ��spi��
//��P2.3 �� P2.5���Ų�����Ϊ��ͨIO��ʹ�ã�����MPU6050��ģ��IICͨ�Ų�����P2.3��P2.5����
//����ʹ��P1.1��P1.0��ΪMPU6050��SDA��SCL����ʹ�á�
 ********************************************************************************************************************/

#include "headfile.h"

//#define USE_MPU		// ʹ��MPU6050������
#define USE_ICM	// ʹ��ICM20602������

extern int16 mpu_gyro_x,mpu_gyro_y,mpu_gyro_z;	// MPU��������������
extern int16 mpu_acc_x,mpu_acc_y,mpu_acc_z;		// MPU������ٶ�����
extern int16 icm_gyro_x,icm_gyro_y,icm_gyro_z;	// ICM��������������
extern int16 icm_acc_x,icm_acc_y,icm_acc_z;		// ICM������ٶ�����

void main()
{
	DisableGlobalIRQ();		// �ر����ж�
	board_init();			// ȫ�ֳ�ʼ��
	simiic_init();			// ģ��IIC��ʼ��

#ifdef USE_MPU				// ʹ��MPU
	mpu6050_init();			// MPU��ʼ��
#endif

#ifdef USE_ICM				// ʹ��ICM
	icm20602_init_simiic();	// ICM��ʼ��
#endif
	//lcd_init();				// ��Ļ��ʼ��

	EnableGlobalIRQ();		// �������ж�
    while(1)
	{
	#ifdef USE_MPU
		mpu6050_get_accdata();				// ��ȡ���ٶ�����
		mpu6050_get_gyro();					// ��ȡ����������
		/*
		lcd_showint16(0, 0, mpu_gyro_x);	// ��Ļ��ʾ
		lcd_showint16(0, 1, mpu_gyro_y);
		lcd_showint16(0, 2, mpu_gyro_z);
		lcd_showint16(0, 3, mpu_acc_x);
		lcd_showint16(0, 4, mpu_acc_y);
		lcd_showint16(0, 5, mpu_acc_z);
		*/
	#endif

	#ifdef USE_ICM
		get_icm20602_accdata_simiic();		// ��ȡ���ٶ�����
		get_icm20602_gyro_simiic();			// ��ȡ����������
		/*
		lcd_showint16(0, 0, icm_gyro_x);	// ��Ļ��ʾ
		lcd_showint16(0, 1, icm_gyro_y);
		lcd_showint16(0, 2, icm_gyro_z);
		lcd_showint16(0, 3, icm_acc_x);
		lcd_showint16(0, 4, icm_acc_y);
		lcd_showint16(0, 5, icm_acc_z);		
		*/
	#endif

	pca_delay_ms(500);
    }
}












