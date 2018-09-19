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

		// 加载模块，之后可能会有在堆上分配静态变量
		void LoadModule(Module * module);
	};
}