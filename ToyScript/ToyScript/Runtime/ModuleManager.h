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

		// �ж�һ��module�Ƿ��Ѿ�����ǰ����ʱ����
		// TODO: ������ʶ��ͬModule��Key
		static bool HaveLoaded();

		// �Ӷ����Ƹ�ʽ����������ж�ȡModule
		static Module * LoadModuleFromBinary();

		static Module & BuildModuleFromSource();

		ModuleManager() = delete;

		static Type const& FindType(std::string const& name);

	public:
		static std::vector<Module*> GetBaseModules();
	};
}
