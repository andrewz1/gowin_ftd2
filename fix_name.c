#include "ftd2xx.h"
#include "config.h"

FTD2XX_API FT_STATUS WINAPI FT_ListDevices(PVOID pvArg1, PVOID pvArg2, DWORD dwFlags)
{
	FT_STATUS (*f)(PVOID pvArg1, PVOID pvArg2, DWORD dwFlags) = realSym(__FUNCTION__);
	FT_STATUS r = f(pvArg1, pvArg2, dwFlags);
	if (r != FT_OK)
		return r;
	if (!(dwFlags & FT_LIST_ALL))
		return r;
	char **ids = pvArg1;
	DWORD num = *((DWORD *)pvArg2);
	for (DWORD i = 0; i < num; i++)
		fillId(ids[i]);
	return r;
}

FTD2XX_API FT_STATUS WINAPI FT_GetDeviceInfoDetail(DWORD dwIndex, LPDWORD lpdwFlags, LPDWORD lpdwType, LPDWORD lpdwID,
												   LPDWORD lpdwLocId, LPVOID lpSerialNumber, LPVOID lpDescription,
												   FT_HANDLE *pftHandle)
{
	FT_STATUS(*f)
	(DWORD dwIndex, LPDWORD lpdwFlags, LPDWORD lpdwType, LPDWORD lpdwID, LPDWORD lpdwLocId, LPVOID lpSerialNumber,
	 LPVOID lpDescription, FT_HANDLE * pftHandle) = realSym(__FUNCTION__);
	FT_STATUS r = f(dwIndex, lpdwFlags, lpdwType, lpdwID, lpdwLocId, lpSerialNumber, lpDescription, pftHandle);
	if (r != FT_OK)
		return r;
	fillId(lpDescription);
	fillSerial(lpSerialNumber);
	return r;
}

FTD2XX_API FT_STATUS WINAPI FT_GetDeviceInfo(FT_HANDLE ftHandle, FT_DEVICE *lpftDevice, LPDWORD lpdwID,
											 PCHAR pcSerialNumber, PCHAR pcDescription, LPVOID pvDummy)
{
	FT_STATUS(*f)
	(FT_HANDLE ftHandle, FT_DEVICE * lpftDevice, LPDWORD lpdwID, PCHAR pcSerialNumber, PCHAR pcDescription,
	 LPVOID pvDummy) = realSym(__FUNCTION__);
	FT_STATUS r = f(ftHandle, lpftDevice, lpdwID, pcSerialNumber, pcDescription, pvDummy);
	if (r != FT_OK)
		return r;
	fillId(pcDescription);
	fillSerial(pcSerialNumber);
	return r;
}
