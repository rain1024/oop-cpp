#include "stdafx.h"
#include "CppUnitTest.h"
#include "../math-oop-lab/Rectangle.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTestRectangle)
	{
	public:
		
		TEST_METHOD(set_values)
		{
			// TODO: Your test code here
			Rectangle rect;
			rect.set_values(2, 3);
			Assert::AreEqual(3, rect.height);
		}

		TEST_METHOD(get_area)
		{
			// TODO: Your test code here
			Rectangle rect;
			rect.set_values(2, 3);
			Assert::AreEqual(6, rect.get_area());
		}
	};
}