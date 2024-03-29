#include "pch.h"
#include "CppUnitTest.h"
#include "..\SumItUp\task.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
	TEST_CLASS(UnitTests)
	{
	public:	
		TEST_METHOD(TestSumCorrectNumbers)
		{
			int arr[]{ 1, 2, -3, 4, 5 };
			Assert::IsTrue(sum(arr, size_t(5)) == 9);
		}
		TEST_METHOD(TestSumZeroNumber)
		{
			int arr[]{ 0 };
			Assert::IsTrue(sum(arr, size_t(0)) == 0);
		}
		TEST_METHOD(TestSumPositiveNumbers)
		{
			int arr[]{ 5, 5 };
			Assert::IsTrue(sum(arr, size_t(2)) == 10);
		}
	};
}
