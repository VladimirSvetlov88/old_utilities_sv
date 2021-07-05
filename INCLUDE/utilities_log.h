#ifndef __UTILITIES_LOG_H__
#define __UTILITIES_LOG_H__

//==============================================================================================================================================
//	Подключение стандартных библиотек  и макросов
//==============================================================================================================================================
#include <string>
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

#define LOG_OUTPUT_NONE 0
#define LOG_OUTPUT_TYPE 1
#define LOG_OUTPUT_PRINT 2
#define LOG_OUTPUT_BOTH 3

#define TIME_ZONE_NONE 0
#define TIME_ZONE_LOCAL 1
#define TIME_ZONE_GMT 2

//==============================================================================================================================================
//	Описание функций модуля
//==============================================================================================================================================
//	Секция UTILITIES_LOG
//==============================================================================================================================================
//	Настройка параметров вывода
//----------------------------------------------------------------------------------------------------------------------------------------------
UTILITIES_SV_API void InitLogSettings();
UTILITIES_SV_API int SetLogOutput(long log_output);
UTILITIES_SV_API int SetLogOutput(int8_t log_output);
UTILITIES_SV_API int SetLogOutput(int16_t log_output);
UTILITIES_SV_API int SetLogOutput(int32_t log_output);
#ifdef WINDOWS_COMPILER
	UTILITIES_SV_API int SetLogOutput(int64_t log_output);
#endif
UTILITIES_SV_API int SetLogOutput(uint8_t log_output);
UTILITIES_SV_API int SetLogOutput(uint16_t log_output);
UTILITIES_SV_API int SetLogOutput(uint32_t log_output);
UTILITIES_SV_API int SetLogOutput(uint64_t log_output);

//----------------------------------------------------------------------------------------------------------------------------------------------
//	Настройка параметров вывода на экран
//----------------------------------------------------------------------------------------------------------------------------------------------
UTILITIES_SV_API void EnableLogType();
UTILITIES_SV_API void DisableLogType();
UTILITIES_SV_API int SetTypeTimer(long type_timer);
UTILITIES_SV_API int SetTypeTimer(int8_t type_timer);
UTILITIES_SV_API int SetTypeTimer(int16_t type_timer);
UTILITIES_SV_API int SetTypeTimer(int32_t type_timer);
#ifdef WINDOWS_COMPILER
	UTILITIES_SV_API int SetTypeTimer(int64_t type_timer);
#endif
UTILITIES_SV_API int SetTypeTimer(uint8_t type_timer);
UTILITIES_SV_API int SetTypeTimer(uint16_t type_timer);
UTILITIES_SV_API int SetTypeTimer(uint32_t type_timer);
UTILITIES_SV_API int SetTypeTimer(uint64_t type_timer);

//----------------------------------------------------------------------------------------------------------------------------------------------
//	Настройка параметров вывода в log файл
//----------------------------------------------------------------------------------------------------------------------------------------------
UTILITIES_SV_API void EnableLogPrint();
UTILITIES_SV_API void DisableLogPrint();
UTILITIES_SV_API int SetPrintTimer(long print_timer);
UTILITIES_SV_API int SetPrintTimer(int8_t print_timer);
UTILITIES_SV_API int SetPrintTimer(int16_t print_timer);
UTILITIES_SV_API int SetPrintTimer(int32_t print_timer);
#ifdef WINDOWS_COMPILER
	UTILITIES_SV_API int SetPrintTimer(int64_t print_timer);
#endif
UTILITIES_SV_API int SetPrintTimer(uint8_t print_timer);
UTILITIES_SV_API int SetPrintTimer(uint16_t print_timer);
UTILITIES_SV_API int SetPrintTimer(uint32_t print_timer);
UTILITIES_SV_API int SetPrintTimer(uint64_t print_timer);

UTILITIES_SV_API void SetLogFile(std::string FileName);
UTILITIES_SV_API void SetLogFile(const char* FileName);
UTILITIES_SV_API int CreateLogFile();

//----------------------------------------------------------------------------------------------------------------------------------------------
//	Вывод информации на экран и в log файл
//----------------------------------------------------------------------------------------------------------------------------------------------
UTILITIES_SV_API void Type(const char *format, ...);
UTILITIES_SV_API void Print(const char *format, ...);

