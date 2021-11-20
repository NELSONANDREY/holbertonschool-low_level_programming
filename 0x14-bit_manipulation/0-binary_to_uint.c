#include "main.h"
/**
 * binary_to_uint - Entry Point
 * @b: const char
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	int counter = 0;
	int exp = 1;
	/**para que arranque en 1 ya que si se deja en cero nunca va a aumentar*/
	int change = 0;/*para guardar cambios a las variables*/

	if (b == NULL)
	{
		return (0);/* code */
	}
	while (b[counter] != '\0')
	/*b en la posicion de contador va a recorrer hasta que sea nulo \0*/
	{
		counter++;
	}
	counter -= 1;/* */
	while (counter >= 0)
	{
		if (b[counter] != '0' && b[counter] != '1')
			return (0);
		change += ((b[counter] - 48) * exp);
		/*multiplicar la variable que encontro en la posicion por, */
		exp *= 2;/*para que cuente las posiciones y se vaya elevando*/
		counter--;
	}
	return (change);
}
