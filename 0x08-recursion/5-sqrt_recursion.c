

/**
 * _sqrt_recursion - multiplies two digits
 * @n: 1st digit in the multiplication
 * Description: multiplies two digits
 * Return: the result of the multiplication
 */
int _sqrt_recursion(int n)
{
    int temp;
    static int num = 0;

    num++;
    if (num == n - 1 || n < 0)
    {
        num = 0;
        return (-1);
    }
    if (num * num == n)
    {
        temp = num;
        num = 0;
        return (temp);
    }
    return (_sqrt_recursion(n));
}
