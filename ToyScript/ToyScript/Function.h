#pragma once

// #include <ToyScript/Type.h>

#include <vector>
#include <string>

namespace ToyScript
{
	class Type;
	class Thread;
	class Variable;

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
		virtual void Invoke(Thread &thread, std::vector<Variable&>& params, std::vector<Variable&>& rets) = 0;
	};
}