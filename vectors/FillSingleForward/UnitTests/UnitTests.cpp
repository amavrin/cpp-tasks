#include "pch.h"
#include "CppUnitTest.h"
#include "..\FillSingleForward\Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
	TEST_CLASS(UnitTests)
	{
	public:	
		TEST_METHOD(TestFillSingleFor_EmptyVector)
		{
			vector<unsigned int> v;
			Assert::IsTrue(fill_forward(v));
			Assert::IsTrue(v.empty());
		}
		TEST_METHOD(TestFillSingleFor_AllZero)
		{
			vector<unsigned int> v0{ 0,0,0,0 };
			vector<unsigned int> expected{ 0,0,0,0 };

			bool res = fill_forward(v0);

			Assert::IsTrue(v0 == expected);
			Assert::IsTrue(res);
		}
		TEST_METHOD(TestFillSingleFor_SingleNonZero)
		{
			vector<unsigned int> v0{ 0, 0, 0, 4, 0, 0, 0, 0};
			vector<unsigned int> expected{ 0, 0, 0, 4, 3, 2, 1, 0};

			bool res = fill_forward(v0);

			Assert::IsTrue(v0 == expected);
			Assert::IsTrue(res);
		}
		TEST_METHOD(TestFillSingleFor_MultipleNonZero)
		{
			vector<unsigned int> v0 { 0, 0, 0, 4, 4, 0, 0, 0 };
			vector<unsigned int> expected{ 0, 0, 0, 4, 4, 0, 0, 0 };

			bool res = fill_forward(v0);

			Assert::IsFalse(fill_forward(v0));
		}
		TEST_METHOD(TestFillSingleFor_NonZeroAtStart)
		{
			vector<unsigned int> v0{ 4, 3, 2, 1, 0 };
			vector<unsigned int> expected{ 4, 3, 2, 1, 0 };

			Assert::IsTrue(v0 == expected);
		}
		TEST_METHOD(TestFillSingleFor_NonZeroAtEnd)
		{
			vector<unsigned int> v0{ 0, 0, 0, 0, 4 };
			vector<unsigned int> expected{ 0, 0, 0, 0, 4 };

			bool res = fill_forward(v0);

			Assert::IsTrue(v0 == expected);
			Assert::IsTrue(res);
		}
	};
}
