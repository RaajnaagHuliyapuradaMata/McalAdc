#pragma once
/******************************************************************************/
/* File   : infMcalAdc_ServiceDet.hpp                                                    */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_McalAdc.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef enum{
      MCALADC_E_BUSY
   ,  MCALADC_E_IDLE
   ,  MCALADC_E_PARAM_GROUP
   ,  MCALADC_E_PARAM_POINTER
   ,  MCALADC_E_NOT_DISENGAGED
   ,  MCALADC_E_NOT_PSERVICEOSSIBLE_TRANSITION
   ,  MCALADC_E_NOT_PREPARED_PERIPHERAL
   ,  MCALADC_E_NOT_SUPMCALPORTED_STATE_POWER
   ,  MCALADC_E_NOTIF_CAPABILITY
   ,  MCALADC_E_UNINIT
   ,  MCALADC_E_UNINIT_BUFFER
   ,  MCALADC_E_WRONG_SRC_TRIGG
   ,  MCALADC_E_WRONG_MODE_CONV
}McalAdc_TypeServiceDetErrorCode;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

