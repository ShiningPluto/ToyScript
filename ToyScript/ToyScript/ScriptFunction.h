#pragma once

#include "ToyScript/Function.h"

namespace ToyScript
{
	class ScriptFunction : public Function
	{
	public:
		ScriptFunction(std::string const& name)
		{
			_category = Category::Script;
			_name = name;
		}
	};
}