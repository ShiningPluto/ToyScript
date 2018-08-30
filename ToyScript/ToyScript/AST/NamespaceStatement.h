#pragma once

#include "ToyScript/AST/Statement.h"

#include <vector>
#include <string>

namespace ToyScript
{
	class NamespaceStatement
	{
	public:
		std::string name;

		std::vector<NamespaceStatement> subNamespaces;

		std::vector<VariableDefStatement> varDefs;

		std::vector<FunctionDefStatement> funcDefs;
	};
}