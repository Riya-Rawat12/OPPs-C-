namespace factorial
{
long long Factorial(int n)
{
    if(n>0)
    return n*Factorial(n-1);
    else
    return 1;
}
inline long long Pow(int n, int p)
{
    if(p)
    return n*Pow(n,p-1);
    else
    return 1;
}
}