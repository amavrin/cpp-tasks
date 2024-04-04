#include "pch.h"
#include "CppUnitTest.h"
#include "..\ring\Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
	TEST_CLASS(UnitTests)
	{
	public:	
		TEST_METHOD(TestRingCorrect)
		{
			int a = 1, b = 2, c = 3;

			ring_ptr(&a, &b, &c);

			Assert::IsTrue(a == 2);
			Assert::IsTrue(b == 3);
			Assert::IsTrue(c == 1);

			ring_ref(a, b, c);

			Assert::IsTrue(a == 3);
			Assert::IsTrue(b == 1);
			Assert::IsTrue(c == 2);
		}
		TEST_METHOD(TestRingZero)
		{
			int a = 0, b = 0, c = 0;

			ring_ptr(&a, &b, &c);

			Assert::IsTrue(a == 0);
			Assert::IsTrue(b == 0);
			Assert::IsTrue(c == 0);

			ring_ref(a, b, c);

			Assert::IsTrue(a == 0);
			Assert::IsTrue(b == 0);
			Assert::IsTrue(c == 0);
		}
		TEST_METHOD(TestRingNegative)
		{
			int a = -1, b = 2, c = -3;

			ring_ptr(&a, &b, &c);

			Assert::IsTrue(a == 2);
			Assert::IsTrue(b == -3);
			Assert::IsTrue(c == -1);

			ring_ref(a, b, c);

			Assert::IsTrue(a == -3);
			Assert::IsTrue(b == -1);
			Assert::IsTrue(c == 2);
		}
	};
}
