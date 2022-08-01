#include "core.h"

int GetEntryPoint()
{
	static int addr = reinterpret_cast<__int64>(GetModuleHandle(nullptr));
	return addr;
}

int _addr(int addr)
{
	return GetEntryPoint() - 0x8B0000 + addr;
}
