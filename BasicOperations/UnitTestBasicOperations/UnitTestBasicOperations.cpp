#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestBasicOperations
{
	TEST_CLASS(UnitTestBasicOperations)
	{
	public:
		
		TEST_METHOD(TestMethodVariableEsNumero)
		{
			char x[10] = {'A','b','C','1','3','.',';','*','/','o'};
				int cont = 0, letra = 0, cont2 = 0;
				for (int i = 0; i < 10; i++)
				{
					letra = (int)x[i];
					if ((letra >= 32 && letra < 46) || letra == 47)
					{
						cont++;
					}
					else if (letra >= 58 && letra <= 255)
					{
						cont++;
					}
					else if (letra == 46)
					{
						cont2++;
						cont = cont;
					}
					else {
						cont = cont;
					}
				}
				//Assert::AreEqual(7,cont);
				Assert::AreEqual(1, cont2);
		}
		TEST_METHOD(TestMethodVariableEsNumero2)
		{
			char x[10] = { 'A','b','C','1','3','.',';','*','/','o' };
			int cont = 0, letra = 0, cont2 = 0;
			for (int i = 0; i < 10; i++)
			{
				letra = (int)x[i];
				if ((letra >= 32 && letra < 46) || letra == 47)
				{
					cont++;
				}
				else if (letra >= 58 && letra <= 255)
				{
					cont++;
				}
				else if (letra == 46)
				{
					cont2++;
					cont = cont;
				}
				else {
					cont = cont;
				}
			}
			Assert::AreEqual(7, cont);
			//Assert::AreEqual(1, cont2);
		}
		TEST_METHOD(TestMethodAddition)
		{
			float num1 = 5.2512f;
			float num2 = 1.8581f;
			Assert::AreEqual(7.1093f, num1 + num2);
		}
		TEST_METHOD(TestMethodSubtraction)
		{
			float num1 = 12.55;
			float num2 = 55.3;
			Assert::AreEqual(-42.75f, num1 - num2);
		}
		TEST_METHOD(TestMethodMultiplicaction)
		{
			float num1 = 8.5;
			float num2 = -5.12;
			float result;
			result = num1 * num2;
			Assert::AreEqual(-43.52f,result);
		}
		TEST_METHOD(TestMethodDivision)
		{
			float num1 = -7.555;
			float num2 = 11;
			Assert::AreEqual(-0.6868181818f, num1 / num2);
		}

	};
}
