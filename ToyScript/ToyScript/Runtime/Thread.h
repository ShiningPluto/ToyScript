#pragma once

#include "ToyScript/Stack.h"
#include "ToyScript/Function.h"
#include "ToyScript/Variable.h"
#include "ToyScript/Runtime/Context.h"

#include <memory>
#include <vector>

namespace ToyScript
{
	class Thread
	{
		std::unique_ptr<Stack> _stack;

		std::shared_ptr<Context> _context;

	public:
		void InvokeFunction(Function &func, std::vector<Variable&> &params, std::vector<Variable&> &rets);
	};
}