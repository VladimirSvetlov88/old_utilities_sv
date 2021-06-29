#ifndef __UTILITIES_TEXT_H__
#define __UTILITIES_TEXT_H__

//==============================================================================================================================================
//	Определение параметров описания функций
//==============================================================================================================================================
#include "utilities_sv_api.h"

//==============================================================================================================================================
//	Подключение стандартных библиотек  и макросов
//==============================================================================================================================================
#include <string>
#include <cstdint>

//==============================================================================================================================================
//	Подключение сторонних библиотек  и макросов
//==============================================================================================================================================


//==============================================================================================================================================
//	Описание функций модуля
//==============================================================================================================================================
//	Секция UTILITIES_TEXT
//==============================================================================================================================================
//	Сравнение текстов
//----------------------------------------------------------------------------------------------------------------------------------------------
UTILITIES_SV_API bool CompareText(std::string A, std::string B);
UTILITIES_SV_API bool CompareText(std::string A, const char* B);
UTILITIES_SV_API bool CompareText(const char* A, std::string B);
UTILITIES_SV_API bool CompareText(const char* A, const char* B);

//----------------------------------------------------------------------------------------------------------------------------------------------
//	Преобразование символов
//----------------------------------------------------------------------------------------------------------------------------------------------
UTILITIES_SV_API void ToUpper(std::string &A);
UTILITIES_SV_API void ToLower(std::string &A);
UTILITIES_SV_API void ToUpper(char* A);
UTILITIES_SV_API void ToLower(char* A);

//----------------------------------------------------------------------------------------------------------------------------------------------
//	Удаление символов
//----------------------------------------------------------------------------------------------------------------------------------------------
UTILITIES_SV_API void ClearText(std::string &A);
UTILITIES_SV_API void ClearSpace(std::string &A);
UTILITIES_SV_API void DelSpace(std::string &A);
UTILITIES_SV_API void ClearText(char* A);
UTILITIES_SV_API void ClearSpace(char* A);
UTILITIES_SV_API void DelSpace(char* A);

//----------------------------------------------------------------------------------------------------------------------------------------------
//	Преобразование числа в шестнадцатеричную строку
//----------------------------------------------------------------------------------------------------------------------------------------------
UTILITIES_SV_API std::string HexToString(long Number, int len);
UTILITIES_SV_API std::string HexToString(int8_t Number, int len);
UTILITIES_SV_API std::string HexToString(int16_t Number, int len);
UTILITIES_SV_API std::string HexToString(int32_t Number, int len);
#ifdef WINDOWS_COMPILER
	UTILITIES_SV_API std::string HexToString(int64_t Number, int len);
#endif
UTILITIES_SV_API std::string HexToString(uint8_t Number, int len);
UTILITIES_SV_API std::string HexToString(uint16_t Number, int len);
UTILITIES_SV_API std::string HexToString(uint32_t Number, int len);
UTILITIES_SV_API std::string HexToString(uint64_t Number, int len);

UTILITIES_SV_API char* HexToChar(long Number, int len);
UTILITIES_SV_API char* HexToChar(int8_t Number, int len);
UTILITIES_SV_API char* HexToChar(int16_t Number, int len);
UTILITIES_SV_API char* HexToChar(int32_t Number, int len);
#ifdef WINDOWS_COMPILER
	UTILITIES_SV_API char* HexToChar(int64_t Number, int len);
#endif
UTILITIES_SV_API char* HexToChar(uint8_t Number, int len);
UTILITIES_SV_API char* HexToChar(uint16_t Number, int len);
UTILITIES_SV_API char* HexToChar(uint32_t Number, int len);
UTILITIES_SV_API char* HexToChar(uint64_t Number, int len);

//----------------------------------------------------------------------------------------------------------------------------------------------
//	Преобразование числа в восьмеричную строку
//----------------------------------------------------------------------------------------------------------------------------------------------
UTILITIES_SV_API std::string OctToString(long Number, int len);
UTILITIES_SV_API std::string OctToString(int8_t Number, int len);
UTILITIES_SV_API std::string OctToString(int16_t Number, int len);
UTILITIES_SV_API std::string OctToString(int32_t Number, int len);
#ifdef WINDOWS_COMPILER
	UTILITIES_SV_API std::string OctToString(int64_t Number, int len);
#endif
UTILITIES_SV_API std::string OctToString(uint8_t Number, int len);
UTILITIES_SV_API std::string OctToString(uint16_t Number, int len);
UTILITIES_SV_API std::string OctToString(uint32_t Number, int len);
UTILITIES_SV_API std::string OctToString(uint64_t Number, int len);

