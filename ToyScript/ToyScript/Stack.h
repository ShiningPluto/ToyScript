#pragma once

#include "ToyScript/StackFrame.h"

#include <stack>

namespace ToyScript
{
	class Stack
	{
		std::stack<StackFrame> _frames;

	public:
		Stack();
	};
}