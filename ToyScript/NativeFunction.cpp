#include "NativeFunction.h"

using namespace ToyScript;

void NativeFunction::Invoke(Thread &thread, std::vector<Variable &> &params, std::vector<Variable &> &rets)
{
	_nativeFunction(thread, params, rets);
}
