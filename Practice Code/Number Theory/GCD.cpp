
// Method - 1
// Max number that is divisible both a and b
int gcd(int a, int b)
{
    int ans = 1;
    for (int i = 1; i <= min(a, b); i++){

        if (a % i == 0 && b % i == 0){
            ans = i;
        }
    }
    return ans;
}


// Method - 2
int gcd(int a, int b)   // assuming a >= b
{
    while (true)
    {
        int remainder = a % b;
        if (remainder == 0)
        {
            return b;
        }
        a = b; // a takes the bigger side
        b = remainder; // b takes the smaller side
    }
}


// Recursive method but same as method - 2
int gcd(int a, int b) {
  if(b == 0)
    return a;
  else
    return gcd(b, a % b);
}
