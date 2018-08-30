#pragma once

#include "ToyScript/Module.h"

#include <vector>

namespace ToyScript
{
	class Context
	{
		std::vector<std::shared_ptr<Module>> _loadedModules;
	};
}