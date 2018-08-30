#include "ToyScript/Module.h"

using namespace ToyScript;

std::shared_ptr<Function> Module::AddFunction(Function::Category category, std::string const& name)
{
	_globalFuncs.emplace_back(category, name);
	//return _globalFuncs.back();
	return nullptr;
}
