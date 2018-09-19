#pragma once

#include "ToyScript/Function.h"
#include "ToyScript/Variable.h"
#include "ToyScript/Runtime/Thread.h"

#include <functional>
#include <vector>

namespace ToyScript
{
	using FunctionWrapper = std::function<void(Thread &, std::vector<Variable &> &, std::vector<Variable &> &)>;

	class NativeFunction : public Function
	{
		FunctionWrapper _nativeFunction;

		NativeFunction(FunctionWrapper wrapper)
		{
			_category = FunctionCategory::Native;
			_nativeFunction = wrapper;
		}

	public:
		void Invoke(Thread &thread, std::vector<Variable&>& params, std::vector<Variable&>& rets) override;
	};
}