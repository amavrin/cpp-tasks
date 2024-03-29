#include "pch.h"
#include "CppUnitTest.h"
#include "..\SumSome\Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
	TEST_CLASS(UnitTests)
	{
	public:
		
		TEST_METHOD(TestVecSumSomePositive_LT)
		{
			vector<int> v{ 1,2,3,4,5 };
			int op = LT;
			Assert::IsTrue(sum_some(v, op, 4) == 6);
		}
		TEST_METHOD(TestVecSumSomeCorrect_LT)
		{
			vector<int> v{ 1,-2,3,4,5 };
			int op = LT;
			Assert::IsTrue(sum_some(v, op, 3) == -1);
		}
		TEST_METHOD(TestVecSumSomeZero_LT)
		{
			vector<int> v{ 0 };
			int op = LT;
			Assert::IsTrue(sum_some(v, op, 0) == 0);
		}
		TEST_METHOD(TestVecSumSomePositive_GT)
		{
			vector<int> v{ 1,2,3,4,5,6 };
			int op = GT;
			Assert::IsTrue(sum_some(v, op, 4) == 11);
		}
		TEST_METHOD(TestVecSumSomeCorrect_GT)
		{
			vector<int> v{ 1,-2,3,4,5,6 };
			int op = GT;
			Assert::IsTrue(sum_some(v, op, 5) == 6);
		}
		TEST_METHOD(TestVecSumSomeZero_GT)
		{
			vector<int> v{ 0 };
			int op = GT;
			Assert::IsTrue(sum_some(v, op, 0) == 0);
		}
		TEST_METHOD(TestVecSumSomePositive_EQ)
		{
			vector<int> v{ 1,2,3,4,5,6 };
			int op = EQ;
			Assert::IsTrue(sum_some(v, op, 4) == 4);
		}
		TEST_METHOD(TestVecSumSomeCorrect_EQ)
		{
			vector<int> v{ 1,-2,3,4,5,6 };
			int op = EQ;
			Assert::IsTrue(sum_some(v, op, 1) == 1);
		}
		TEST_METHOD(TestVecSumSomeZero_EQ)
		{
			vector<int> v{ 0 };
			int op = EQ;
			Assert::IsTrue(sum_some(v, op, 0) == 0);
		}
	};
}
