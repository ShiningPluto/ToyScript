#include "ToyScript/Runtime/ModuleManager.h"

#include "ToyScript/AST/AST.h"

using namespace ToyScript;

bool ModuleManager::HaveLoaded()
{
	return false;
}

Module * ModuleManager::LoadModuleFromBinary()
{
	if (HaveLoaded())
		return nullptr;

	// TODO

}

Module & ModuleManager::BuildModuleFromSource()
{
	// 构建语法树
	AST ast = AST();

	_modules.emplace_back();

	Module& module = _modules.back();
	
	// Add Module Dependence
	for (auto it = ast.dependences.cbegin(); it != ast.dependences.cend(); ++it)
		module.AddDependence(*it);

	for (auto it = ast.files.cbegin(); it != ast.files.cend(); ++it)
	{
		for (auto varDef = it->varDefs.cbegin(); varDef != it->varDefs.cend(); ++varDef)
		{
			Type const& type = FindType(varDef->typeName);

			module.AddGlobalVariable(type, varDef->variableName);
		}

		for (auto funcDef = it->funcDefs.cbegin(); funcDef != it->funcDefs.cend(); ++funcDef)
		{
			Function& func = module.AddFunction(Function::Category::Script, funcDef->funcName);

		}

	}



	// TODO: 在此处插入 return 语句
}

Type const& ModuleManager::FindType(std::string const& name)
{
	// TODO: 在此处插入 return 语句
}
