#include "stdafx.h"

#include "CyclesAndBrnches.h"

#include <iostream>

namespace Cycles
{

	void f()
	{
		size_t i = 0;
		do
		{
			std::cout << "While cycle: " << i << std::endl;
			++i;
		} while (i < 5);

		std::cout << std::endl << "\n";

		for (size_t j = 0; j < 5; ++j)
		{
			std::cout << "For cycle: " << j << std::endl;
		}

		std::cout << std::endl << "\n";

		i = 0;
		while (i < 5)
		{
			std::cout << "While cycle: " << i << std::endl;
			++i;
		}

	}


	void PrintBoxSide(BoxSide box_side)
	{
		switch (box_side)
		{
		case TOP:
			std::cout << "Top" << std::endl;
			break;
		case BOTTOM:
			std::cout << "Bottom" << std::endl;
			break;
		case LEFT:
			std::cout << "LEFT" << std::endl;
			break;
		case RIGHT:
			std::cout << "RIGHT" << std::endl;
			break;
		default:
			std::cout << "Wrong value. Please try again later." << std::endl;
			break;
		}
	}

	void PrintBankSide(RiverBank reiver_bank)
	{
		if (reiver_bank == RiverBank::LeftBank)
			std::cout << "Left bank" << std::endl;
		else if (reiver_bank == RiverBank::RightBank)
			std::cout << "Right bank" << std::endl;

		// code
	}

} // Cycles