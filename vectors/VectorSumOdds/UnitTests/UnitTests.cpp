#include "pch.h"
#include "CppUnitTest.h"
#include "..\VectorSumOdds\Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
	TEST_CLASS(UnitTests)
	{
	public:
		
		TEST_METHOD(TestVecOddSumCorrect)
		{
			vector<int> v{ -1, 3, 4, 7 }; 
			Assert::IsTrue(sum_odds(v) == 9);
		}
		TEST_METHOD(TestVecOddSumZero)
		{
			vector<int> v{ 0 };
			Assert::IsTrue(sum_odds(v) == 0);
		}
		TEST_METHOD(TestVecOddSumPositive)
		{
			vector<int> v{ 3, 4, 7, 10 };
			Assert::IsTrue(sum_odds(v) == 10);
		}
	};
}
