#include "pch.h"
#include "CppUnitTest.h"
#include "..\other_way\Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
	TEST_CLASS(UnitTests)
	{
	public:		
		TEST_METHOD(TestOtherWayCorrect)
		{
			const size_t CNT = 3;
			int array[CNT]{ 0 };

			fill_other_way(&array[CNT - 1], CNT, 1);

			for (int i = 0; i < CNT; i++)
			{
				Assert::IsTrue(array[i] == 1);
			}
		}
		TEST_METHOD(TestOtherWayManyNumbers)
		{
			const size_t CNT = 3;
			int array[CNT]{ 1,2,3 };

			fill_other_way(&array[CNT - 1], CNT, 3);

			for (int i = 0; i < CNT; i++)
			{
				Assert::IsTrue(array[i] == 3);
			}
		}
		TEST_METHOD(TestOtherWayNegative)
		{
			const size_t CNT = 3;
			int array[CNT]{ 1,-2,3 };

			fill_other_way(&array[CNT - 1], CNT, -3);

			for (int i = 0; i < CNT; i++)
			{
				Assert::IsTrue(array[i] == -3);
			}
		}
	};
}
