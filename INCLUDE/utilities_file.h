#ifndef __UTILITIES_FILE_H__
#define __UTILITIES_FILE_H__

//==============================================================================================================================================
//	����������� ���������� �������� �������
//==============================================================================================================================================
#include "utilities_sv_api.h"

//==============================================================================================================================================
//	����������� ����������� ���������  � ��������
//==============================================================================================================================================
#include <string>
#include <cstdint>

//==============================================================================================================================================
//	����������� ��������� ���������  � ��������
//==============================================================================================================================================

//==============================================================================================================================================
//	�������� ������� ������
//==============================================================================================================================================
//	������ UTILITIES_FILE
//==============================================================================================================================================
//	���������� � ������
//----------------------------------------------------------------------------------------------------------------------------------------------
bool FileExist(const char *fname);
bool FileExist(std::string fname);
long FileSize(const char *FileName);
long FileSize(std::string FileName);

//----------------------------------------------------------------------------------------------------------------------------------------------
//	������ �� �����
//----------------------------------------------------------------------------------------------------------------------------------------------
long MessageFromFile(const char *FileName, char *Message, long Size);
long MessageFromFile(std::string FileName, char *Message, long Size);
long MessageFromFile(const char *FileName, std::string &Message);
long MessageFromFile(std::string FileName, std::string &Message);


//==============================================================================================================================================
//	����� �����
//==============================================================================================================================================


#endif //	__UTILITIES_FILE_H__
