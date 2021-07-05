#ifndef __UTILITIES_BIT_H__
#define __UTILITIES_BIT_H__

//==============================================================================================================================================
//	Подключение стандартных библиотек  и макросов
//==============================================================================================================================================
#include <cstdint>

//==============================================================================================================================================
//	Подключение сторонних библиотек  и макросов
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
//	Описание функций модуля
//==============================================================================================================================================
//	Секция UTILITIES_BIT
//==============================================================================================================================================
//	Получение бита
//----------------------------------------------------------------------------------------------------------------------------------------------
UTILITIES_SV_API int GetBit(long Number, int Position);
UTILITIES_SV_API int GetBit(int8_t Number, int Position);
UTILITIES_SV_API int GetBit(int16_t Number, int Position);
UTILITIES_SV_API int GetBit(int32_t Number, int Position);
UTILITIES_SV_API int GetBit(int64_t Number, int Position);
#ifdef WINDOWS_COMPILER
	UTILITIES_SV_API int GetBit(uint8_t Number, int Position);
#endif
UTILITIES_SV_API int GetBit(uint16_t Number, int Position);
UTILITIES_SV_API int GetBit(uint32_t Number, int Position);
UTILITIES_SV_API int GetBit(uint64_t Number, int Position);
//
UTILITIES_SV_API int CheckBit(long Number, int Position);
UTILITIES_SV_API int CheckBit(int8_t Number, int Position);
UTILITIES_SV_API int CheckBit(int16_t Number, int Position);
UTILITIES_SV_API int CheckBit(int32_t Number, int Position);
#ifdef WINDOWS_COMPILER
	UTILITIES_SV_API int CheckBit(int64_t Number, int Position);
#endif
UTILITIES_SV_API int CheckBit(uint8_t Number, int Position);
UTILITIES_SV_API int CheckBit(uint16_t Number, int Position);
UTILITIES_SV_API int CheckBit(uint32_t Number, int Position);
UTILITIES_SV_API int CheckBit(uint64_t Number, int Position);

//----------------------------------------------------------------------------------------------------------------------------------------------
//	Установка бита
//----------------------------------------------------------------------------------------------------------------------------------------------
UTILITIES_SV_API int SetBit(long &Number, int Position);
UTILITIES_SV_API int SetBit(int8_t &Number, int Position);
UTILITIES_SV_API int SetBit(int16_t &Number, int Position);
UTILITIES_SV_API int SetBit(int32_t &Number, int Position);
#ifdef WINDOWS_COMPILER
	UTILITIES_SV_API int SetBit(int64_t &Number, int Position);
#endif
UTILITIES_SV_API int SetBit(uint8_t &Number, int Position);
UTILITIES_SV_API int SetBit(uint16_t &Number, int Position);
UTILITIES_SV_API int SetBit(uint32_t &Number, int Position);
UTILITIES_SV_API int SetBit(uint64_t &Number, int Position);

//----------------------------------------------------------------------------------------------------------------------------------------------
//	Очистка бита
//----------------------------------------------------------------------------------------------------------------------------------------------
UTILITIES_SV_API int CleanBit(long &Number, int Position);
UTILITIES_SV_API int CleanBit(int8_t &Number, int Position);
UTILITIES_SV_API int CleanBit(int16_t &Number, int Position);
UTILITIES_SV_API int CleanBit(int32_t &Number, int Position);
#ifdef WINDOWS_COMPILER
	UTILITIES_SV_API int CleanBit(int64_t &Number, int Position);
#endif
UTILITIES_SV_API int CleanBit(uint8_t &Number, int Position);
UTILITIES_SV_API int CleanBit(uint16_t &Number, int Position);
UTILITIES_SV_API int CleanBit(uint32_t &Number, int Position);
UTILITIES_SV_API int CleanBit(uint64_t &Number, int Position);

//----------------------------------------------------------------------------------------------------------------------------------------------
//	Установка бита в заданное значение
//----------------------------------------------------------------------------------------------------------------------------------------------
UTILITIES_SV_API int PutBit(long &Number, int Position, bool Bit);
UTILITIES_SV_API int PutBit(int8_t &Number, int Position, bool Bit);
UTILITIES_SV_API int PutBit(int16_t &Number, int Position, bool Bit);
UTILITIES_SV_API int PutBit(int32_t &Number, int Position, bool Bit);
#ifdef WINDOWS_COMPILER
	UTILITIES_SV_API int PutBit(int64_t &Number, int Position, bool Bit);
#endif
UTILITIES_SV_API int PutBit(uint8_t &Number, int Position, bool Bit);
UTILITIES_SV_API int PutBit(uint16_t &Number, int Position, bool Bit);
UTILITIES_SV_API int PutBit(uint32_t &Number, int Position, bool Bit);
UTILITIES_SV_API int PutBit(uint64_t &Number, int Position, bool Bit);
//
UTILITIES_SV_API int PutBit(long &Number, int Position, int Bit);
UTILITIES_SV_API int PutBit(int8_t &Number, int Position, int Bit);
UTILITIES_SV_API int PutBit(int16_t &Number, int Position, int Bit);
UTILITIES_SV_API int PutBit(int32_t &Number, int Position, int Bit);
#ifdef WINDOWS_COMPILER
	UTILITIES_SV_API int PutBit(int64_t &Number, int Position, int Bit);
#endif
UTILITIES_SV_API int PutBit(uint8_t &Number, int Position, int Bit);
UTILITIES_SV_API int PutBit(uint16_t &Number, int Position, int Bit);
UTILITIES_SV_API int PutBit(uint32_t &Number, int Position, int Bit);
UTILITIES_SV_API int PutBit(uint64_t &Number, int Position, int Bit);

//----------------------------------------------------------------------------------------------------------------------------------------------
//	Изменение значения бита на противоположное
//----------------------------------------------------------------------------------------------------------------------------------------------
UTILITIES_SV_API int ChangeBit(long &Number, int Position);
UTILITIES_SV_API int ChangeBit(int8_t &Number, int Position);
UTILITIES_SV_API int ChangeBit(int16_t &Number, int Position);
UTILITIES_SV_API int ChangeBit(int32_t &Number, int Position);
#ifdef WINDOWS_COMPILER
	UTILITIES_SV_API int ChangeBit(int64_t &Number, int Position);
#endif
UTILITIES_SV_API int ChangeBit(uint8_t &Number, int Position);
UTILITIES_SV_API int ChangeBit(uint16_t &Number, int Position);
UTILITIES_SV_API int ChangeBit(uint32_t &Number, int Position);
UTILITIES_SV_API int ChangeBit(uint64_t &Number, int Position);


//==============================================================================================================================================
//	Конец файла
//==============================================================================================================================================


#endif //	__UTILITIES_BIT_H__
