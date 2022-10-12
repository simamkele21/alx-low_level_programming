/**
 * print_name - executes a function given as a parameter on each element
 *              of an array.
 *
 * @name: string to print
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
			f(name);
}
