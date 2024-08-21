#include<bits/stdc++.h>
using namespace std;

void seeding(int n) {
	int s=n;
	for(int i=0; i<=n; i++){
		for(int j=0; j<s; j++){
			cout << "* ";
		}
		cout << "\n";
		s--;
	}
}