#pragma once

#include "ToyScript/Module.h"

#include <vector>

namespace ToyScript
{
	class Context;

	class ModuleManager
	{
		static std::vector<std::unique_ptr<Module>> _baseModules;

		static std::vector<Module> _modules;

		// 判断一个module是否已经被当前运行时加载
		// TODO: 决定标识不同Module的Key
		static bool HaveLoaded();

		// 从二进制格式保存的数据中读取Module
		static Module * LoadModuleFromBinary();

		static Module & BuildModuleFromSource();

		ModuleManager() = delete;

		static Type const& FindType(std::string const& name);

	public:
		static std::vector<Module*> GetBaseModules();
	};
}
