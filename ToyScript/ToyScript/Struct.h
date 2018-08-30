#pragma once

#include "ToyScript/Type.h"

#include <vector>

namespace ToyScript
{
	class Struct : public Type
	{
		std::vector<Type> _fields;

		std::vector<Type> _publicFields;

		std::vector<Type> _privateFields;

		std::vector<Type> _protectedFields;

		Struct()
		{
			_category = TypeCategory::Struct;
		};
	};
}