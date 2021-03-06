/********************************************************************/
 /******************************************************************/
 /* 		Title : DIO Peripheral Interface File                  */
 /*		Author: Ahmed Mohamed Fathy (Ahmed Omda)				   */	
 /* 		Last Update: 16 Aug 2021						       */
 /******************************************************************/
/********************************************************************/

#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_

/*********************************************************************/
/*************************Public Defination***************************/
/*********************************************************************/

/*set pin*/
#define DIO_u8Pin0      0
#define DIO_u8Pin1      1
#define DIO_u8Pin2      2
#define DIO_u8Pin3      3 
#define DIO_u8Pin4      4
#define DIO_u8Pin5      5
#define DIO_u8Pin6      6
#define DIO_u8Pin7      7
#define DIO_u8Pin8      8
#define DIO_u8Pin9      9
#define DIO_u8Pin10     10
#define DIO_u8Pin11     11
#define DIO_u8Pin12     12
#define DIO_u8Pin13     13
#define DIO_u8Pin14     14
#define DIO_u8Pin15     15
#define DIO_u8Pin16     16
#define DIO_u8Pin17     17 
#define DIO_u8Pin18     18
#define DIO_u8Pin19     19
#define DIO_u8Pin20     20
#define DIO_u8Pin21     21
#define DIO_u8Pin22     22
#define DIO_u8Pin23     23
#define DIO_u8Pin24     24
#define DIO_u8Pin25     25
#define DIO_u8Pin26     26
#define DIO_u8Pin27     27
#define DIO_u8Pin28     28
#define DIO_u8Pin29     29
#define DIO_u8Pin30     30
#define DIO_u8Pin31     31

/*Port Index Value*/
#define DIO_u8Port0     0
#define DIO_u8Port1     1
#define DIO_u8Port2     2
#define DIO_u8Port3     3

/*Digital I/O Values*/
#define DIO_u8HIGH      1
#define DIO_u8LOW       0

/*Digital I/O Port Direction */
#define DIO_u8INPUT_Port		0
#define DIO_u8OUTPUT_Port		0xff

/*Digital I/O Direction*/
/*
#define DIO_u8INPUT     0
#define DIO_u8OUTPUT    1
*/

/*Useful Defination*/
/*
#define DIO_u8NumberOfPort		4
#define DIO_u8NumberOfPin		8
#define DIO_u8NumberAllPins		32
*/


/*********************************************************************/
/*************************Public Functions****************************/
/*********************************************************************/
void DIO_void_Init(void);

void DIO_void_SetPinValue(u8 Copy_u8_PinNo, u8 Copy_u8_PinValue);

//u8 DIO_u8_GetPinValue(u8 Copy_u8_PinNo);




#endif  //DIO_INTERFACE_H_
