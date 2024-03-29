#include "pch.h"
#include "CppUnitTest.h"
#include "..\SumSelected\task.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
	TEST_CLASS(UnitTests)
	{
	public:	
		TEST_METHOD(TestSumSelectedCorrect)
		{
			int array[]{ 1, 2, 10, 20, -5, -100 };
			int selector[]{ 1, 3, 4 };
			Assert::IsTrue(sum_selected(array, selector, 3) == 17);
		}
		TEST_METHOD(TestSumSelectedZero)
		{
			int array[]{ 0 };
			int selector[]{ 0 };
			Assert::IsTrue(sum_selected(array, selector, 1) == 0);
		}
		TEST_METHOD(TestSumSelectedPositive)
		{
			int array[]{ 1, 2, 10, 20, };
			int selector[]{ 1, 3 };
			Assert::IsTrue(sum_selected(array, selector, 2) == 22);
		}
	};
}
