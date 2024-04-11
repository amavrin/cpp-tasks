#include "pch.h"
#include "CppUnitTest.h"
#include "..\copy\Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
	TEST_CLASS(UnitTests)
	{
	public:
		
		TEST_METHOD(TestCopyArray_Correct)
		{
			const size_t src_size = 4;
			const size_t dst_size = 3;
			double src[src_size]{ 1.0, 2.0, 3.0, 4.0 };
			double dst[dst_size];

			size_t count = copy(src, src_size, dst, dst_size);
			Assert::IsTrue(count == dst_size);
			Assert::IsTrue(dst[0] == src[0] && dst[1] == src[1] && dst[2] == src[2]);
		}
		TEST_METHOD(TestCopyArray_Zero)
		{
			const size_t src_size = 3;
			const size_t dst_size = 2;
			double src[src_size]{ 0.0, 0.0, 3.0};
			double dst[dst_size];

			size_t count = copy(src, src_size, dst, dst_size);
			Assert::IsTrue(count == dst_size);
			Assert::IsTrue(dst[0] == src[0] && dst[1] == src[1]);
		}
		TEST_METHOD(TestCopyArray_EmptyArray)
		{
			const size_t src_size = 2;
			const size_t dst_size = 2;
			double src[src_size]{ };
			double dst[dst_size];

			size_t count = copy(src, src_size, dst, dst_size);
			Assert::IsTrue(count == dst_size);
		}
		TEST_METHOD(TestCopyArray_Negative)
		{
			const size_t src_size = 4;
			const size_t dst_size = 3;
			double src[src_size]{ -1.0, 2.0, 3.0, -4.0 };
			double dst[dst_size];

			size_t count = copy(src, src_size, dst, dst_size);
			Assert::IsTrue(count == dst_size);
			Assert::IsTrue(dst[0] == src[0] && dst[1] == src[1] && dst[2] == src[2]);
		}
	};
}
