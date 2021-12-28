//***********************Bismillah-ir-Rahman-ir-Rahim******************************\
//In the Name of Allah
//La ilaha illallah Muhammadur Rasulullah
//Rabbir Hamhuma Kama Rabba Yani Sagheera

#include<bits/stdc++.h>
using namespace std;

#define Alhamdulillah ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;


ll egcd(ll a, ll b, ll &x, ll &y)
{
	if (b == 0)
	{
		x = 1;
		y = 0;
		return a;
	}
	ll x1, y1;
	ll d = egcd(b, a % b, x1, y1);
	x = y1;
	y = x1 - (a / b) * y1;
	return d;


}



void solve()
{
	//ax + by = gcd(a, b);
	ll i, j, k , n, m, x, y, z, c = 0, cnt = 0, a, b;
	string s;
	while (cin >> a >> b)
	{

		m = egcd(a, b, x, y) ;//3 --> gcd
		cout << x << " " << y << " " << m << endl; // x = -7  && y = 10
	}










}



int main()
{

	Alhamdulillah;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	solve();
	return 0;

}