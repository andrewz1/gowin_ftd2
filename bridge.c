// this is just "bridge" calls between fake and real lib

#include "config.h"

typedef void *xtype;

static xtype extF(const char *name, xtype a0, xtype a1, xtype a2, xtype a3, xtype a4, xtype a5)
{
	xtype (*f)(xtype, xtype, xtype, xtype, xtype, xtype) = realSym(name);
	return f(a0, a1, a2, a3, a4, a5);
}

static xtype extF2(const char *name, xtype a0, xtype a1, xtype a2, xtype a3, xtype a4, xtype a5, xtype a6, xtype a7)
{
	xtype (*f)(xtype, xtype, xtype, xtype, xtype, xtype, xtype, xtype) = realSym(name);
	return f(a0, a1, a2, a3, a4, a5, a6, a7);
}

xtype FT_Close(xtype a0)
{
	return extF(__FUNCTION__, a0, 0, 0, 0, 0, 0);
}

xtype FT_ClrDtr(xtype a0)
{
	return extF(__FUNCTION__, a0, 0, 0, 0, 0, 0);
}

xtype FT_ClrRts(xtype a0)
{
	return extF(__FUNCTION__, a0, 0, 0, 0, 0, 0);
}

xtype FT_CreateDeviceInfoList(xtype a0)
{
	return extF(__FUNCTION__, a0, 0, 0, 0, 0, 0);
}

xtype FT_CyclePort(xtype a0)
{
	return extF(__FUNCTION__, a0, 0, 0, 0, 0, 0);
}

xtype FT_EraseEE(xtype a0)
{
	return extF(__FUNCTION__, a0, 0, 0, 0, 0, 0);
}

xtype FT_GetLibraryVersion(xtype a0)
{
	return extF(__FUNCTION__, a0, 0, 0, 0, 0, 0);
}

xtype FT_ResetDevice(xtype a0)
{
	return extF(__FUNCTION__, a0, 0, 0, 0, 0, 0);
}

xtype FT_ResetPort(xtype a0)
{
	return extF(__FUNCTION__, a0, 0, 0, 0, 0, 0);
}

xtype FT_RestartInTask(xtype a0)
{
	return extF(__FUNCTION__, a0, 0, 0, 0, 0, 0);
}

xtype FT_SetBreakOff(xtype a0)
{
	return extF(__FUNCTION__, a0, 0, 0, 0, 0, 0);
}

xtype FT_SetBreakOn(xtype a0)
{
	return extF(__FUNCTION__, a0, 0, 0, 0, 0, 0);
}

xtype FT_SetDtr(xtype a0)
{
	return extF(__FUNCTION__, a0, 0, 0, 0, 0, 0);
}

xtype FT_SetRts(xtype a0)
{
	return extF(__FUNCTION__, a0, 0, 0, 0, 0, 0);
}

xtype FT_StopInTask(xtype a0)
{
	return extF(__FUNCTION__, a0, 0, 0, 0, 0, 0);
}

xtype FT_W32_CancelIo(xtype a0)
{
	return extF(__FUNCTION__, a0, 0, 0, 0, 0, 0);
}

xtype FT_W32_ClearCommBreak(xtype a0)
{
	return extF(__FUNCTION__, a0, 0, 0, 0, 0, 0);
}

xtype FT_W32_CloseHandle(xtype a0)
{
	return extF(__FUNCTION__, a0, 0, 0, 0, 0, 0);
}

xtype FT_W32_GetLastError(xtype a0)
{
	return extF(__FUNCTION__, a0, 0, 0, 0, 0, 0);
}

xtype FT_W32_SetCommBreak(xtype a0)
{
	return extF(__FUNCTION__, a0, 0, 0, 0, 0, 0);
}

xtype FT_EE_Program(xtype a0, xtype a1)
{
	return extF(__FUNCTION__, a0, a1, 0, 0, 0, 0);
}

xtype FT_EE_Read(xtype a0, xtype a1)
{
	return extF(__FUNCTION__, a0, a1, 0, 0, 0, 0);
}

xtype FT_EE_UASize(xtype a0, xtype a1)
{
	return extF(__FUNCTION__, a0, a1, 0, 0, 0, 0);
}

xtype FT_GetBitMode(xtype a0, xtype a1)
{
	return extF(__FUNCTION__, a0, a1, 0, 0, 0, 0);
}

xtype FT_GetDeviceInfoList(xtype a0, xtype a1)
{
	return extF(__FUNCTION__, a0, a1, 0, 0, 0, 0);
}

