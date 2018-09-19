#include <ToyScript/Runtime/Thread.h>

using namespace ToyScript;

Thread * ToyScript::Thread::Create(Context * context)
{
	auto result = new Thread();
	
	result->_context = context;

	return result;
}

void Thread::InvokeFunction(Function & func, std::vector<Variable&>& params, std::vector<Variable&>& rets)
{
	func.Invoke(*this, params, rets);
}
