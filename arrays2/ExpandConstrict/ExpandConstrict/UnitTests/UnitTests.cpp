#include "pch.h"
#include "CppUnitTest.h"
#include "..\ExpandConstrict\Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
	TEST_CLASS(UnitTests)
	{
	public:
		
		TEST_METHOD(TestExpandConstrict_GetFreeSpace_Correct)
		{
			uint array[ASIZE]{ 10, 4, 2, 1, 0, 0 };
			// print_array(array, ASIZE); // prints [10, 4, 2, 1, 0, 0]
			Assert::IsTrue(get_free_space(array, ASIZE) == 2);
		}
		TEST_METHOD(TestExpandConstrict_GetFreeSpace_NoZeroElem)
		{
			uint array[ASIZE]{ 10, 8, 7, 5, 4, 3 };
			// print_array(array, ASIZE); // prints [10, 4, 2, 1, 0, 0]
			Assert::IsTrue(get_free_space(array, ASIZE) == false);
		}
		TEST_METHOD(TestExpandConstrict_Expand_Correct)
		{
			uint array[ASIZE]{ 10, 4, 2, 1, 0, 0 };
			expand(array, ASIZE, 2);
			// print_array(array, ASIZE); // prints [10, 4, 2, 2, 1, 0]
			uint a2[]{ 10, 4, 2, 2, 1, 0 };
			Assert::IsTrue(equals(array, a2, ASIZE));
		}
		TEST_METHOD(TestExpandConstrict_Expand_NoZeroElem)
		{
			uint array[ASIZE]{ 10, 5, 3, 2, 2, 1 };
			expand(array, ASIZE, 4);
			// print_array(array, ASIZE); // prints [10, 4, 2, 2, 1, 0]
			uint a2[]{ 10, 5, 4, 3, 2, 2, 1};
			Assert::IsFalse(equals(array, a2, ASIZE));
		}
		TEST_METHOD(TestExpandConstrict_Insert_Correct)
		{
			uint array[ASIZE]{ 10, 4, 2, 1, 0, 0 };
			insert(array, ASIZE, 7);
			// print_array(array, ASIZE); // prints [10, 7, 4, 2, 2, 1]
			uint a3[]{ 10, 7, 4, 2, 1, 0 };
			Assert::IsTrue(equals(array, a3, ASIZE));
			Assert::IsTrue(insert(array, ASIZE, 100));
		}
		TEST_METHOD(TestExpandConstrict_Insert_NoZero)
		{
			uint array[ASIZE]{ 10, 6, 5, 3, 2, 1 };
			insert(array, ASIZE, 7);
			// print_array(array, ASIZE); // prints [10, 7, 4, 2, 2, 1]
			uint a3[]{ 10, 7, 6, 5, 3, 2 };
			Assert::IsFalse(equals(array, a3, ASIZE));
		}
		TEST_METHOD(TestExpandConstrict_PopHead_Correct)
		{
			uint array[ASIZE]{ 10, 6, 5, 3, 2, 1 };
			uint elem = pop_head(array, ASIZE);
			Assert::IsTrue(elem == 10);
			uint a4[]{ 6, 5, 3, 2, 1, 0 };
			Assert::IsTrue(equals(array, a4, ASIZE));
		}
		TEST_METHOD(TestExpandConstrict_PopHead_EmptyArray)
		{
			uint array[ASIZE]{ 0, 0, 0, 0, 0, 0 };
			uint elem = pop_head(array, ASIZE);
			Assert::IsTrue(elem == 0); 
			uint a4[]{ 0, 0, 0, 0, 0, 0 };
			Assert::IsTrue(equals(array, a4, ASIZE)); 
		}
	};
}
