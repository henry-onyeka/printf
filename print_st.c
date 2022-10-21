#include "main.h"
/**
 * _print_string - the function
 * @vlist: arguments passed to print

 * @output_p: Host output
 *
 * @o_p: output position
 * Retunr: d
 */




int print_string(va_list vlist, char *output_p, int o_p)

{

	int x = 0;

	char *ptr = va_arg(vlist, char *);



	if (!ptr)

		ptr = "(null)";

	for (; ptr[x]; x++, o_p++)

		output_p[o_p] = ptr[x];

	return (o_p);

}
