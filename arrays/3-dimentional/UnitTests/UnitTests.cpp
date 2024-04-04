#include "pch.h"
#include "CppUnitTest.h"
#include "..\3-dimentional\Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
	TEST_CLASS(UnitTests)
	{
	public:
		TEST_METHOD(TestSum3DimenPositive)
		{
			int array[2][2][2]
			{
			{{1,2}, {3,4}},
			{{5,6}, {7,8}}
			};

			Assert::IsTrue(sum3(array) == 36);
		}
		TEST_METHOD(TestSum3DimenZero)
		{
			int array[2][2][2]
			{
			{{0,0}, {0,0}},
			{{0,0}, {0,0}}
			};

			Assert::IsTrue(sum3(array) == 0);
		}
		TEST_METHOD(TestSum3DimenCorrect)
		{
			int array[2][2][2] =
			{
				{{-1, 2}, {3, 4}},
				{{5, 6}, {7, 8}}
			};

			Assert::IsTrue(sum3(array) == 34);
		}
	};
}
