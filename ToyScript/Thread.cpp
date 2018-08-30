#include "Thread.h"

using namespace ToyScript;

void Thread::InvokeFunction(Function & func, std::vector<Variable&>& params, std::vector<Variable&>& rets)
{
	func.Invoke(*this, params, rets);
}
