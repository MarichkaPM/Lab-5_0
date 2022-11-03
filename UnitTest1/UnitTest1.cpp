
#include "pch.h"
#include "CppUnitTest.h"
#include "../Laboratorna 5_0/Lab 5_0.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = h(2, -3.6);
			Assert::AreEqual(t, 0.167331, 0.0001);
		}
	};
}
