// z.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdlib>
using namespace std;

void random(int arr[], int n, int a, int b, int z) {
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % (b - a) + a;
		if (arr[i] < 0) {
			z++;
		}
	}
}

void output(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout<<arr[i]<<" ";
	}
}

int Brr(int arr[], int n, int brr[], int j, int k) {
	for (int i = 0; i < n; i++) {
		if (arr[i] < 0) {
			brr[j++] = k;
			brr[j++] = arr[i];
		}
		else {
			brr[j++] = arr[i];
		}
	}
	return j;
}

int main()
{
	int a, b, n, z = 0, k, j = 0;
	cout << " a : ";
	cin>> a;
	cout << " b : ";
	cin >> b;
	cout<<" k :";
	cin>>k;
	cout << " size of array : ";
	cin >> n;
	int *arr, *brr;
	arr = new int[n];

	random(arr, n, a, b, z);
	output(arr, n);

	cout<<endl;
	brr = new int[n + z];
	j = Brr(arr, n, brr, j, k);

	output(brr, j);
}