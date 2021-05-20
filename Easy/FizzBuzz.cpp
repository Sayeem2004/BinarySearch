vector<string> solve(int n)
{
    vector<string> v(n);
    for (int i = 1; i <= n; i++)
    {
        if (i%15 == 0)
        {
            v[i-1] = "FizzBuzz";
            continue;
        }
        if (i%5 == 0)
        {
            v[i-1] = "Buzz";
            continue;
        }
        if (i%3 == 0)
        {
            v[i-1] = "Fizz";
            continue;
        }
        v[i-1] = to_string(i);
    }
    return v;
}
