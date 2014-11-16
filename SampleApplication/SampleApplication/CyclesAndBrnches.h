#ifndef __CYCLESANDBRANCHES_H__
#define __CYCLESANDBRANCHES_H__

namespace Cycles
{
	enum BoxSide
	{
		TOP		= 1,
		BOTTOM,
		LEFT,
		RIGHT
	};

	enum class RiverBank
	{
		LeftBank,
		RightBank
	};

	void f();

	void PrintBoxSide(BoxSide box_side);
	void PrintBankSide(RiverBank reiver_bank);

} // Cycles


#endif