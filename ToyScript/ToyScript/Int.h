#pragma once

#include "ToyScript/Runtime/Thread.h"
#include "ToyScript/Variable.h"

#include <memory>
#include <vector>

namespace ToyScript
{
	class Int
	{
	public:
		static void AddEqual(Thread &thread, std::vector<Variable&> &params, std::vector<Variable&> &rets);
	};
}