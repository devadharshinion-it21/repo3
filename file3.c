int primenumber(int number)
{
    int i = 2;
    while (i <= number / 2)
    {
        if (number % i == 0)
            return 0;
        else
            i++;
    }
    return 1;
}
int main()
{
    int num = 7, prime;
    prime = primenumber(num);
    if (prime == 1)
        printf("%d is a prime number", num);
    else
        printf("%d is not a prime number", num);
    return 0;
}
