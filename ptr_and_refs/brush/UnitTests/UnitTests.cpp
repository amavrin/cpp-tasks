#include "pch.h"
#include "CppUnitTest.h"
#include "..\brush\Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
	TEST_CLASS(UnitTests)
	{
	public:		
		TEST_METHOD(TestBrushCorrect)
		{
			int in[]{ 1,2,3,4,5,6,7,8,9 };
			int out[]{ 1,2,0,4,5,0,7,8,0 };
			size_t len = sizeof(in) / sizeof(int);

			brush(in, len, 3);

			for (size_t i = 0; i < len; i++)
			{
				Assert::IsTrue(in[i] == out[i]);
			}
		}
		TEST_METHOD(TestBrushSingleElementArray)
		{
			int in[]{ 1 };
			size_t len = sizeof(in) / sizeof(int);

			brush(in, len, 1);

			Assert::IsTrue(in[0] == 0);
		}
		//Проверка на массиве с N+1 элементами
		TEST_METHOD(TestBrushArraySizeN)
		{
			int in[]{ 1, 2, 3 };
			size_t len = sizeof(in) / sizeof(int);

			brush(in, len, 3);

			Assert::IsTrue(in[0] == 1 && in[1] == 2 && in[2] == 0);
		}
	};
}
