/**
 * swap-int swaps the values of two intiger
 * using two input parameter
 * @a: input parameter 1
 * @b: input parameter 2
 *  return: nothing
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
