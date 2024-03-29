#include "pch.h"
#include "CppUnitTest.h"
#include "..\VectorSum\Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
	TEST_CLASS(UnitTests)
	{
	public:
		
		TEST_METHOD(TestVecSumCorrect)
		{
			vector<int> v{ 1,2,3 };
			Assert::IsTrue(sum(v) == 6);

		}
		TEST_METHOD(TestVecSumZero)
		{
			vector<int> v{ 0 };
			Assert::IsTrue(sum(v) == 0);
		}
		TEST_METHOD(TestVecSumNegativeNumbers)
		{
			vector<int> v{ -8,1,2,3 };
			Assert::IsTrue(sum(v) == -2);
		}
	};
}
