#ifndef __UTILITIES_MATH_H__
#define __UTILITIES_MATH_H__

//==============================================================================================================================================
//	??????????? ??????????? ?????????  ? ????????
//==============================================================================================================================================
#include <string>
#include <cstdint>

//==============================================================================================================================================
//	??????????? ????????? ?????????  ? ????????
//==============================================================================================================================================
#ifdef WINDOWS_COMPILER
	#ifdef UTILITIES_SV_EXPORTS
		#define UTILITIES_SV_API  __declspec(dllexport)
		#define UTILITIES_SV_DATA __declspec(dllexport) extern
	#else
		#define UTILITIES_SV_API  __declspec(dllimport)
		#define UTILITIES_SV_DATA __declspec(dllimport) extern
	#endif
#else
	#define UTILITIES_SV_API 
	#define UTILITIES_SV_DATA extern
#endif


//==============================================================================================================================================
//	???????? ??????? ??????
//==============================================================================================================================================
//	?????? UTILITIES_MATH
//==============================================================================================================================================
//	??????? ?????? ????? ? ? ????? ? ???????? ??????? ?? ????????? IEEE-754
//----------------------------------------------------------------------------------------------------------------------------------------------
UTILITIES_SV_API float HexToReal32(long ieee754);
UTILITIES_SV_API float HexToReal32(int32_t ieee754);
UTILITIES_SV_API float HexToReal32(uint32_t ieee754);

UTILITIES_SV_API double HexToReal64(long ieee754);
UTILITIES_SV_API double HexToReal64(int32_t ieee754);
UTILITIES_SV_API double HexToReal64(uint32_t ieee754);
#ifdef WINDOWS_COMPILER
	UTILITIES_SV_API double HexToReal64(int64_t ieee754);
#endif
UTILITIES_SV_API double HexToReal64(uint64_t ieee754);

//----------------------------------------------------------------------------------------------------------------------------------------------
//	??????? ????? ? ???????? ??????? ? ????? ????? ?? ????????? IEEE-754
//----------------------------------------------------------------------------------------------------------------------------------------------
UTILITIES_SV_API uint32_t RealToHex32(float ieee754);
UTILITIES_SV_API uint32_t RealToHex32(double ieee754);
UTILITIES_SV_API uint64_t RealToHex64(float ieee754);
UTILITIES_SV_API uint64_t RealToHex64(double ieee754);

//----------------------------------------------------------------------------------------------------------------------------------------------
//	?????????? ??????????? ????
//----------------------------------------------------------------------------------------------------------------------------------------------
UTILITIES_SV_API int CRCXOR(unsigned char Buffer[], int Start, int End);
UTILITIES_SV_API int CRC16(unsigned char Buffer[], int Start, int End);
UTILITIES_SV_API int CRC16sm(unsigned char Buffer[], int Start, int End);


//==============================================================================================================================================
//	????? ?????
//==============================================================================================================================================


#endif //	__UTILITIES_MATH_H__
