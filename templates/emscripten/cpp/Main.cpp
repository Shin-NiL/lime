/*
 *  Main.mm
 *
 *  Boot code for lime.
 *
 */

#include <stdio.h>

extern "C" const char *hxRunLibrary ();
extern "C" void hxcpp_set_top_of_stack ();

extern "C" int zlib_register_prims ();
extern "C" int lime_openal_register_prims ();
::foreach ndlls::::if (registerStatics)::extern "C" int ::name::_register_prims();::end::
::end::


extern "C" int main(int argc, char *argv[])	{
	
	//printf("Starting ...\n" );
	hxcpp_set_top_of_stack ();
	
	zlib_register_prims ();
	lime_openal_register_prims ();
	::foreach ndlls::::if (registerStatics)::::name::_register_prims();::end::
	::end::
	
	//printf("Running\n");
	
	const char *err = NULL;
	err = hxRunLibrary ();
	
	if (err) {
		
		printf(" Error %s\n", err );
		return -1;
		
	}
	
	//printf("Done!\n");
	return 0;
	
}