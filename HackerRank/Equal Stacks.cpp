int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {
    stack<int> s1,s2,s3;
    long long  sum = 0;
    for(int i = h1.size()-1;i>=0;i--)
    {
        sum+=h1[i];
        s1.push(sum);
    }
    sum = 0;
    for(int i = h2.size()-1;i>=0;i--)
    {
        sum+=h2[i];
        s2.push(sum);
    }
    sum = 0;
    for(int i = h3.size()-1;i>=0;i--)
    {
        sum+=h3[i];
        s3.push(sum);
    }
    if(s1.empty() || s2.empty() || s3.empty())return 0;
    while(s1.top()!=s2.top() || s1.top()!=s3.top())
    {
        if(s1.top()>=s2.top() && s1.top()>=s3.top())
        {
            s1.pop();
            if(s1.empty())return 0;
        }
        else if(s2.top()>=s1.top() && s2.top()>=s3.top())
        {
            s2.pop();
            if(s2.empty())return 0;
        }
        else if(s3.top()>=s1.top() && s3.top()>=s2.top())
        {
            s3.pop();
            if(s3.empty())return 0;
        }
    }
    return s1.top();
}
