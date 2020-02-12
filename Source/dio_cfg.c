/*******************************************************************************
* Title                 :   Digital Input / Output (DIO) Configuration
* Filename              :   dio_cfg.c
* Author                :   Jacob W Beningo
* Origin Date           :   11/13/2012
* Version               :   1.0.0
* Compiler              :   TBD
* Target                :   TBD
* Copyright             :   Beningo Engineering
* All Rights Reserved
*
* THIS SOFTWARE IS PROVIDED BY BENINGO ENGINEERING "AS IS" AND ANY EXPRESSED
* OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
* OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
* IN NO EVENT SHALL BENINGO ENGINEERING OR ITS CONTRIBUTORS BE LIABLE FOR ANY
* DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
* (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
* SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
* HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
* STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
* IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
* THE POSSIBILITY OF SUCH DAMAGE.
*
*******************************************************************************/
/****************************************************************************
* Doxygen C Template
* Copyright (c) 2013 - Jacob Beningo - All Rights Reserved
*
* Feel free to use this Doxygen Code Template at your own risk for your own
* purposes.  The latest license and updates for this Doxygen C template can be  
* found at www.beningo.com or by contacting Jacob at jacob@beningo.com.
*
* For updates, free software, training and to stay up to date on the latest 
* embedded software techniques sign-up for Jacobs newsletter at 
* http://www.beningo.com/814-2/
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Template. 
*
*****************************************************************************/
/*************** MODULE REVISION LOG ******************************************
*
*    Date    Version   Author         Description 
*  09/01/15   1.0.0   Jacob Beningo   Interface Created.
*
*******************************************************************************/
/** @file dio_cfg.c
 *  @brief This module contains the implementation for the digital input/output
 *         peripheral configuration
 */
/******************************************************************************
* Includes
*******************************************************************************/
#include "dio_cfg.h"					/* For this modules definitions */

/******************************************************************************
* Module Preprocessor Constants
*******************************************************************************/

/******************************************************************************
* Module Preprocessor Macros
*******************************************************************************/

/******************************************************************************
* Module Typedefs
*******************************************************************************/

/******************************************************************************
* Module Variable Definitions
*******************************************************************************/
/**
 * The following array contains the configuration data for each digital input /
 * output peripheral channel (pin).  Each row represents a single pin.  Each 
 * column is representing a member of the DioConfig_t structure.  This table 
 * is read in by Dio_Init where each channel is then setup based on this table.
 */
const DioConfig_t DioConfig[] =
{
/*              Resistor	 	   		      Initial                                     */
/* Channel   	  Enabled	                Direction   	   Pin    	      Function    */
/*                                                                                  */
  { PA0,        DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PA1,        DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PA2,        DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO  	},
  { PA3,        DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,      FCN_GPIO    },
  { PA4,        DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PA5,        DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PA6,        DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PA7,        DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PA8,        DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PA9,        DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PA10,       DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO  	},
  { PA11,       DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,      FCN_GPIO    },
  { PA12,       DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PA13,       DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PA14,       DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PA15,       DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PB0,        DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PB1,        DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PB2,        DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO  	},
  { PB3,        DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,      FCN_GPIO    },
  { PB4,        DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PB5,        DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PB6,        DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PB7,        DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PB8,        DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PB9,        DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PB10,       DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO  	},
  { PB11,       DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,      FCN_GPIO    },
  { PB12,       DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PB13,       DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PB14,       DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PB15,       DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PC0,        DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PC1,        DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PC2,        DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO  	},
  { PC3,        DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,      FCN_GPIO    },
  { PC4,        DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PC5,        DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PC6,        DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PC7,        DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PC8,        DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PC9,        DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PC10,       DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO  	},
  { PC11,       DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,      FCN_GPIO    },
  { PC12,       DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PC13,       DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PC14,       DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PC15,       DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PD0,        DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PD1,        DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PD2,        DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO  	},
  { PD3,        DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,      FCN_GPIO    },
  { PD4,        DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PD5,        DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PD6,        DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PD7,        DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PD8,        DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PD9,        DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PD10,       DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO  	},
  { PD11,       DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,      FCN_GPIO    },
  { PD12,       DIO_PULLUP_DISABLED,	  DIO_OUTPUT,      DIO_HIGH,    	FCN_GPIO    },
  { PD13,       DIO_PULLUP_DISABLED,	  DIO_OUTPUT,      DIO_HIGH,    	FCN_GPIO    },
  { PD14,       DIO_PULLUP_DISABLED,	  DIO_OUTPUT,      DIO_LOW,     	FCN_GPIO    },
  { PD15,       DIO_PULLUP_DISABLED,	  DIO_OUTPUT,      DIO_LOW,     	FCN_GPIO    },
  { PE0,        DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PE1,        DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PE2,        DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO  	},
  { PE3,        DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,      FCN_GPIO    },
  { PE4,        DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PE5,        DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PE6,        DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PE7,        DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PE8,        DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PE9,        DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PE10,       DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO  	},
  { PE11,       DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,      FCN_GPIO    },
  { PE12,       DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PE13,       DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PE14,       DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    },
  { PE15,       DIO_PULLUP_DISABLED,	  DIO_INPUT,       DIO_HIGH,    	FCN_GPIO    }
};

/******************************************************************************
* Function Prototypes
*******************************************************************************/

/******************************************************************************
* Function Definitions
*******************************************************************************/
/******************************************************************************
* Function : Dio_Init()
*//** 
* \b Description:
*
* This function is used to initialize the Dio based on the configuration table
*  defined in dio_cfg module.  
*
* PRE-CONDITION: Configuration table needs to populated (sizeof > 0)
*
* POST-CONDITION: A constant pointer to the first member of the configuration
* table will be returned.
*
* @return 		A pointer to the configuration table.
*
* \b Example Example:
* @code
* 	const Dio_ConfigType *DioConfig = Dio_GetConfig();
*
* 	Dio_Init(DioConfig);
* @endcode
*
* @see Dio_Init
* @see Dio_ChannelRead
* @see Dio_ChannelWrite
* @see Dio_ChannelToggle
* @see Dio_ChannelModeSet
* @see Dio_RegisterWrite
* @see Dio_RegisterRead
*
* <br><b> - HISTORY OF CHANGES - </b>
*  
* <table align="left" style="width:800px">
* <tr><td> Date       </td><td> Software Version </td><td> Initials </td><td> Description </td></tr>
* <tr><td> 09/01/2015 </td><td> 1.0.0            </td><td> JWB      </td><td> Interface Created </td></tr>
* </table><br><br>
* <hr>
*
*******************************************************************************/
const DioConfig_t * Dio_ConfigGet(void)
{
	/* 
	 * The cast is performed to ensure that the address of the first element of
	 * configuration table is returned as a constant pointer and NOT a pointer 
	 * that can be modified.  
	 */
	return DioConfig;
}

/*************** END OF FUNCTIONS ***************************************************************************/
