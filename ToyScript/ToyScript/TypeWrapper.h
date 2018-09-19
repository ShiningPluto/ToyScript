#pragma once

namespace ToyScript
{
	template <typename T>
	class TypeWrapper
	{
	protected:
		using NativeType = T;

		NativeType _value;

		template <typename... Types>
		TypeWrapper(Types&&... args)
			: _value(args)
		{

		}

	public:
		NativeType* unwrap()
		{
			return &_value;
		}


	};
}