UTILITIES_SV_API char* OctToChar(long Number, int len);
UTILITIES_SV_API char* OctToChar(int8_t Number, int len);
UTILITIES_SV_API char* OctToChar(int16_t Number, int len);
UTILITIES_SV_API char* OctToChar(int32_t Number, int len);
#ifdef WINDOWS_COMPILER
	UTILITIES_SV_API char* OctToChar(int64_t Number, int len);
#endif
UTILITIES_SV_API char* OctToChar(uint8_t Number, int len);
UTILITIES_SV_API char* OctToChar(uint16_t Number, int len);
UTILITIES_SV_API char* OctToChar(uint32_t Number, int len);
UTILITIES_SV_API char* OctToChar(uint64_t Number, int len);

//----------------------------------------------------------------------------------------------------------------------------------------------
//	Преобразование числа в двоичную строку
//----------------------------------------------------------------------------------------------------------------------------------------------
UTILITIES_SV_API std::string BinToString(long Number, int len);
UTILITIES_SV_API std::string BinToString(int8_t Number, int len);
UTILITIES_SV_API std::string BinToString(int16_t Number, int len);
UTILITIES_SV_API std::string BinToString(int32_t Number, int len);
#ifdef WINDOWS_COMPILER
	UTILITIES_SV_API std::string BinToString(int64_t Number, int len);
#endif
UTILITIES_SV_API std::string BinToString(uint8_t Number, int len);
UTILITIES_SV_API std::string BinToString(uint16_t Number, int len);
UTILITIES_SV_API std::string BinToString(uint32_t Number, int len);
UTILITIES_SV_API std::string BinToString(uint64_t Number, int len);

UTILITIES_SV_API char* BinToChar(long Number, int len);
UTILITIES_SV_API char* BinToChar(int8_t Number, int len);
UTILITIES_SV_API char* BinToChar(int16_t Number, int len);
UTILITIES_SV_API char* BinToChar(int32_t Number, int len);
#ifdef WINDOWS_COMPILER
	UTILITIES_SV_API char* BinToChar(int64_t Number, int len);
#endif
UTILITIES_SV_API char* BinToChar(uint8_t Number, int len);
UTILITIES_SV_API char* BinToChar(uint16_t Number, int len);
UTILITIES_SV_API char* BinToChar(uint32_t Number, int len);
UTILITIES_SV_API char* BinToChar(uint64_t Number, int len);

//----------------------------------------------------------------------------------------------------------------------------------------------
//	Операции с IP адресом
//----------------------------------------------------------------------------------------------------------------------------------------------
UTILITIES_SV_API bool CheckPartIP(std::string partIP);
UTILITIES_SV_API bool CheckIPaddress(std::string IP);
UTILITIES_SV_API bool CheckIPaddress(const char* IP);

UTILITIES_SV_API int ConvertIP(long IP, std::string &address);
UTILITIES_SV_API int ConvertIP(int8_t IP, std::string &address);
UTILITIES_SV_API int ConvertIP(int16_t IP, std::string &address);
UTILITIES_SV_API int ConvertIP(int32_t IP, std::string &address);
#ifdef WINDOWS_COMPILER
	UTILITIES_SV_API int ConvertIP(int64_t IP, std::string &address);
#endif
UTILITIES_SV_API int ConvertIP(uint8_t IP, std::string &address);
UTILITIES_SV_API int ConvertIP(uint16_t IP, std::string &address);
UTILITIES_SV_API int ConvertIP(uint32_t IP, std::string &address);
UTILITIES_SV_API int ConvertIP(uint64_t IP, std::string &address);

UTILITIES_SV_API int ConvertIP(long IP, char* address);
UTILITIES_SV_API int ConvertIP(int8_t IP, char* address);
UTILITIES_SV_API int ConvertIP(int16_t IP, char* address);
UTILITIES_SV_API int ConvertIP(int32_t IP, char* address);
#ifdef WINDOWS_COMPILER
	UTILITIES_SV_API int ConvertIP(int64_t IP, char* address);
#endif
UTILITIES_SV_API int ConvertIP(uint8_t IP, char* address);
UTILITIES_SV_API int ConvertIP(uint16_t IP, char* address);
UTILITIES_SV_API int ConvertIP(uint32_t IP, char* address);
UTILITIES_SV_API int ConvertIP(uint64_t IP, char* address);


//==============================================================================================================================================
//	Конец файла
//==============================================================================================================================================


#endif //	__UTILITIES_TEXT_H__
