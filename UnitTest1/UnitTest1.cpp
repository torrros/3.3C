#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\vladt\source\repos\3.3-С\3.3-С\Rational.cpp"
#include "C:\Users\vladt\source\repos\3.3-С\3.3-С\Object.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Rational r(1, 2);
			Assert::IsTrue(Rational{ 1, 2 } == r);
		}
	};
}
