//============================================================================
// Name        : cparser.cpp
// Author      : Daniel Mosquera
// Version     :
// Copyright   : GPLv2
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdint.h>
#include <stdio.h>
#include "cparser/cparsertools.h"
#include "cparser/cparserpaths.h"
#include "cparser/cparser.h"


using namespace cparser;


int main()
{
	cparser_paths *cpaths = new cparser_paths();
	cpaths->AddPath(_T "/usr/include");
	cpaths->AddPath(_T "./src/");
	cpaths->AddPath(_T "./src/cparser");

	cparser::cparser cp(_T"project_examples/opengl/main.c", cpaths);

	printf("Hola.\r\n");

	return 0;
}