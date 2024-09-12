#include "FST.h"
#include <tchar.h>
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	FST::FST fst0(		
		(char*)"aabbabaaba",					
		4,										
		FST::NODE(3, FST::RELATION('a', 0), FST::RELATION('b', 0), FST::RELATION('a', 1)),	
		FST::NODE(1, FST::RELATION('b', 2)),												
		FST::NODE(1, FST::RELATION('a', 3)),												
		FST::NODE()																			
	);
	if (FST::execute(fst0))
		cout << "������� " << fst0.strin << " ����������" << endl;
	else
		cout << "������� " << fst0.strin << " �� ����������" << endl;


	FST::FST fst1(
		(char*)"abcf",
		6,
		FST::NODE(2, FST::RELATION('a', 1), FST::RELATION('a', 2)),
		FST::NODE(2, FST::RELATION('b', 1), FST::RELATION('b', 2)),
		FST::NODE(6, FST::RELATION('c', 3), FST::RELATION('d', 3), FST::RELATION('t', 3), FST::RELATION('c', 4), FST::RELATION('d', 4), FST::RELATION('t', 4)),
		FST::NODE(7, FST::RELATION('c', 3), FST::RELATION('d', 3), FST::RELATION('t', 3), FST::RELATION('c', 4), FST::RELATION('d', 4), FST::RELATION('t', 4), FST::RELATION('f', 5)),
		FST::NODE(2, FST::RELATION('b', 4), FST::RELATION('f', 5)),
		FST::NODE()
	);
	if (FST::execute(fst1))
		cout << "������� " << fst1.strin << " ����������" << endl;
	else
		cout << "������� " << fst1.strin << " �� ����������" << endl;

	FST::FST fst2(
		(char*)"abdbf",
		6,
		FST::NODE(2, FST::RELATION('a', 1), FST::RELATION('a', 2)),
		FST::NODE(2, FST::RELATION('b', 1), FST::RELATION('b', 2)),
		FST::NODE(6, FST::RELATION('c', 3), FST::RELATION('d', 3), FST::RELATION('t', 3), FST::RELATION('c', 4), FST::RELATION('d', 4), FST::RELATION('t', 4)),
		FST::NODE(7, FST::RELATION('c', 3), FST::RELATION('d', 3), FST::RELATION('t', 3), FST::RELATION('c', 4), FST::RELATION('d', 4), FST::RELATION('t', 4), FST::RELATION('f', 5)),
		FST::NODE(2, FST::RELATION('b', 4), FST::RELATION('f', 5)),
		FST::NODE()
	);
	if (FST::execute(fst2))
		cout << "������� " << fst2.strin << " ����������" << endl;
	else
		cout << "������� " << fst2.strin << " �� ����������" << endl;

	FST::FST fst3(
		(char*)"abbtbf",
		6,
		FST::NODE(2, FST::RELATION('a', 1), FST::RELATION('a', 2)),
		FST::NODE(2, FST::RELATION('b', 1), FST::RELATION('b', 2)),
		FST::NODE(6, FST::RELATION('c', 3), FST::RELATION('d', 3), FST::RELATION('t', 3), FST::RELATION('c', 4), FST::RELATION('d', 4), FST::RELATION('t', 4)),
		FST::NODE(7, FST::RELATION('c', 3), FST::RELATION('d', 3), FST::RELATION('t', 3), FST::RELATION('c', 4), FST::RELATION('d', 4), FST::RELATION('t', 4), FST::RELATION('f', 5)),
		FST::NODE(2, FST::RELATION('b', 4), FST::RELATION('f', 5)),
		FST::NODE()
	);
	if (FST::execute(fst3))
		cout << "������� " << fst3.strin << " ����������" << endl;
	else
		cout << "������� " << fst3.strin << " �� ����������" << endl;

	FST::FST fst4(
		(char*)"adf",
		6,
		FST::NODE(2, FST::RELATION('a', 1), FST::RELATION('a', 2)),
		FST::NODE(2, FST::RELATION('b', 1), FST::RELATION('b', 2)),
		FST::NODE(6, FST::RELATION('c', 3), FST::RELATION('d', 3), FST::RELATION('t', 3), FST::RELATION('c', 4), FST::RELATION('d', 4), FST::RELATION('t', 4)),
		FST::NODE(7, FST::RELATION('c', 3), FST::RELATION('d', 3), FST::RELATION('t', 3), FST::RELATION('c', 4), FST::RELATION('d', 4), FST::RELATION('t', 4), FST::RELATION('f', 5)),
		FST::NODE(2, FST::RELATION('b', 4), FST::RELATION('f', 5)),
		FST::NODE()
	);
	if (FST::execute(fst4))
		cout << "������� " << fst4.strin << " ����������" << endl;
	else
		cout << "������� " << fst4.strin << " �� ����������" << endl;

	FST::FST fst5(
		(char*)"abcbf",
		6,
		FST::NODE(2, FST::RELATION('a', 1), FST::RELATION('a', 2)),
		FST::NODE(2, FST::RELATION('b', 1), FST::RELATION('b', 2)),
		FST::NODE(6, FST::RELATION('c', 3), FST::RELATION('d', 3), FST::RELATION('t', 3), FST::RELATION('c', 4), FST::RELATION('d', 4), FST::RELATION('t', 4)),
		FST::NODE(7, FST::RELATION('c', 3), FST::RELATION('d', 3), FST::RELATION('t', 3), FST::RELATION('c', 4), FST::RELATION('d', 4), FST::RELATION('t', 4), FST::RELATION('f', 5)),
		FST::NODE(2, FST::RELATION('b', 4), FST::RELATION('f', 5)),
		FST::NODE()
	);
	if (FST::execute(fst5))
		cout << "������� " << fst5.strin << " ����������" << endl;
	else
		cout << "������� " << fst5.strin << " �� ����������" << endl;

	FST::FST fst6(
		(char*)"acdtf",
		6,
		FST::NODE(2, FST::RELATION('a', 1), FST::RELATION('a', 2)),
		FST::NODE(2, FST::RELATION('b', 1), FST::RELATION('b', 2)),
		FST::NODE(6, FST::RELATION('c', 3), FST::RELATION('d', 3), FST::RELATION('t', 3), FST::RELATION('c', 4), FST::RELATION('d', 4), FST::RELATION('t', 4)),
		FST::NODE(7, FST::RELATION('c', 3), FST::RELATION('d', 3), FST::RELATION('t', 3), FST::RELATION('c', 4), FST::RELATION('d', 4), FST::RELATION('t', 4), FST::RELATION('f', 5)),
		FST::NODE(2, FST::RELATION('b', 4), FST::RELATION('f', 5)),
		FST::NODE()
	);
	if (FST::execute(fst6))
		cout << "������� " << fst6.strin << " ����������" << endl;
	else
		cout << "������� " << fst6.strin << " �� ����������" << endl;

	FST::FST fst7(
		(char*)"adcdtf",
		6,
		FST::NODE(2, FST::RELATION('a', 1), FST::RELATION('a', 2)),
		FST::NODE(2, FST::RELATION('b', 1), FST::RELATION('b', 2)),
		FST::NODE(6, FST::RELATION('c', 3), FST::RELATION('d', 3), FST::RELATION('t', 3), FST::RELATION('c', 4), FST::RELATION('d', 4), FST::RELATION('t', 4)),
		FST::NODE(7, FST::RELATION('c', 3), FST::RELATION('d', 3), FST::RELATION('t', 3), FST::RELATION('c', 4), FST::RELATION('d', 4), FST::RELATION('t', 4), FST::RELATION('f', 5)),
		FST::NODE(2, FST::RELATION('b', 4), FST::RELATION('f', 5)),
		FST::NODE()
	);
	if (FST::execute(fst7))
		cout << "������� " << fst7.strin << " ����������" << endl;
	else
		cout << "������� " << fst7.strin << " �� ����������" << endl;

	FST::FST fst8(
		(char*)"abcdt",
		6,
		FST::NODE(2, FST::RELATION('a', 1), FST::RELATION('a', 2)),
		FST::NODE(2, FST::RELATION('b', 1), FST::RELATION('b', 2)),
		FST::NODE(6, FST::RELATION('c', 3), FST::RELATION('d', 3), FST::RELATION('t', 3), FST::RELATION('c', 4), FST::RELATION('d', 4), FST::RELATION('t', 4)),
		FST::NODE(7, FST::RELATION('c', 3), FST::RELATION('d', 3), FST::RELATION('t', 3), FST::RELATION('c', 4), FST::RELATION('d', 4), FST::RELATION('t', 4), FST::RELATION('f', 5)),
		FST::NODE(2, FST::RELATION('b', 4), FST::RELATION('f', 5)),
		FST::NODE()
	);
	if (FST::execute(fst8))
		cout << "������� " << fst8.strin << " ����������" << endl;
	else
		cout << "������� " << fst8.strin << " �� ����������" << endl;

	FST::FST fst9(
		(char*)"bcdtf",
		6,
		FST::NODE(2, FST::RELATION('a', 1), FST::RELATION('a', 2)),
		FST::NODE(2, FST::RELATION('b', 1), FST::RELATION('b', 2)),
		FST::NODE(6, FST::RELATION('c', 3), FST::RELATION('d', 3), FST::RELATION('t', 3), FST::RELATION('c', 4), FST::RELATION('d', 4), FST::RELATION('t', 4)),
		FST::NODE(7, FST::RELATION('c', 3), FST::RELATION('d', 3), FST::RELATION('t', 3), FST::RELATION('c', 4), FST::RELATION('d', 4), FST::RELATION('t', 4), FST::RELATION('f', 5)),
		FST::NODE(2, FST::RELATION('b', 4), FST::RELATION('f', 5)),
		FST::NODE()
	);
	if (FST::execute(fst9))
		cout << "������� " << fst9.strin<< " ����������" << endl;
	else
		cout << "������� " << fst9.strin << " �� ����������" << endl;
	FST::FST fst10(
		(char*)"bqcdtf",
		6,
		FST::NODE(2, FST::RELATION('a', 1), FST::RELATION('a', 2)),
		FST::NODE(2, FST::RELATION('b', 1), FST::RELATION('b', 2)),
		FST::NODE(6, FST::RELATION('c', 3), FST::RELATION('d', 3), FST::RELATION('t', 3), FST::RELATION('c', 4), FST::RELATION('d', 4), FST::RELATION('t', 4)),
		FST::NODE(7, FST::RELATION('c', 3), FST::RELATION('d', 3), FST::RELATION('t', 3), FST::RELATION('c', 4), FST::RELATION('d', 4), FST::RELATION('t', 4), FST::RELATION('f', 5)),
		FST::NODE(2, FST::RELATION('b', 4), FST::RELATION('f', 5)),
		FST::NODE()
	);
	if (FST::execute(fst10))
		cout << "������� " << fst10.strin << " ����������" << endl;
	else
		cout << "������� " << fst10.strin << " �� ����������" << endl;
}