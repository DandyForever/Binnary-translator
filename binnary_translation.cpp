#include <iostream>
#include <cstring>
#include "translator.h"

int main ()
{
	translator translator;
	translator.make_input_buffer ();
	translator.translate ();
	translator.make_output_file ();

	return 0;
}
