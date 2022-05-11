#include "pch.h"
#include "CppUnitTest.h"
#include"C:\Users\LEGION\source\repos\Lab_oop_3.6\Lab_oop_3.6\D3.cpp"
#include"C:\Users\LEGION\source\repos\Lab_oop_3.6\Lab_oop_3.6\B3.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UTOOP36
{
	TEST_CLASS(UTOOP36)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			D3 d(5, 7);
			Assert::AreEqual(5, d.get_d3());

		}
	};
}