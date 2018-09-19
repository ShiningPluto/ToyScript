#pragma once

#include <ToyScript/Stack.h>
#include <ToyScript/Function.h>
#include <ToyScript/Variable.h>
#include <ToyScript/Runtime/Context.h>

#include <memory>
#include <vector>

namespace ToyScript
{
	class Function;
	class Context;
	class Variable;

	class Thread
	{
	public:
		static Thread* Create(Context* context);

	private:
		std::unique_ptr<Stack> _stack;

		Context* _context;

	public:
		void InvokeFunction(Function &func, std::vector<Variable&> &params, std::vector<Variable&> &rets);

	private:
		Thread() = default;
	};
}