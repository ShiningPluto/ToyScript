#pragma once

#include <ToyScript/TypeWrapper.h>

#include <memory>

namespace CoreLib
{
	class Int32Wrapper : ToyScript::TypeWrapper<int>
	{
		using Base = ToyScript::TypeWrapper<int>;

		void Init(NativeType const& value)
		{
			_value = value;
		}

		static void Init(Int32Wrapper *a, NativeType const& v)
		{
			std::uninitialized_fill_n((NativeType*)a, 1, v);
		}

		template <typename... Types>
		Int32Wrapper(Types... args)
			: Base(args)
		{

		}

	public:

		static void Add(NativeType* lhs, NativeType* rhs, NativeType* ret)
		{
			 *ret = *lhs + *rhs;
		}

		static void Add(Int32Wrapper *ret, Int32Wrapper *lhs, Int32Wrapper *rhs)
		{
			NativeType v = lhs->_value + rhs->_value;
			::new(ret) Int32Wrapper(v);
		}

		static void Add(void* stackPtr)
		{

		}
	};
}