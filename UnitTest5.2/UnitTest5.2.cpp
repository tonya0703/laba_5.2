#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest52
{
	TEST_CLASS(UnitTest52)
	{
	public:
		double f(const double x)
		{
			if (abs(x) >= 1)
				return (sin(x) + 1) / (sin(x) + cos(x));
			else
			{
				double S = 0;
				int i = 0;
				double a = 1;
				S = a;
				do
				{
					i++;
					double R = (pow(x, 2 * i + 1)) / (((2 * i + 1)) * ((2 * i + 1) - 1)
						* (2 * i + 1) * (2 * i + 1) - 2);
					a *= R;
					S += a;
				} while (i < 8);
				return S;
			}
		}
		TEST_METHOD(TestMethod1)
		{
			double result1 = f(1.0);

			double expected1 = 1.33269;

			Assert::AreEqual(expected1, result1, 0.0001);
		}
	};
}
