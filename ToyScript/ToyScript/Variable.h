#pragma once

#include "ToyScript/Type.h"

#include <memory>

namespace ToyScript
{
	class Type;

	class Variable
	{
		std::shared_ptr<Type> _type;
		void * _address;

	public:
		void * GetAddress()
		{
			return _address;
		}

		const std::shared_ptr<Type> GetType()
		{
			return _type;
		}
	};
}