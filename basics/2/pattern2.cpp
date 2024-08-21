#include<bits/stdc++.h>
using namespace std;
void nForest(int n) {
	for(int i=0; i<n; i++){
		for(int j=i+1;j>0;j--){
			cout << "* ";
		}
		cout << "\n";
	}
}