xtype FT_GetDriverVersion(xtype a0, xtype a1)
{
	return extF(__FUNCTION__, a0, a1, 0, 0, 0, 0);
}

xtype FT_GetEventStatus(xtype a0, xtype a1)
{
	return extF(__FUNCTION__, a0, a1, 0, 0, 0, 0);
}

xtype FT_GetLatencyTimer(xtype a0, xtype a1)
{
	return extF(__FUNCTION__, a0, a1, 0, 0, 0, 0);
}

xtype FT_GetModemStatus(xtype a0, xtype a1)
{
	return extF(__FUNCTION__, a0, a1, 0, 0, 0, 0);
}

xtype FT_GetQueueStatus(xtype a0, xtype a1)
{
	return extF(__FUNCTION__, a0, a1, 0, 0, 0, 0);
}

xtype FT_GetVIDPID(xtype a0, xtype a1)
{
	return extF(__FUNCTION__, a0, a1, 0, 0, 0, 0);
}

xtype FT_Open(xtype a0, xtype a1)
{
	return extF(__FUNCTION__, a0, a1, 0, 0, 0, 0);
}

xtype FT_Purge(xtype a0, xtype a1)
{
	return extF(__FUNCTION__, a0, a1, 0, 0, 0, 0);
}

xtype FT_SetBaudRate(xtype a0, xtype a1)
{
	return extF(__FUNCTION__, a0, a1, 0, 0, 0, 0);
}

xtype FT_SetDeadmanTimeout(xtype a0, xtype a1)
{
	return extF(__FUNCTION__, a0, a1, 0, 0, 0, 0);
}

xtype FT_SetDivisor(xtype a0, xtype a1)
{
	return extF(__FUNCTION__, a0, a1, 0, 0, 0, 0);
}

xtype FT_SetLatencyTimer(xtype a0, xtype a1)
{
	return extF(__FUNCTION__, a0, a1, 0, 0, 0, 0);
}

xtype FT_SetResetPipeRetryCount(xtype a0, xtype a1)
{
	return extF(__FUNCTION__, a0, a1, 0, 0, 0, 0);
}

xtype FT_SetVIDPID(xtype a0, xtype a1)
{
	return extF(__FUNCTION__, a0, a1, 0, 0, 0, 0);
}

xtype FT_SetWaitMask(xtype a0, xtype a1)
{
	return extF(__FUNCTION__, a0, a1, 0, 0, 0, 0);
}

xtype FT_W32_EscapeCommFunction(xtype a0, xtype a1)
{
	return extF(__FUNCTION__, a0, a1, 0, 0, 0, 0);
}

xtype FT_W32_GetCommModemStatus(xtype a0, xtype a1)
{
	return extF(__FUNCTION__, a0, a1, 0, 0, 0, 0);
}

xtype FT_W32_GetCommState(xtype a0, xtype a1)
{
	return extF(__FUNCTION__, a0, a1, 0, 0, 0, 0);
}

xtype FT_W32_GetCommTimeouts(xtype a0, xtype a1)
{
	return extF(__FUNCTION__, a0, a1, 0, 0, 0, 0);
}

xtype FT_W32_PurgeComm(xtype a0, xtype a1)
{
	return extF(__FUNCTION__, a0, a1, 0, 0, 0, 0);
}

xtype FT_W32_SetCommMask(xtype a0, xtype a1)
{
	return extF(__FUNCTION__, a0, a1, 0, 0, 0, 0);
}

xtype FT_W32_SetCommState(xtype a0, xtype a1)
{
	return extF(__FUNCTION__, a0, a1, 0, 0, 0, 0);
}

xtype FT_W32_SetCommTimeouts(xtype a0, xtype a1)
{
	return extF(__FUNCTION__, a0, a1, 0, 0, 0, 0);
}

xtype FT_WaitOnMask(xtype a0, xtype a1)
{
	return extF(__FUNCTION__, a0, a1, 0, 0, 0, 0);
}

xtype FT_EE_UAWrite(xtype a0, xtype a1, xtype a2)
{
	return extF(__FUNCTION__, a0, a1, a2, 0, 0, 0);
}

xtype FT_OpenEx(xtype a0, xtype a1, xtype a2)
{
	return extF(__FUNCTION__, a0, a1, a2, 0, 0, 0);
}

xtype FT_ReadEE(xtype a0, xtype a1, xtype a2)
{
	return extF(__FUNCTION__, a0, a1, a2, 0, 0, 0);
}

xtype FT_SetBitMode(xtype a0, xtype a1, xtype a2)
{
	return extF(__FUNCTION__, a0, a1, a2, 0, 0, 0);
}

