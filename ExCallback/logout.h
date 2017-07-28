#ifndef _LOGOUT_H_
#define _LOGOUT_H_

#include "stdafx.h"
#include "stdarg.h"

#define LOG_OUTPUT1(fmt)  printf("[%3d][%8s] %s\n"  , __LINE__, __func__, fmt );
#define LOG_OUTPUT2(...)  printf("[%3d][%8s] ",__LINE__, __func__); printf(__VA_ARGS__); printf("\n");		

#endif /* _LOGOUT_H_ */

