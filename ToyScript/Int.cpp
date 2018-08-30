#include "Int.h"

using namespace ToyScript;

void Int::AddEqual(Thread & thread, std::vector<Variable&> &params, std::vector<Variable&>& rets)
{
	int * lhs = static_cast<int*>(params[0].address());
	int * rhs = static_cast<int*>(params[1].address());
	*lhs = *lhs + *rhs;
}
