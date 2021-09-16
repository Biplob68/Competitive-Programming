
//  Least Common Multiple
int lcm(int a, int b)
{
    for (int i = 1; ; i++){
        if (i % a == 0 && i % b == 0){
            return i;
        }
    }
}

// Easy method to find lcm
int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

// but it can create overflow condition
int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
