#include "pch.h"
#include "CppUnitTest.h"
#include "../5.3/5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace unit53
{
	TEST_CLASS(unit53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreNotEqual(h(1), 3.);
		}
	};
}
