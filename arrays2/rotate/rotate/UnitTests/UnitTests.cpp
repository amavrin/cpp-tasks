#include "pch.h"
#include "CppUnitTest.h"
#include "..\rotate\Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
	TEST_CLASS(UnitTests)
	{
	public:		
		TEST_METHOD(TestRotateArray_Correct_FWD)
		{
			char arr[]{ 'a', 'b', 'c', 'd' };

			rotate(arr, 4, FWD);
			Assert::IsTrue(arr[0] == 'd' && arr[1] == 'a' && arr[2] == 'b' && arr[3] == 'c');
		}
		TEST_METHOD(TestRotateArray_Correct_BACK)
		{
			char arr[]{ 'a', 'b', 'c', 'd' };

			rotate(arr, 4, BACK);
			Assert::IsTrue(arr[0] == 'b' && arr[1] == 'c' && arr[2] == 'd' && arr[3] == 'a');
		}
		TEST_METHOD(TestRotateArray_Correct_FWD_OneArray)
		{
			char arr[]{ 'a' };
			rotate(arr, 1, FWD);
			Assert::IsTrue(arr[0] == 'a');
		}
		TEST_METHOD(TestRotateArray_Incorrect_BACK_OneArray)
		{
			char arr[]{ 'a' };
			rotate(arr, 1, BACK);
			Assert::AreEqual(arr[0], 'a');
		}
		TEST_METHOD(TestRotateArray_Correct_FWD_TwoArray)
		{
			char arr[]{ 'a', 'b' };
			rotate(arr, 2, FWD);
			Assert::IsTrue(arr[0] == 'b');
		}
		TEST_METHOD(TestRotateArray_Incorrect_BACK_TwoArray)
		{
			char arr[]{ 'a', 'b'};
			rotate(arr, 2, BACK);
			Assert::IsTrue(arr[0] == 'b');
		}
	};
}
