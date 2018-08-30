#pragma once

#include "ToyScript/AST/NamespaceStatement.h"

#include <vector>
#include <string>

namespace ToyScript
{
	class AST
	{
	public:
		std::vector<std::string> dependences;

		std::vector<NamespaceStatement> files;
	};
}