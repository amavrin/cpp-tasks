#include "pch.h"
#include "CppUnitTest.h"
#include "..\2-dimentioanal\Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
	TEST_CLASS(UnitTests)
	{
	public:		
		TEST_METHOD(Test2DimPositive)
		{
			vector<vector<int>> v
			{
				{1, 4, 3, 4, 0, -4},
				{3, 0, 4, 3, 0, 0},
				{0, 0, 0, 0, 4, -1}
			};
			Assert::IsTrue(count_equals(v, 4) == 4);
		}
		TEST_METHOD(Test2DimNegative)
		{
			vector<vector<int>> v
			{
				{1, 4, 3, 4, 0, -4},
				{3, 0, 4, 3, 0, 0},
				{0, 0, 0, 0, 4, -1}
			};
			Assert::IsTrue(count_equals(v, -1) == -1);
		}
		TEST_METHOD(Test2DimZero)
		{
			vector<vector<int>> v
			{
				{1, 4, 3, 4, 0, -4},
				{3, 0, 4, 3, 0, 0},
				{0, 0, 0, 0, 4, -1}
			};
			Assert::IsTrue(count_equals(v, 0) == 0);
		}
	};
}
