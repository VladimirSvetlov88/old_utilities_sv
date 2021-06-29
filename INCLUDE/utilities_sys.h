#ifndef __UTILITIES_SYS_H__
#define __UTILITIES_SYS_H__

//==============================================================================================================================================
//	Определение параметров описания функций
//==============================================================================================================================================
#include "utilities_sv_api.h"

//==============================================================================================================================================
//	Подключение стандартных библиотек  и макросов
//==============================================================================================================================================
#include <cstdint>
#include <string>
#include <time.h>

//==============================================================================================================================================
//	Подключение сторонних библиотек  и макросов
//==============================================================================================================================================

//==============================================================================================================================================
//	Описание функций модуля
//==============================================================================================================================================
//	Секция UTILITIES_SYS
//==============================================================================================================================================
//	Обработка системных сообщений
//----------------------------------------------------------------------------------------------------------------------------------------------
UTILITIES_SV_API int LastSystemError();

UTILITIES_SV_API void GetErrorText(long wsaError, std::string &ErrorText);
UTILITIES_SV_API void GetErrorText(int8_t wsaError, std::string &ErrorText);
UTILITIES_SV_API void GetErrorText(int16_t wsaError, std::string &ErrorText);
UTILITIES_SV_API void GetErrorText(int32_t wsaError, std::string &ErrorText);
#ifdef WINDOWS_COMPILER
	UTILITIES_SV_API void GetErrorText(int64_t wsaError, std::string &ErrorText);
#endif
UTILITIES_SV_API void GetErrorText(uint8_t wsaError, std::string &ErrorText);
UTILITIES_SV_API void GetErrorText(uint16_t wsaError, std::string &ErrorText);
UTILITIES_SV_API void GetErrorText(uint32_t wsaError, std::string &ErrorText);
UTILITIES_SV_API void GetErrorText(uint64_t wsaError, std::string &ErrorText);

UTILITIES_SV_API void GetErrorText(long wsaError, char* ErrorText);
UTILITIES_SV_API void GetErrorText(int8_t wsaError, char* ErrorText);
UTILITIES_SV_API void GetErrorText(int16_t wsaError, char* ErrorText);
UTILITIES_SV_API void GetErrorText(int32_t wsaError, char* ErrorText);
#ifdef WINDOWS_COMPILER
	UTILITIES_SV_API void GetErrorText(int64_t wsaError, char* ErrorText);
#endif
UTILITIES_SV_API void GetErrorText(uint8_t wsaError, char* ErrorText);
UTILITIES_SV_API void GetErrorText(uint16_t wsaError, char* ErrorText);
UTILITIES_SV_API void GetErrorText(uint32_t wsaError, char* ErrorText);
UTILITIES_SV_API void GetErrorText(uint64_t wsaError, char* ErrorText);

UTILITIES_SV_API std::string LastErrorString(long wsaError);
UTILITIES_SV_API std::string LastErrorString(int8_t wsaError);
UTILITIES_SV_API std::string LastErrorString(int16_t wsaError);
UTILITIES_SV_API std::string LastErrorString(int32_t wsaError);
#ifdef WINDOWS_COMPILER
	UTILITIES_SV_API std::string LastErrorString(int64_t wsaError);
#endif
UTILITIES_SV_API std::string LastErrorString(uint8_t wsaError);
UTILITIES_SV_API std::string LastErrorString(uint16_t wsaError);
UTILITIES_SV_API std::string LastErrorString(uint32_t wsaError);
UTILITIES_SV_API std::string LastErrorString(uint64_t wsaError);

UTILITIES_SV_API char* LastErrorText(long wsaError);
UTILITIES_SV_API char* LastErrorText(int8_t wsaError);
UTILITIES_SV_API char* LastErrorText(int16_t wsaError);
UTILITIES_SV_API char* LastErrorText(int32_t wsaError);
#ifdef WINDOWS_COMPILER
	UTILITIES_SV_API char* LastErrorText(int64_t wsaError);
#endif
UTILITIES_SV_API char* LastErrorText(uint8_t wsaError);
UTILITIES_SV_API char* LastErrorText(uint16_t wsaError);
UTILITIES_SV_API char* LastErrorText(uint32_t wsaError);
UTILITIES_SV_API char* LastErrorText(uint64_t wsaError);

//----------------------------------------------------------------------------------------------------------------------------------------------
//	Операции со временем
//----------------------------------------------------------------------------------------------------------------------------------------------
UTILITIES_SV_API long Microseconds();
UTILITIES_SV_API double DoubleTime();
//
UTILITIES_SV_API void Delay(long Milisec);
UTILITIES_SV_API void Delay(int8_t Milisec);
UTILITIES_SV_API void Delay(int16_t Milisec);
UTILITIES_SV_API void Delay(int32_t Milisec);
#ifdef WINDOWS_COMPILER
	UTILITIES_SV_API void Delay(int64_t Milisec);
#endif
UTILITIES_SV_API void Delay(uint8_t Milisec);
UTILITIES_SV_API void Delay(uint16_t Milisec);
UTILITIES_SV_API void Delay(uint32_t Milisec);
UTILITIES_SV_API void Delay(uint64_t Milisec);
//
UTILITIES_SV_API void delay(long Milisec);
UTILITIES_SV_API void delay(int8_t Milisec);
UTILITIES_SV_API void delay(int16_t Milisec);
UTILITIES_SV_API void delay(int32_t Milisec);
#ifdef WINDOWS_COMPILER
	UTILITIES_SV_API void delay(int64_t Milisec);
#endif
UTILITIES_SV_API void delay(uint8_t Milisec);
UTILITIES_SV_API void delay(uint16_t Milisec);
UTILITIES_SV_API void delay(uint32_t Milisec);
UTILITIES_SV_API void delay(uint64_t Milisec);
//
UTILITIES_SV_API void wait(long Microsec);
UTILITIES_SV_API void wait(int8_t Microsec);
UTILITIES_SV_API void wait(int16_t Microsec);
UTILITIES_SV_API void wait(int32_t Microsec);
#ifdef WINDOWS_COMPILER
	UTILITIES_SV_API void wait(int64_t Microsec);
#endif
UTILITIES_SV_API void wait(uint8_t Microsec);
UTILITIES_SV_API void wait(uint16_t Microsec);
UTILITIES_SV_API void wait(uint32_t Microsec);
UTILITIES_SV_API void wait(uint64_t Microsec);

//----------------------------------------------------------------------------------------------------------------------------------------------
//	Обработка сигналов клавиатуры для UNIX систем
//----------------------------------------------------------------------------------------------------------------------------------------------
#ifndef WINDOWS_COMPILER
	UTILITIES_SV_API int _getch();
	UTILITIES_SV_API int _kbhit();
#endif


//==============================================================================================================================================
//	Конец файла
//==============================================================================================================================================


#endif //	__UTILITIES_SYS_H__
