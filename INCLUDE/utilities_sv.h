#ifndef __UTILITIES_SV_H__
#define __UTILITIES_SV_H__

//==============================================================================================================================================
//	Подключение стандартных библиотек  и макросов
//==============================================================================================================================================
#include <cstdint>
#include <string>

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


#define LOG_OUTPUT_NONE 0
#define LOG_OUTPUT_TYPE 1
#define LOG_OUTPUT_PRINT 2
#define LOG_OUTPUT_BOTH 3

#define TIME_ZONE_NONE 0
#define TIME_ZONE_LOCAL 1
#define TIME_ZONE_GMT 2

#define btoa(Value) Value? "Yes":"No"
#define btol(Value) Value? "true":"false"
#define btoo(Value) Value? "on" : "off";
#define btoA(Value) Value? "YES":"NO"
#define btoL(Value) Value? "TRUE":"FALSE"
#define btoO(Value) Value? "ON" : "OFF";
//
#define btoa_rus(Value) Value? "Да":"Нет"
#define btol_rus(Value) Value? "Истина":"Ложь"
#define btoo_rus(Value) Value? "Вкл" : "Выкл";
#define btoA_rus(Value) Value? "ДА":"НЕТ"
#define btoL_rus(Value) Value? "ИСТИНА":"ЛОЖЬ"
#define btoO_rus(Value) Value? "ВКЛ" : "ВЫКЛ";


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
#ifdef WINDOWS_COMPILER
	UTILITIES_SV_API int GetBit(int64_t Number, int Position);
#endif
UTILITIES_SV_API int GetBit(uint8_t Number, int Position);
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
//	Секция UTILITIES_FILE
//==============================================================================================================================================
//	Информация о файлах
//----------------------------------------------------------------------------------------------------------------------------------------------
bool FileExist(const char *fname);
bool FileExist(std::string fname);
long FileSize(const char *FileName);
long FileSize(std::string FileName);

//----------------------------------------------------------------------------------------------------------------------------------------------
//	Чтение из файла
//----------------------------------------------------------------------------------------------------------------------------------------------
long MessageFromFile(const char *FileName, char *Message, long Size);
long MessageFromFile(std::string FileName, char *Message, long Size);
long MessageFromFile(const char *FileName, std::string &Message);
long MessageFromFile(std::string FileName, std::string &Message);

//==============================================================================================================================================
//	Секция UTILITIES_MATH
//==============================================================================================================================================
//	Перевод целого числа в в число с плавающе запятой по стандарту IEEE-754
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
//	Перевод числа с плавающе запятой в целое числа по стандарту IEEE-754
//----------------------------------------------------------------------------------------------------------------------------------------------
UTILITIES_SV_API uint32_t RealToHex32(float ieee754);
UTILITIES_SV_API uint32_t RealToHex32(double ieee754);
UTILITIES_SV_API uint64_t RealToHex64(float ieee754);
UTILITIES_SV_API uint64_t RealToHex64(double ieee754);

//----------------------------------------------------------------------------------------------------------------------------------------------
//	Вычисление контрольных сумм
//----------------------------------------------------------------------------------------------------------------------------------------------
UTILITIES_SV_API int CRCXOR(unsigned char Buffer[], int Start, int End);
UTILITIES_SV_API int CRC16(unsigned char Buffer[], int Start, int End);
UTILITIES_SV_API int CRC16sm(unsigned char Buffer[], int Start, int End);

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

class utilities_version_class
{
public:
	UTILITIES_SV_API utilities_version_class();
	UTILITIES_SV_API ~utilities_version_class();

	UTILITIES_SV_API std::string GetName();
	UTILITIES_SV_API std::string GetFileName();
	UTILITIES_SV_API std::string GetDescription();
	UTILITIES_SV_API std::string GetVersion();
	UTILITIES_SV_API std::string GetCopyright();
	UTILITIES_SV_API std::string GetDate();
};


//==============================================================================================================================================
//	Конец файла
//==============================================================================================================================================


#endif //	__UTILITIES_SV_H__