xtype FT_SetEventNotification(xtype a0, xtype a1, xtype a2)
{
	return extF(__FUNCTION__, a0, a1, a2, 0, 0, 0);
}

xtype FT_SetTimeouts(xtype a0, xtype a1, xtype a2)
{
	return extF(__FUNCTION__, a0, a1, a2, 0, 0, 0);
}

xtype FT_SetUSBParameters(xtype a0, xtype a1, xtype a2)
{
	return extF(__FUNCTION__, a0, a1, a2, 0, 0, 0);
}

xtype FT_W32_ClearCommError(xtype a0, xtype a1, xtype a2)
{
	return extF(__FUNCTION__, a0, a1, a2, 0, 0, 0);
}

xtype FT_W32_SetupComm(xtype a0, xtype a1, xtype a2)
{
	return extF(__FUNCTION__, a0, a1, a2, 0, 0, 0);
}

xtype FT_W32_WaitCommEvent(xtype a0, xtype a1, xtype a2)
{
	return extF(__FUNCTION__, a0, a1, a2, 0, 0, 0);
}

xtype FT_WriteEE(xtype a0, xtype a1, xtype a2)
{
	return extF(__FUNCTION__, a0, a1, a2, 0, 0, 0);
}

xtype FT_EE_UARead(xtype a0, xtype a1, xtype a2, xtype a3)
{
	return extF(__FUNCTION__, a0, a1, a2, a3, 0, 0);
}

xtype FT_GetStatus(xtype a0, xtype a1, xtype a2, xtype a3)
{
	return extF(__FUNCTION__, a0, a1, a2, a3, 0, 0);
}

xtype FT_Read(xtype a0, xtype a1, xtype a2, xtype a3)
{
	return extF(__FUNCTION__, a0, a1, a2, a3, 0, 0);
}

xtype FT_SetDataCharacteristics(xtype a0, xtype a1, xtype a2, xtype a3)
{
	return extF(__FUNCTION__, a0, a1, a2, a3, 0, 0);
}

xtype FT_SetFlowControl(xtype a0, xtype a1, xtype a2, xtype a3)
{
	return extF(__FUNCTION__, a0, a1, a2, a3, 0, 0);
}

xtype FT_W32_GetOverlappedResult(xtype a0, xtype a1, xtype a2, xtype a3)
{
	return extF(__FUNCTION__, a0, a1, a2, a3, 0, 0);
}

xtype FT_Write(xtype a0, xtype a1, xtype a2, xtype a3)
{
	return extF(__FUNCTION__, a0, a1, a2, a3, 0, 0);
}

xtype FT_SetChars(xtype a0, xtype a1, xtype a2, xtype a3, xtype a4)
{
	return extF(__FUNCTION__, a0, a1, a2, a3, a4, 0);
}

xtype FT_W32_ReadFile(xtype a0, xtype a1, xtype a2, xtype a3, xtype a4)
{
	return extF(__FUNCTION__, a0, a1, a2, a3, a4, 0);
}

xtype FT_W32_WriteFile(xtype a0, xtype a1, xtype a2, xtype a3, xtype a4)
{
	return extF(__FUNCTION__, a0, a1, a2, a3, a4, 0);
}

xtype FT_EE_ProgramEx(xtype a0, xtype a1, xtype a2, xtype a3, xtype a4, xtype a5)
{
	return extF(__FUNCTION__, a0, a1, a2, a3, a4, a5);
}

xtype FT_EE_ReadEx(xtype a0, xtype a1, xtype a2, xtype a3, xtype a4, xtype a5)
{
	return extF(__FUNCTION__, a0, a1, a2, a3, a4, a5);
}

xtype FT_W32_CreateFile(xtype a0, xtype a1, xtype a2, xtype a3, xtype a4, xtype a5, xtype a6)
{
	return extF2(__FUNCTION__, a0, a1, a2, a3, a4, a5, a6, 0);
}

//xtype FT_GetDeviceInfoDetail(xtype a0, xtype a1, xtype a2, xtype a3, xtype a4, xtype a5,
//								xtype a6, xtype a7)
//{
//	return extF2(__FUNCTION__, a0, a1, a2, a3, a4, a5, a6, a7);
//}

xtype FT_IoCtl(xtype a0, xtype a1, xtype a2, xtype a3, xtype a4, xtype a5, xtype a6, xtype a7)
{
	return extF2(__FUNCTION__, a0, a1, a2, a3, a4, a5, a6, a7);
}
