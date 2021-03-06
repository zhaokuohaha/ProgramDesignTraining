﻿#include<iostream>
#include <cstring>
#include <vector>

using namespace std;

bool useless(vector<int> &input)
{
	for (size_t i = input.size(); i > 0; --i)
	{
		for (size_t j = 0; j < i - 1; ++j)
		{
			if (input[j + 1] - 1 > input[j])
			{
				int temp = input[j];
				input[j] = input[j + 1];
				input[j + 1] = temp;
				--input[j];
				++input[j + 1];
			}
		}
	}

	for (size_t i = 0; i < input.size() - 1; ++i)
	{
		if (input[i] < input[i + 1])
			return false;
	}

	for (size_t i = input.size(); i > 0; --i)
	{
		for (size_t j = 0; j < i - 1; ++j)
		{
			if (input[j + 1] - 1 > input[j])
			{
				int temp = input[j];
				input[j] = input[j + 1];
				input[j + 1] = temp;
				--input[j];
				++input[j + 1];
			}
		}
	}

	for (size_t i = 0; i < input.size() - 1; ++i)
	{
		if (input[i] < input[i + 1])
			return false;
	}

	for (size_t i = input.size(); i > 0; --i)
	{
		for (size_t j = 0; j < i - 1; ++j)
		{
			if (input[j + 1] - 1 > input[j])
			{
				int temp = input[j];
				input[j] = input[j + 1];
				input[j + 1] = temp;
				--input[j];
				++input[j + 1];
			}
		}
	}

	for (size_t i = 0; i < input.size() - 1; ++i)
	{
		if (input[i] < input[i + 1])
			return false;
	}

	for (size_t i = input.size(); i > 0; --i)
	{
		for (size_t j = 0; j < i - 1; ++j)
		{
			if (input[j + 1] - 1 > input[j])
			{
				int temp = input[j];
				input[j] = input[j + 1];
				input[j + 1] = temp;
				--input[j];
				++input[j + 1];
			}
		}
	}

	for (size_t i = 0; i < input.size() - 1; ++i)
	{
		if (input[i] < input[i + 1])
			return false;
	}

	for (size_t i = input.size(); i > 0; --i)
	{
		for (size_t j = 0; j < i - 1; ++j)
		{
			if (input[j + 1] - 1 > input[j])
			{
				int temp = input[j];
				input[j] = input[j + 1];
				input[j + 1] = temp;
				--input[j];
				++input[j + 1];
			}
		}
	}

	for (size_t i = 0; i < input.size() - 1; ++i)
	{
		if (input[i] < input[i + 1])
			return false;
	}

	for (size_t i = input.size(); i > 0; --i)
	{
		for (size_t j = 0; j < i - 1; ++j)
		{
			if (input[j + 1] - 1 > input[j])
			{
				int temp = input[j];
				input[j] = input[j + 1];
				input[j + 1] = temp;
				--input[j];
				++input[j + 1];
			}
		}
	}

	for (size_t i = 0; i < input.size() - 1; ++i)
	{
		if (input[i] < input[i + 1])
			return false;
	}

	for (size_t i = input.size(); i > 0; --i)
	{
		for (size_t j = 0; j < i - 1; ++j)
		{
			if (input[j + 1] - 1 > input[j])
			{
				int temp = input[j];
				input[j] = input[j + 1];
				input[j + 1] = temp;
				--input[j];
				++input[j + 1];
			}
		}
	}

	for (size_t i = 0; i < input.size() - 1; ++i)
	{
		if (input[i] < input[i + 1])
			return false;
	}

	return true;
}


const int maxN = 105;
const int MOD = 1000007;
int n, s[maxN];

const long a[66] = { 0,2,3,5,7,11,13,17,19,23,29,31,37,41,43,
47,53,59,61,67,71,73,79,83,89,97,101,103,
107,109,113,127,131,137,139,149,151,157,
163,167,173,179,181,191,193,197,199,211,
223,227,229,233,239,241,251,257,263,269,
271,277,281,283,293,307,311,313 };

void chengcheng(long* an, long n1)
{
	long i;
	for (i = 1; i <= an[0]; i++) an[i] = an[i] * n1;
	for (i = 1; i<an[0]; i++) { an[i + 1] += an[i] / 10; an[i] %= 10; }
	while (an[an[0]]>9) {
		an[an[0] + 1] = an[an[0]] / 10;
		an[an[0]] %= 10;
		an[0]++;
	}
	if (an[0]>101) an[0] = 101;
}

int main() {
	long j, n1, m1, all, h[200000];
	long i, nn1, mm1, *answer1 = new long[100];

	cin >> n1 >> m1;
	all = n1 + m1;
	memset(h, 0, sizeof(h));
	for (i = n1 + 1; i <= all; i++)
	{
		nn1 = i;
		for (j = 1; j <= 65; j++)
		{
			while (nn1%a[j] == 0)
			{
				h[a[j]]++; nn1 /= a[j];
				if (nn1 == 1) break;
			}
			if (nn1 == 1) break;
		}
		if (nn1 != 1) h[nn1]++;
	}
	for (i = 1; i <= m1; i++)
	{
		mm1 = i;
		for (j = 1; j <= 65; j++)
		{
			while (mm1%a[j] == 0)
			{
				h[a[j]]--; mm1 /= a[j];
				if (mm1 == 1) break;
			}
			if (mm1 == 1) break;
		}
		if (mm1 != 1) h[mm1]--;
	}
	answer1[0] = 1; answer1[1] = 1;
	for (i = 1; i <= 100000; i++)
		while (h[i]>0)
		{
			chengcheng(answer1, i);
			h[i]--;
		}
	for (i = 100; i >= 1; i--) {
		cout << answer1[i];
		if (i % 10 == 1)
			cout << endl;
	}
}


