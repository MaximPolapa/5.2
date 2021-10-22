#include "pch.h"
#include "CppUnitTest.h"
#include "..\5.2\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double a;
			a = 1;
			A(4, 4, a);
			Assert::AreEqual(1., a);
		}
	};
}
