#include "pch.h"
#include "CppUnitTest.h"
#include "../laboratory8.1char/laboratory8.1char.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81char
{
	TEST_CLASS(UnitTest81char)
	{
	public:

        TEST_METHOD(test_Change_MultipleCommas)
        {
            char str[] = "a,b,c,d,e,f";
            char* result = Change(str);
            Assert::AreEqual("a**b**c**d**e**f", result);  
            delete[] result;
        }
       
	};
}
