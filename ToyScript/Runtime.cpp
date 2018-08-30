#include "ToyScript/Runtime/Runtime.h"

using namespace ToyScript;

namespace
{
	bool _initialized = false;
}

void Runtime::Init()
{
	if (_initialized)
		return;

	// TODO
}

std::shared_ptr<Thread> Runtime::CreateThread()
{
	if (!_initialized)
		Runtime::Init();

	return std::shared_ptr<Thread>();
}
