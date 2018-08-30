#pragma once

#include "ToyScript/Type.h"

namespace ToyScript
{
	class Class : public Type
	{
	public:
		Class(std::string const& name, std::uint32_t size)
			: Type(name, size)
		{
			_category = TypeCategory::Class;
		}
	};
}