#include <iostream>
using namespace std;

int main() {
	int x,y;
	int *p1,*p2;
	
	x=5;
	y=10;
	
	p1=&y;
	p2=&x;
	
	*p1=*p2;
	*p2=7;
	p1=p2;
	
	p1=&x;
	*p1=y;
	
	cout<<"Value dari x : "<<x<<endl;
	cout<<"Value dari y : "<<y<<endl;
	cout<<"Value dari p1 : "<<*p1<<endl;
	cout<<"Value dari p2 : "<<*p2<<endl;
	
	return 0;
}
