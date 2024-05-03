#include "pch.h"
#include "CppUnitTest.h"
#include "..\ExpandConstrict\Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
	const int ASIZE = 6;
	TEST_CLASS(UnitTests)
	{
	public:
		
		TEST_METHOD(TestExpandConstrict_GetFreeSpace_Correct)
		{
			uint array[ASIZE]{ 10, 4, 2, 1, 0, 0 };

			Assert::IsTrue(get_free_space(array, ASIZE) == 2);
		}
		TEST_METHOD(TestExpandConstrict_GetFreeSpace_NoZeroElem)
		{
			uint array[ASIZE]{ 10, 8, 7, 5, 4, 3 };

			Assert::IsTrue(get_free_space(array, ASIZE) == 0);
		}
		TEST_METHOD(TestExpandConstrict_Expand_Correct)
		{
			uint array[ASIZE]{ 10, 4, 2, 1, 0, 0 };
			bool res = expand(array, ASIZE, 2);
			uint arr[]{ 10, 4, 2, 2, 1, 0 };

			Assert::IsTrue(equals(array, arr, ASIZE));
			Assert::IsTrue(res);
		}
		TEST_METHOD(TestExpandConstrict_Expand_NoZero)
		{
			uint array[ASIZE]{ 10, 5, 3, 2, 2, 1 };
			bool res = expand(array, ASIZE, 4);
			uint arr[]{ 10, 5, 4, 3, 2, 2, 1};

			Assert::IsTrue((array, arr, ASIZE));
			Assert::IsFalse(res);
		}
		TEST_METHOD(TestExpandConstrict_Insert_Correct)
		{
			uint array[ASIZE]{ 10, 4, 2, 1, 0, 0 };
			bool res = insert(array, ASIZE, 7);
			uint arr[]{ 10, 7, 4, 2, 1, 0 };

			Assert::IsTrue(equals(array, arr, ASIZE));
			Assert::IsTrue(res);
		}
		TEST_METHOD(TestExpandConstrict_Insert_NoZero)
		{
			uint array[ASIZE]{ 10, 6, 5, 3, 2, 1 };
			bool res = insert(array, ASIZE, 7);
			uint arr[]{ 10, 6, 5, 3, 2, 1 };

			Assert::IsFalse(res);
		}
		TEST_METHOD(TestExpandConstrict_PopHead_Correct)
		{
			uint array[ASIZE]{ 10, 6, 5, 3, 2, 1 };
			uint elem = pop_head(array, ASIZE);
			Assert::IsTrue(elem == 10);
			uint arr[]{ 6, 5, 3, 2, 1, 0 };

			Assert::IsTrue(equals(array, arr, ASIZE));
		}
		TEST_METHOD(TestExpandConstrict_PopHead_EmptyArray)
		{
			uint array[ASIZE]{ 0, 0, 0, 0, 0, 0 };
			uint elem = pop_head(array, ASIZE);
			Assert::IsTrue(elem == 0); 
			uint arr[]{ 0, 0, 0, 0, 0, 0 };

			Assert::IsTrue(equals(array, arr, ASIZE));
		}
	};
}
