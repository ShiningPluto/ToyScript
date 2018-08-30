#pragma once

#include <string>
#include <vector>

namespace ToyScript
{
	struct Statement
	{
		enum Category
		{
			VariableDef,
			FunctionDef,
		};
		Category category;
	};

	struct VariableDefStatement : public Statement
	{
		std::string typeName;
		std::string variableName;
	};

	struct FunctionDefStatement : public Statement
	{
		std::string funcName;
		std::vector<VariableDefStatement> params;
		std::vector<VariableDefStatement> rets;
		std::vector<Statement*> content;
	};
}