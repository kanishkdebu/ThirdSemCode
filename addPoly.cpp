//addition of polynomials
/*
#include<iostream>
#include<math.h>

using namespace std;

struct Poly
{
	int exp;
	int coeff;

};
int takePoly(struct Poly[]);
void addPoly(struct Poly[], struct Poly[], struct Poly[], int, int, int*);
void showPoly(struct Poly[], int);

void main()
{
	struct Poly p1[10], p2[10], p3[20];
	int s1, s2, s3 = 0;
	cout << "Enter first polynomials values : " << endl;
	s1 = takePoly(p1);
	cout << "Enter second polynomials values : " << endl;
	s2 = takePoly(p2);
	cout << endl;

	addPoly(p1, p2, p3, s1, s2, &s3);

	showPoly(p1, s1); 
	cout << " + ";
	showPoly(p2, s2);
	cout << " = ";
	showPoly(p3, s3);
	cout << endl;
}

int takePoly(struct Poly p[])
{
	int size = 0;
	int a;
	int e;
	int reset = 0;
	do
	{
		cout << "Enter coefficient : ";
		cin >> a;
		cout << "Enter exponent : ";
		cin >> e;
		p[size].coeff = a;
		p[size].exp = e;
		cout << "Want to add more ? press 1 to continue 0 to end" << endl;
		cin >> reset;
		size++;
	} while (reset != 0);
	
	return size;
}

void addPoly(Poly p1[], Poly p2[], Poly p3[], int s1, int s2, int *s3)
{
	int i, j, k;
	i = j = k = 0;
	while (i < s1 && j < s2)
	{
		if (p1[i].exp == p2[j].exp)
		{
			p3[k].exp = p1[i].exp;
			p3[k].coeff = p1[i].coeff + p2[j].coeff;
			i++; j++; k++;
		}
		else if (p1[i].exp > p2[j].exp)
		{
			p3[k].exp = p1[i].exp;
			p3[k].coeff = p1[i].coeff;
			i++; k++;
		}
		else if (p1[i].exp < p2[j].exp)
		{
			p3[k].exp = p2[j].exp;
			p3[k].coeff = p2[j].coeff;
			j++; k++;
		}
	}

	while (i < s1)
	{
		p3[k].exp = p1[i].exp;
		p3[k].coeff = p1[i].coeff;
		i++; k++;
	}

	while (j < s2)
	{
		p3[k].exp = p2[j].exp;
		p3[k].coeff = p2[j].coeff;
		j++; k++;
	}
	*s3 = k;
}

void showPoly(Poly p[], int s)
{
	for (int i = 0; i < s; i++)
	{
		if (p[i].exp != 0)
			cout << p[i].coeff << "x^" << p[i].exp;
		else
			cout << p[i].coeff;
		if (i < s - 1)
		{
			cout << " + ";
		}
	}
}

//*/