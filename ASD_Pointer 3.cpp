#include <iostream>
using namespace std;

int main() {
	
	int a,b,c;
	int *p1,*p2,*p3;
	
	a=10;
	cout<<"Value dari a : "<<a<<endl;
	b=15;
	cout<<"Value dari b : "<<b<<endl;
	p1=&b;
	cout<<"Alamat dari p1 : "<<p1<<endl;
	c=7;
	cout<<"Value dari c : "<<c<<endl;
	p1=&c;
	cout<<"Alamat dari p1 : "<<p1<<endl;
	a=*p1;
	cout<<"Value dari a : "<<a<<endl;
	p3=&b;
	cout<<"Alamat dari p3 : "<<p3<<endl;
	*p2=8;
	cout<<"Value dari p2 : "<<*p2<<endl;
	
	return 0;
}
