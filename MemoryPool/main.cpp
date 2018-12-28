#include "Allocator.h"
using namespace MP;

int main()
{
	char* data = new char[112];
	delete[] data;
	return 0;
}