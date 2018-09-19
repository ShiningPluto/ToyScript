#pragma once

#include <ToyScript/Module.h>

#include <vector>
#include <memory>

namespace ToyScript
{
	class Module;
	class Thread;

	class Context
	{
		std::vector<Module*> _loadedModules;

		std::unique_ptr<Thread> _mainThread;

	public:
		static Context* Create();

	public:
		Thread* MainThread();

	private:
		Context();

		// ����ģ�飬֮����ܻ����ڶ��Ϸ��侲̬����
		void LoadModule(Module * module);
	};
}