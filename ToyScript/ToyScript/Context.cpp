#include <ToyScript/Runtime/Context.h>
#include <ToyScript/Runtime/Thread.h>
#include <ToyScript/Runtime/ModuleManager.h>

using namespace ToyScript;

Context* ToyScript::Context::Create()
{
	auto result = new Context();

	result->_mainThread.reset(Thread::Create(result));

	auto baseModules = ModuleManager::GetBaseModules();
	for (int i = 0; i < baseModules.size(); ++i)
		result->LoadModule(baseModules[i]);

	return result;
}

Thread * ToyScript::Context::MainThread()
{
	return _mainThread.get();
}

Context::Context()
{

}

void ToyScript::Context::LoadModule(Module * module)
{
	if (module == nullptr)
		return;

	//if (_loadedModules.)
}
