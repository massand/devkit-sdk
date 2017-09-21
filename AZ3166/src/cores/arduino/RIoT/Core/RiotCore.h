
/*(Copyright)

Microsoft Copyright 2015, 2016
Confidential Information

*/
#ifndef _RIOT_CORE_H
#define _RIOT_CORE_H
#ifdef __cplusplus
extern "C" {
#endif
#include <stdint.h>
#include "Riot.h"
#include "RiotDerEnc.h"
#include "RiotX509Bldr.h"

char * __attribute__((section(".riot_core"))) RIoTGetDeviceID(unsigned int *len);
char * __attribute__((section(".riot_core"))) RIoTGetAliasKey(unsigned int *len);
char * __attribute__((section(".riot_core"))) RIoTGetAliasCert(unsigned int *len);
char * __attribute__((section(".riot_core"))) RIoTGetDeviceCert(unsigned int *len);

int __attribute__((section(".riot_core"))) RiotStart(uint8_t *CDI, uint16_t CDILen);

#ifdef __cplusplus
}
#endif
#endif
