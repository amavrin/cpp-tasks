#include "pch.h"
#include "CppUnitTest.h"
#include "..\give_me_pointer\Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
	TEST_CLASS(UnitTests)
	{
	public:
		
		TEST_METHOD(TestGivePointerCorrect)
		{
			int a1[5]{ 1,2,3,2,1 };
			int a2[5]{ 3,3,3,3,3 };

			int* p1 = find_elem(a1, 5, 2);
			int* p2 = find_elem(a2, 5, 2);

			Assert::IsTrue(p1 == &a1[1]);
			Assert::IsTrue(p2 == nullptr);
		}
		TEST_METHOD(TestGivePointerZero)
		{
			int a1[5]{ 1,2,3,2,1 };
			int a2[5]{ 1,1,1,0,0 };

			int* p1 = find_elem(a1, 5, 2);
			int* p2 = find_elem(a2, 5, 0);

			Assert::IsTrue(p1 == &a1[1]);
			Assert::IsTrue(p2 == &a2[3]);
		}
		TEST_METHOD(TestGivePointerNegative)
		{
			int a1[5]{ 1,2,3,2,1 };
			int a2[5]{ -3,3,3,3,-3 };

			int* p1 = find_elem(a1, 5, 2);
			int* p2 = find_elem(a2, 5, -3);

			Assert::IsTrue(p1 == &a1[1]);
			Assert::IsTrue(p2 == &a2[0]);
		}
	}; 
}
