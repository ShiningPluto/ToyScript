#include "CoreLib.h"

#include <ToyScript/MemberFunction.h>


std::shared_ptr<Module> CoreLib::buildModule()
{
	auto module = std::make_shared<Module>("CoreLib");
	
	auto int32 = std::make_shared<Type>("Int32", sizeof(int));

	auto add = std::make_shared<MemberFunction>("Add", int32);
	
	return module;
}
