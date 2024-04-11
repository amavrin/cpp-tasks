#include "pch.h"
#include "CppUnitTest.h"
#include "..\FindFirstLess\Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestы
{
	TEST_CLASS(UnitTestы)
	{
	public:
		
		TEST_METHOD(TestFindFirstLess_Correct)
		{
			int ordered[]{ 10, 6, 4, 2, -3 };
			Assert::IsTrue(find_first_less(ordered, 5, 5) == 2);
		}
		TEST_METHOD(TestFindFirstLess_Zero)
		{
			int ordered[]{ 10, 6, 4, 2, 0 };
			Assert::IsTrue(find_first_less(ordered, 5, 1) == 4);
		}
		TEST_METHOD(TestFindFirstLess_Negative)
		{
			int ordered[]{ 10, 6, 4, 2, -3 };
			Assert::IsTrue(find_first_less(ordered, 5, -2) == 4);
		}
		TEST_METHOD(TestFindFirstLess_NoMatch)
		{
			int ordered[]{ 10, 6, 4, 2, -3 };
			Assert::IsTrue(find_first_less(ordered, 5, -5) == -1);
		}
	};
}
