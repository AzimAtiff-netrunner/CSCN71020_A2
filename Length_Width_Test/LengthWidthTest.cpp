#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
	void setLength(int input, int* length);
	void setWidth(int input, int* width);
}


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LengthWidthTest
{
	TEST_CLASS(LengthWidthTest)
	{
	public:
		
		TEST_METHOD(setLength1)
		{
			int length = 0; //normal test
			setLength(50, &length); 
			Assert::AreEqual(50, length); 
		}
		TEST_METHOD(setLength2)
		{
			int length = 0; //in-bound test
			setLength(1, &length);
			Assert::AreEqual(1, length);

			setLength(99, &length);
			Assert::AreEqual(99, length);
		}
		TEST_METHOD(setLength3)
		{
			int length = 0; // out of bounds test
			setLength(0, &length);
			Assert::AreEqual(0, length);

			setLength(100, &length);
			Assert::AreEqual(0, length);
		}

		TEST_METHOD(setWidth1)
		{
			int width = 0; //normal test
			setWidth(50, &width);
			Assert::AreEqual(50, width);
		}
		TEST_METHOD(setWidth2)
		{
			int width = 0; //in-bound test
			setWidth(1, &width);
			Assert::AreEqual(1, width);

			setWidth(99, &width);
			Assert::AreEqual(99, width);
		}
		TEST_METHOD(setWidth3)
		{
			int width = 0; // out of bounds test
			setWidth(0, &width);
			Assert::AreEqual(0, width);

			setWidth(100, &width);
			Assert::AreEqual(0, width);
		}

	};
}
