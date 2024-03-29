#include "pch.h"
#include "CppUnitTest.h"
#include "..\SumEvens\task.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
	TEST_CLASS(UnitTests)
	{
	public:		
		TEST_METHOD(TestSumEvenPostive)
		{
			int array[4]{ 1, 11, 17, 8 };
			Assert::IsTrue(sum_evens(array, size_t(4)) == 8);
		}
		TEST_METHOD(TestSumEvenZero)
		{
			int array[1]{ 0 };
			Assert::IsTrue(sum_evens(array, size_t(1)) == 0);
		}
		TEST_METHOD(TestSumEvenCorrect)
		{
			int array[5]{ 1, 11, 17, 8, -12};
			Assert::IsTrue(sum_evens(array, size_t(5)) == -4);
		}
	};
}
