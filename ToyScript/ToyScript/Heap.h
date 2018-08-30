#pragma once

#include "ToyScript/Variable.h"

#include <vector>

namespace ToyScript
{
	class Heap
	{
		std::vector<int8_t> _data;

	public:
		Heap(size_t initialCapacity = 1024)
			: _data(initialCapacity)
		{

		}

		void Allocate(Variable &var);

		void Release(Variable &var);
	};
}