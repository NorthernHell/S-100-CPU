/**************************************************************************
File:               pack_evro_int.h
Author:             umputun
Creation date:      21/07/2012 - 20:05
POU name:           
***************************************************************************/

#ifndef _PACK_EVRO_INT_H /* nested Headers management */
#define _PACK_EVRO_INT_H

/* include item definition */

#include "dios0def.h"
#include "evro_int_evro_int_evro_8di_.h" /* "evro_8di_ */
#include "evro_int_evro_int_evro_avar_info.h" /* "evro_avar_info */
#include "evro_int_evro_int_status_m.h" /* "status_m */
#include "evro_int_evro_int_evro_6ai_.h" /* "evro_6ai_ */
#include "evro_int_evro_int_evro_8dir.h" /* "evro_8dir */
#include "evro_int_evro_int_evro_16do_.h" /* "evro_16do_ */
#include "evro_int_evro_int_evro_8ro_.h" /* "evro_8ro_ */
#include "evro_int_evro_int_evro_4ao.h" /* "evro_4ao */
#include "evro_int_evro_int_evro_6ai.h" /* "evro_6ai */
#include "evro_int_evro_int_evro_4ao_.h" /* "evro_4ao_ */
#include "evro_int_evro_int_evro_16do.h" /* "evro_16do */
#include "evro_int_evro_int_evro_8ro.h" /* "evro_8ro */
#include "evro_int_evro_int_evro_8di.h" /* "evro_8di */
#include "evro_int_evro_int_evro_16di_.h" /* "evro_16di_ */
#include "evro_int_evro_int_evro_16di.h" /* "evro_16di */
#include "evro_int_evro_int_evro_16dir.h" /* "evro_16dir */

/* package definition */

