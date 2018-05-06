#include "enums.h"

#define DB(value)\
	{size_t temp = value;\
	memcpy (this -> output_current, &temp, 1);\
	this -> output_current += 1;}

#define DW(value)\
	{size_t temp = value;\
	memcpy (this -> output_current, &temp, 2);\
	this -> output_current += 2;}

#define DD(value)\
	{size_t temp = value;\
	memcpy (this -> output_current, &temp, 4);\
	this -> output_current += 4;}

#define DQ(value)\
	{size_t temp = value;\
	memcpy (this -> output_current, &temp, 8);\
	this -> output_current += 8;}

#define GETINT this -> get_int ()

TRAN_CMD(END, { DW (0x8148) DB (0xc5) DD (0x400)    
		 DB (0xb8)   DD (0x3c) DW (0x3148) DB (0xff) DW (0x050f) })
