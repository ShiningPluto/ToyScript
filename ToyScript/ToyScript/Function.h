#pragma once

#include "ToyScript/Type.h"
#include "ToyScript/Runtime/Thread.h"

#include <vector>
#include <string>

namespace ToyScript
{
	enum FunctionCategory
	{
		Native,
		Script
	};

	class Function
	{
	public:


	protected:
		FunctionCategory _category;
		std::vector<Type> _parameters;
		std::vector<Type> _returns;
		std::string _name;

	public:
		//virtual void Invoke(Thread &thread, std::vector<Variable&>& params, std::vector<Variable&>& rets) = 0;
	};
}