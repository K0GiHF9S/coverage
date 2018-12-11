#include "stdafx.h"
#include "CppUnitTest.h"
#include "../coverage/target.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			target t;
			Assert::AreEqual(t.doSometing(false), 1);
			Assert::AreEqual(t.doSometing(true), 0);
			Assert::AreEqual(t.doSometing(), 0);
		}

	};
}