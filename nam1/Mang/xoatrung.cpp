#include<iostream>
using namespace std;

void nhapmang(int a[], int &n)
{
	cout << "Do lon cua mang la: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "A["<<i<<"]=";
		cin >> a[i];
	}
}

void xuatmang(int a[], int &n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i]<<"		";
	}
}

void huy(int a[], int &n, int p)
{
	for (int i = p; i < n; i++)
	{
		
		a[i] = a[i + 1];
	}
	n--;
}

void xoatrung(int a[], int &n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] == a[j]) huy(a, n, j);
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i];
	}
}
void main()
{
	int a[20], n;
	nhapmang(a, n);
	xuatmang(a, n);
	cout << "Cac phan tu cua mang sau di xoa trung la: ";
	xoatrung(a, n);
}