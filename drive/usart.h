#ifndef __USART_H
#define __USART_H
#include "stdio.h"	
#include "stm32f4xx.h"

#define USART_REC_LEN  			200  	//定义最大接收字节数 200
#define EN_USART1_RX 			1		//使能（1）/禁止（0）串口1接收
	  	
#define  CmdNumb         18
#define  CmdLen          9 

#define ChrStartR      0x3C
#define ChrStartS      0x3E

#define ChrEndR    	   0x0D
#define ChrEndS    	   0x0A

#define PARA_ERR       1
#define CMD_ERR        2
#define REM_ERR        3


extern u8  USART_RX_BUF[USART_REC_LEN]; //接收缓冲,最大USART_REC_LEN个字节.末字节为换行符 
extern u16 USART_RX_STA;         		//接收状态标记	
extern u16 USART_RX_CNT;
u16 SerialRemoteHandleL(u8 len,char* buf);


#endif