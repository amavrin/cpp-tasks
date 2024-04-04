#include "pch.h"
#include "CppUnitTest.h"
#include "..\VectorReplace\Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
	TEST_CLASS(UnitTests)
	{
	public:
		TEST_METHOD(TestVectorReplaceCorrect)
		{
			vector<string> data{ "deo", "deo", "krasnodeo", "batz!" };

			int count = replace_strings(data, "deo", "peo");

			Assert::IsTrue(count == 2);
			Assert::IsTrue(data[0] == "peo");
			Assert::IsTrue(data[1] == "peo");
			Assert::IsTrue(data[2] == "krasnodeo");
			Assert::IsTrue(data[3] == "batz!");
		}
		TEST_METHOD(TestVectorReplaceEmptyVector)
		{
			vector<string> data{ };

			int count = replace_strings(data, "deo", "peo");

			Assert::IsTrue(count == 0);
		}
		TEST_METHOD(TestVectorReplaceOneWord)
		{
			vector<string> data{ "deo", "deo", "krasnodeo", "batz!" };

			int count = replace_strings(data, "krasnodeo", "Lol");

			Assert::IsTrue(count == 1);

			Assert::IsTrue(data[0] == "deo");
			Assert::IsTrue(data[1] == "deo");
			Assert::IsTrue(data[2] == "Lol");
			Assert::IsTrue(data[3] == "batz!");
		}
	};
}
