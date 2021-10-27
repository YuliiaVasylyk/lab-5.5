#include "pch.h"
#include "CppUnitTest.h"
#include "..\lab-5.5\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int depth;
			int a = f(0, 1, depth);
			Assert::AreEqual(0, a);
		}
	};
}