#define ISA_DECLARE_PACK_EVRO_INT \
ISA_DECLARE_PACKNAME("pack_evro_int") \
ISA_DECLARE_HANDLE("evro_int_evro_int_IosInit", evro_int_evro_int_IosInit) \
ISA_DECLARE_HANDLE("evro_int_evro_int_IosExit", evro_int_evro_int_IosExit) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_8di_IosOpen", evro_int_evro_int_evro_8di_IosOpen) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_8di_IosClose", evro_int_evro_int_evro_8di_IosClose) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_8di_evro_8diIosRead", evro_int_evro_int_evro_8di_evro_8diIosRead) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_8di_evro_8diIosCtl", evro_int_evro_int_evro_8di_evro_8diIosCtl) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_8di_evro_8dirIosRead", evro_int_evro_int_evro_8di_evro_8dirIosRead) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_8di_evro_8dirIosCtl", evro_int_evro_int_evro_8di_evro_8dirIosCtl) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_8di_status_mIosRead", evro_int_evro_int_evro_8di_status_mIosRead) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_8di_status_mIosCtl", evro_int_evro_int_evro_8di_status_mIosCtl) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_16di_IosOpen", evro_int_evro_int_evro_16di_IosOpen) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_16di_IosClose", evro_int_evro_int_evro_16di_IosClose) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_16di_evro_16diIosRead", evro_int_evro_int_evro_16di_evro_16diIosRead) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_16di_evro_16diIosCtl", evro_int_evro_int_evro_16di_evro_16diIosCtl) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_16di_evro_16dirIosRead", evro_int_evro_int_evro_16di_evro_16dirIosRead) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_16di_evro_16dirIosCtl", evro_int_evro_int_evro_16di_evro_16dirIosCtl) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_16di_status_mIosRead", evro_int_evro_int_evro_16di_status_mIosRead) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_16di_status_mIosCtl", evro_int_evro_int_evro_16di_status_mIosCtl) \
ISA_DECLARE_HANDLE("evro_int_evro_int_status_mIosOpen", evro_int_evro_int_status_mIosOpen) \
ISA_DECLARE_HANDLE("evro_int_evro_int_status_mIosClose", evro_int_evro_int_status_mIosClose) \
ISA_DECLARE_HANDLE("evro_int_evro_int_status_mIosRead", evro_int_evro_int_status_mIosRead) \
ISA_DECLARE_HANDLE("evro_int_evro_int_status_mIosCtl", evro_int_evro_int_status_mIosCtl) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_6ai_IosOpen", evro_int_evro_int_evro_6ai_IosOpen) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_6ai_IosClose", evro_int_evro_int_evro_6ai_IosClose) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_6ai_evro_6aiIosRead", evro_int_evro_int_evro_6ai_evro_6aiIosRead) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_6ai_evro_6aiIosCtl", evro_int_evro_int_evro_6ai_evro_6aiIosCtl) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_6ai_evro_avar_infoIosRead", evro_int_evro_int_evro_6ai_evro_avar_infoIosRead) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_6ai_evro_avar_infoIosCtl", evro_int_evro_int_evro_6ai_evro_avar_infoIosCtl) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_6ai_status_mIosRead", evro_int_evro_int_evro_6ai_status_mIosRead) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_6ai_status_mIosCtl", evro_int_evro_int_evro_6ai_status_mIosCtl) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_8dirIosOpen", evro_int_evro_int_evro_8dirIosOpen) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_8dirIosClose", evro_int_evro_int_evro_8dirIosClose) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_8dirIosRead", evro_int_evro_int_evro_8dirIosRead) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_8dirIosCtl", evro_int_evro_int_evro_8dirIosCtl) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_16dirIosOpen", evro_int_evro_int_evro_16dirIosOpen) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_16dirIosClose", evro_int_evro_int_evro_16dirIosClose) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_16dirIosRead", evro_int_evro_int_evro_16dirIosRead) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_16dirIosCtl", evro_int_evro_int_evro_16dirIosCtl) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_avar_infoIosOpen", evro_int_evro_int_evro_avar_infoIosOpen) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_avar_infoIosClose", evro_int_evro_int_evro_avar_infoIosClose) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_avar_infoIosRead", evro_int_evro_int_evro_avar_infoIosRead) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_avar_infoIosCtl", evro_int_evro_int_evro_avar_infoIosCtl) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_16do_IosOpen", evro_int_evro_int_evro_16do_IosOpen) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_16do_IosClose", evro_int_evro_int_evro_16do_IosClose) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_16do_evro_16doIosWrite", evro_int_evro_int_evro_16do_evro_16doIosWrite) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_16do_evro_16doIosCtl", evro_int_evro_int_evro_16do_evro_16doIosCtl) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_16do_status_mIosRead", evro_int_evro_int_evro_16do_status_mIosRead) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_16do_status_mIosCtl", evro_int_evro_int_evro_16do_status_mIosCtl) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_8ro_IosOpen", evro_int_evro_int_evro_8ro_IosOpen) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_8ro_IosClose", evro_int_evro_int_evro_8ro_IosClose) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_8ro_evro_8roIosWrite", evro_int_evro_int_evro_8ro_evro_8roIosWrite) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_8ro_evro_8roIosCtl", evro_int_evro_int_evro_8ro_evro_8roIosCtl) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_8ro_status_mIosRead", evro_int_evro_int_evro_8ro_status_mIosRead) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_8ro_status_mIosCtl", evro_int_evro_int_evro_8ro_status_mIosCtl) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_4aoIosOpen", evro_int_evro_int_evro_4aoIosOpen) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_4aoIosClose", evro_int_evro_int_evro_4aoIosClose) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_4aoIosWrite", evro_int_evro_int_evro_4aoIosWrite) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_4aoIosCtl", evro_int_evro_int_evro_4aoIosCtl) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_6aiIosOpen", evro_int_evro_int_evro_6aiIosOpen) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_6aiIosClose", evro_int_evro_int_evro_6aiIosClose) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_6aiIosRead", evro_int_evro_int_evro_6aiIosRead) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_6aiIosCtl", evro_int_evro_int_evro_6aiIosCtl) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_4ao_IosOpen", evro_int_evro_int_evro_4ao_IosOpen) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_4ao_IosClose", evro_int_evro_int_evro_4ao_IosClose) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_4ao_evro_4aoIosWrite", evro_int_evro_int_evro_4ao_evro_4aoIosWrite) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_4ao_evro_4aoIosCtl", evro_int_evro_int_evro_4ao_evro_4aoIosCtl) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_4ao_status_mIosRead", evro_int_evro_int_evro_4ao_status_mIosRead) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_4ao_status_mIosCtl", evro_int_evro_int_evro_4ao_status_mIosCtl) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_16doIosOpen", evro_int_evro_int_evro_16doIosOpen) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_16doIosClose", evro_int_evro_int_evro_16doIosClose) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_16doIosWrite", evro_int_evro_int_evro_16doIosWrite) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_16doIosCtl", evro_int_evro_int_evro_16doIosCtl) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_8roIosOpen", evro_int_evro_int_evro_8roIosOpen) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_8roIosClose", evro_int_evro_int_evro_8roIosClose) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_8roIosWrite", evro_int_evro_int_evro_8roIosWrite) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_8roIosCtl", evro_int_evro_int_evro_8roIosCtl) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_8diIosOpen", evro_int_evro_int_evro_8diIosOpen) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_8diIosClose", evro_int_evro_int_evro_8diIosClose) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_8diIosRead", evro_int_evro_int_evro_8diIosRead) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_8diIosCtl", evro_int_evro_int_evro_8diIosCtl) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_16diIosOpen", evro_int_evro_int_evro_16diIosOpen) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_16diIosClose", evro_int_evro_int_evro_16diIosClose) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_16diIosRead", evro_int_evro_int_evro_16diIosRead) \
ISA_DECLARE_HANDLE("evro_int_evro_int_evro_16diIosCtl", evro_int_evro_int_evro_16diIosCtl) \
;

#endif /* _PACK_EVRO_INT_H */

/* eof ********************************************************************/

