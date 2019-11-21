//============================================================================
// Name        : cparser.cpp
// Author      : Daniel Mosquera
// Version     :
// Copyright   : GPLv2
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdint.h>
#include <stdio.h>
#include <cparsertools.h>
#include <cparserpaths.h>
#include <cparsertoken.h>
#include <cparserobject.h>
#include <cparserdictionary.h>
#include <cparser.h>


using namespace cparser;

int main()
{
	dictionary *dd = DictionaryInit();
	DictionarySetKeyValue(dd, _T "cparsertools.h", NULL);
	DictionarySetKeyValue(dd, _T "cparserpaths.h", NULL);
	DictionarySetKeyValue(dd, _T "cparsertoken.h", NULL);
	DictionarySetKeyValue(dd, _T "cparserobject.h", NULL);
	DictionarySetKeyValue(dd, _T "cparserdictionary.h", NULL);
	DictionarySetKeyValue(dd, _T "cparser.h", NULL);
	DictionarySetKeyValue(dd, _T "1.h", NULL);
	DictionarySetKeyValue(dd, _T "2.h", NULL);
	DictionarySetKeyValue(dd, _T "3.h", NULL);
	DictionarySetKeyValue(dd, _T "4.h", NULL);
	DictionarySetKeyValue(dd, _T "5.h", NULL);
	DictionarySetKeyValue(dd, _T "6.h", NULL);
	DictionarySetKeyValue(dd, _T "0.h", NULL);
	DictionarySetKeyValue(dd, _T "a.h", NULL);
	DictionarySetKeyValue(dd, _T "z.h", NULL);

	cparser_paths *cpaths = new cparser_paths();
	cpaths->AddPath(_T "/usr/include");
	cpaths->AddPath(_T "./src/");
	cpaths->AddPath(_T "./src/cparser");

	cparser::cparser cp(cpaths, _T"project_examples/opengl/main.c");

	object_s *oo = cp.Parse(NULL);

	printf("Fin.\r\n");

	return 0;
}

