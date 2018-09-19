#include <ToyScript/Int.h>

using namespace ToyScript;

void Int::AddEqual(Thread & thread, std::vector<Variable&> &params, std::vector<Variable&>& rets)
{
	int * lhs = static_cast<int*>(params[0].GetAddress());
	int * rhs = static_cast<int*>(params[1].GetAddress());
	*lhs = *lhs + *rhs;
}
