// SampleApplication.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include "CyclesAndBrnches.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Cycles::f();
	Cycles::PrintBoxSide(Cycles::TOP);
	Cycles::PrintBankSide(Cycles::RiverBank::RightBank);

	return 0;
}

