#include "pch.h"
#include "CppUnitTest.h"
#include "../ModernCoding3/MyCalss.h"
#include <iostream>
#include <string>
using namespace std;
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		MyCalss cal;
		TEST_METHOD(TestMethod1)
		{
			
			Assert::AreEqual(cal.fun1(1,2,3), 3);
		}
		TEST_METHOD(TestMethod2)
		{
			string a = "42";
			Assert::AreEqual(cal.fun2(12345), a);
		}
		TEST_METHOD(TestMethod3)
		{
			Assert::AreEqual(cal.fun3(12345), 1);
		}
		TEST_METHOD(TestMethod4)
		{
			vector<vector<int>> mass = {
				{1, 2, 3},
				{4, 5, 6},
				{7, 8, 9}
			};

			Assert::AreEqual(cal.fun4(mass), 22);
		}
	};
}
