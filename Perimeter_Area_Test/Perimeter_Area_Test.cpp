#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
	int Add(int, int);
	int Multiply(int, int);
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PerimeterAreaTest
{
	TEST_CLASS(PerimeterAreaTest)
	{
	public:

		TEST_METHOD(getPerimeter1)
		{// This is testing the perimeter function using all given sides of the rectangle
			int perimeter = 0;
			int width = 1;
			int length = 2;
			perimeter = Add(length, width);
			Assert::AreEqual(3, perimeter);
		}

		TEST_METHOD(getArea1)
		{// This is testing the area function using the given length and width
			int area = 0;
			int width = 1;
			int length = 2;
			area = Multiply(length, width);
			Assert::AreEqual(2, area);
		}

	};
}
