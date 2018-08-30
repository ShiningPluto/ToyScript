#pragma once

#include <ToyScript/MemberFunction.h>

#include <string>

namespace ToyScript
{
	enum TypeCategory
	{
		Builtin,
		Struct,
		Class
	};

	class Type
	{
	protected:
		TypeCategory _category;

	private:
		std::size_t _size;
		std::string _name;
		std::string _fullName;

	public:
		Type(std::string const& name, std::size_t size);

		void AddMemberFunction(std::shared_ptr<MemberFunction> function);
	};
}