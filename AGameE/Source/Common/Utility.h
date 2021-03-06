#pragma once
#ifndef UTILITY_H_
#define UTILITY_H_

#include<Windows.h>
#include<string>
#include<cassert>
#include<WinUser.h>
#include<tinyxml.h>
#include"TypeDef.h"
#include<map>
#include<memory>
#include"Timer.h"
#include<map>
#include<list>
#include<strstream>
#include<functional>
#include<optional>
#include"..\Debug\Debugger.h"

#define SAFE_DELETE(x) delete(x)
#define SAFE_DELETE_ARRAY(x) delete[](x)

inline std::wstring AnsiToWString(const std::string& str)
{
	WCHAR  buffer[512];
	MultiByteToWideChar(CP_ACP, 0, str.c_str(), -1, buffer, 512);
	return std::wstring(buffer);
}

#endif // !UTILITY_H_
