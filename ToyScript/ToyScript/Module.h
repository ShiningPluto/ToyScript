#pragma once

#include "ToyScript/HeapVariable.h"
#include "ToyScript/Function.h"
#include "ToyScript/Type.h"

#include <string>
#include <vector>
#include <memory>

namespace ToyScript
{
	class Function;

	enum FunctionCategory;

	enum TypeCategory;

	class Module
	{
	public:
		using KeyType = std::string;

		KeyType _id;

		std::vector<KeyType> _dependences;

		std::vector<HeapVariable> _globalVars;

		std::vector<Function> _globalFuncs;

		std::vector<Type> _types;

		Type& AddTypeEntry(TypeCategory category, std::string& name, std::string& fullName);

		HeapVariable& AddGlobalVariable(Type const& type, std::string const& name);

		void AddDependence(KeyType const& id);

		std::shared_ptr<Function> AddFunction(FunctionCategory category, std::string const& name);

		Module(KeyType const& id);
	};
}