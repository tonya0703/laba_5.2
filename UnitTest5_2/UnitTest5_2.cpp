#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest52
{
	TEST_CLASS(UnitTest52)
	{
	public: 

		  TEST_METHOD(TestMethod1)
		{
			  double x = 1.0;  
			  double eps = 1e-6;  
			  int n;
			  double s;

			  Assert::AreEqual(s, atan(x), 0.001);  
		}
	};
}
