#include <iostream>
using namespace std;

int main() {
	
	int a,b,c;
	int *p1,*p2,*p3;
	
	a=10;
	cout<<"Value dari a : "<<a<<endl;
	b=15;
	cout<<"Value dari b : "<<b<<endl;
	c=7;
	cout<<"Value dari c : "<<c<<endl;
	p1=&a;
	cout<<"Alamat dari p1 : "<<p1<<endl;
	p2=&b;
	cout<<"Alamat dari p2 : "<<p2<<endl;
	*p1=c;
	cout<<"Value dari *p1 : "<<*p1<<endl;
	a=*p2;
	cout<<"Value dari a : "<<a<<endl;
	b=6;
	cout<<"Value dari b : "<<b<<endl;
	p3=&b;
	cout<<"Alamat dari p3 : "<<p3<<endl;
	p3=&c;
	cout<<"Alamat dari p3 : "<<p3<<endl;
	*p1=*p3;
	cout<<"Value dari *p1 : "<<*p1<<endl;
	
	return 0;
	
}
