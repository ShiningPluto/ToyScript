#pragma once

#include <ToyScript/Function.h>

#include <memory>
#include <string>

namespace ToyScript
{
	class Function;
	class Type;

	class MemberFunction : public Function
	{
	public:
		std::shared_ptr<Type> _ownerType;

		MemberFunction(std::string const& name, std::shared_ptr<Type> const& ownerType);
	};
}