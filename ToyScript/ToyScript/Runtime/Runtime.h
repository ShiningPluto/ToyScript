#pragma once

#include "ToyScript/Runtime/Thread.h"

#include <memory>

namespace ToyScript
{
	namespace Runtime
	{
		void Init();

		std::shared_ptr<Thread> CreateThread();

		// 从单一文件创建运行线程，将会加载默认的系统模块
		// 从文件创建入口模块
		std::shared_ptr<Thread> CreateThread(std::string const& filePath);

		// 从某个模块创建运行线程，会加载依赖的模块和默认系统模块
		std::shared_ptr<Thread> CreateThread(Module const& module);
	};
}