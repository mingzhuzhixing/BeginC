// dllmain.cpp : 定义 DLL 应用程序的入口点。
#include "stdafx.h"
#include "dllmain.h"
#include <stdio.h>


BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
		printf("动态链接库加载到进程中=%d\n", hModule);
		break;
    case DLL_THREAD_ATTACH:
		printf("动态链接库进入到线程中\n");
		break;
    case DLL_THREAD_DETACH:
		printf("动态链接库离开了线程\n");
		break;
    case DLL_PROCESS_DETACH:
		printf("动态链接库离开了进程=%d\n", hModule);
        break;
    }
    return TRUE;
}

