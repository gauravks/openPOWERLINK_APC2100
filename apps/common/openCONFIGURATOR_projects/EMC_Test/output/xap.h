/* This file was autogenerated by openCONFIGURATOR-1.4.0 on 19-Mar-2015 16:14:36 */
#ifndef XAP_h
#define XAP_h

# define COMPUTED_PI_OUT_SIZE 4
typedef struct 
{
	unsigned CN1_M00_DigitalInput_00h_AU8_DigitalInput01:8;
	unsigned CN1_M00_DigitalInput_00h_AU8_DigitalInput02:8;
	unsigned PADDING_VAR_1:16;
} PI_OUT;

# define COMPUTED_PI_IN_SIZE 4
typedef struct 
{
	unsigned CN1_M00_DigitalOutput_00h_AU8_DigitalOutput01:8;
	unsigned CN1_M00_DigitalOutput_00h_AU8_DigitalOutput02:8;
	unsigned PADDING_VAR_1:16;
} PI_IN;

#endif