#pragma once

#include <ToyScript/Class.h>
#include <ToyScript/Module.h>

#include <memory>

using namespace ToyScript;

namespace CoreLib
{
	std::shared_ptr<Module> buildModule();
}