//----------------------------------------------------------------------------------------------------------------------------------------------
//	Вывод сообщения на экран
//----------------------------------------------------------------------------------------------------------------------------------------------
UTILITIES_SV_API std::string logStamp(long time_zone);
UTILITIES_SV_API std::string logStamp(int8_t time_zone);
UTILITIES_SV_API std::string logStamp(int16_t time_zone);
UTILITIES_SV_API std::string logStamp(int32_t time_zone);
#ifdef WINDOWS_COMPILER
	UTILITIES_SV_API std::string logStamp(int64_t time_zone);
#endif
UTILITIES_SV_API std::string logStamp(uint8_t time_zone);
UTILITIES_SV_API std::string logStamp(uint16_t time_zone);
UTILITIES_SV_API std::string logStamp(uint32_t time_zone);
UTILITIES_SV_API std::string logStamp(uint64_t time_zone);

UTILITIES_SV_API int TypeMessage(const char *format, ...);

UTILITIES_SV_API int TypeLine(long Number);
UTILITIES_SV_API int TypeLine(int8_t Number);
UTILITIES_SV_API int TypeLine(int16_t Number);
UTILITIES_SV_API int TypeLine(int32_t Number);
#ifdef WINDOWS_COMPILER
	UTILITIES_SV_API int TypeLine(int64_t Number);
#endif
UTILITIES_SV_API int TypeLine(uint8_t Number);
UTILITIES_SV_API int TypeLine(uint16_t Number);
UTILITIES_SV_API int TypeLine(uint32_t Number);
UTILITIES_SV_API int TypeLine(uint64_t Number);

UTILITIES_SV_API int TypeDoubleLine(long Number);
UTILITIES_SV_API int TypeDoubleLine(int8_t Number);
UTILITIES_SV_API int TypeDoubleLine(int16_t Number);
UTILITIES_SV_API int TypeDoubleLine(int32_t Number);
#ifdef WINDOWS_COMPILER
	UTILITIES_SV_API int TypeDoubleLine(int64_t Number);
#endif
UTILITIES_SV_API int TypeDoubleLine(uint8_t Number);
UTILITIES_SV_API int TypeDoubleLine(uint16_t Number);
UTILITIES_SV_API int TypeDoubleLine(uint32_t Number);
UTILITIES_SV_API int TypeDoubleLine(uint64_t Number);

//----------------------------------------------------------------------------------------------------------------------------------------------
//	Вывод сообщения в log файл
//----------------------------------------------------------------------------------------------------------------------------------------------
UTILITIES_SV_API int PrintMessage(const char *format, ...);

UTILITIES_SV_API int PrintLine(long Number);
UTILITIES_SV_API int PrintLine(int8_t Number);
UTILITIES_SV_API int PrintLine(int16_t Number);
UTILITIES_SV_API int PrintLine(int32_t Number);
#ifdef WINDOWS_COMPILER
	UTILITIES_SV_API int PrintLine(int64_t Number);
#endif
UTILITIES_SV_API int PrintLine(uint8_t Number);
UTILITIES_SV_API int PrintLine(uint16_t Number);
UTILITIES_SV_API int PrintLine(uint32_t Number);
UTILITIES_SV_API int PrintLine(uint64_t Number);

UTILITIES_SV_API int PrintDoubleLine(long Number);
UTILITIES_SV_API int PrintDoubleLine(int8_t Number);
UTILITIES_SV_API int PrintDoubleLine(int16_t Number);
UTILITIES_SV_API int PrintDoubleLine(int32_t Number);
#ifdef WINDOWS_COMPILER
	UTILITIES_SV_API int PrintDoubleLine(int64_t Number);
#endif
UTILITIES_SV_API int PrintDoubleLine(uint8_t Number);
UTILITIES_SV_API int PrintDoubleLine(uint16_t Number);
UTILITIES_SV_API int PrintDoubleLine(uint32_t Number);
UTILITIES_SV_API int PrintDoubleLine(uint64_t Number);


//==============================================================================================================================================
//	Конец файла
//==============================================================================================================================================


#endif //	__UTILITIES_LOG_H__
