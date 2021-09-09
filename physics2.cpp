#include <bits/stdc++.h>

using namespace std;

int n;
double lReading[50], rReading[50], summDiff, diff[50], d, deltaD[50], deltaDD[50], sumDeltaDD, sigma;

int main(){
	freopen("input.txt", "r", stdin);
	//cout << "Enter the trial namber";
	cin >> n;
	for(int i = 1; i <= n; i++){
		//cout << "Enter the left reading";
		cin >> lReading[i];
		//cout << "Enter the right reading";
		cin >> rReading[i];
		diff[i] = rReading[i] - lReading[i];
		summDiff += diff[i];
	}
	d = summDiff/n;
	for(int i = 1; i <= n; i++){
		deltaD[i] = d - diff[i];
		deltaDD[i] = deltaD[i] * deltaD[i];
		sumDeltaDD += deltaDD[i];
	}
	for(int i = 1; i <= n; i++){
		//cout << i << ' ' << lReading[i] << ' ' << rReading[i] << ' ' << diff[i] << ' ' << deltaD[i] << ' ' << deltaDD[i] << endl;
		cout << i << " Left reading is: " << lReading[i] << endl;
		cout  << " Right Reading is: " << rReading[i] << endl;
		cout <<  " Difference is: " << diff[i] << endl; 
		cout << "<d> is: " << d << endl;
		cout << " Delta d[i] is: " << deltaD[i] << endl;
		cout << " Delta d[i] ^2 is: " << deltaDD[i] << endl << endl;;
	}
	cout << "<d> = sum(d[i] / n) = " << summDiff << '/' << n << " = " << d << endl;
	cout << "Sigma d = sqrt(" << sumDeltaDD << " * 10^(-6) /" << "N(N - 1)" << n * (n - 1) << ") = "<< sqrt(sumDeltaDD / ( n * (n - 1))) << endl;
	sigma = round(sqrt(sumDeltaDD / ( n * (n - 1))) * 10)/10;
	cout << "Deleting all non-zero digits" << endl;
	cout << "Sigma d = sqrt(" << sumDeltaDD << " * 10^(-6) /" << "N(N - 1)" << n * (n - 1) << ") = "<< sigma << endl;
	cout << "Answer: " << d << " m +/- " << sigma << " m";
	
}
