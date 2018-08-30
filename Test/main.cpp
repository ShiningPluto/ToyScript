#include "ToyScript/Runtime/Runtime.h"

int main()
{
	ToyScript::Runtime::Init();

	auto thread = ToyScript::Runtime::CreateThread("Text.txt");


}