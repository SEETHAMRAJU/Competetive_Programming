#include<bits/stdc++.h>
#define append push_back
using namespace std;
int primes[1000005];
int isPrime(long long int n)
{
	for(long long int i=2;i*i<n;i++)
	{
		if(n%i == 0)
			return 0;
	}
	return 1;
}
void SieveOfEratosthenes(int n)
{
    for (int p=2; p*p<=n; p++)
    {
        if (primes[p] == 1)
        {
            for (int i=p*2; i<=n; i += p)
                primes[i] = 0;
        }
    }
}
int solve(long long int n)
{
	double m = (double) n;
	m = sqrt(m);
	if(floor(m) == ceil(m))
	{
		int o = (int) m;
		if(m>1000000)
		{
			long long int k = (long long int )m;
			return isPrime(k);
		}

		return primes[o];
	}
	return 0;
}
int main()
{
	for(int i=0;i<1000005;i++)
	{
		primes[i] = 1;
	}
	SieveOfEratosthenes(1000000);
	primes[1] = 0;
	primes[0] = 0;
	long long int temp,n;
	cin >> n;
	vector <int>answer;
	while(n--)
	{
		cin >> temp;
		int f = solve(temp);
		answer.append(f);
	}
	for(int i=0;i<answer.size();i++)
	{
		if(answer[i] == 1)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}





