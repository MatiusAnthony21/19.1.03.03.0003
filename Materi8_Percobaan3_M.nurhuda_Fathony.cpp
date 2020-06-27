#include <iostream>
using namespace std;

int hasil = 5; //variabel hasil ebagai variabel global

void tampil (){
	cout<<"Hasil : "<<hasil<<endl;
	hasil = 4;
}

int main()
{
	tampil ();
	cout<<"Hasil : "<<hasil<<endl;
	
	return 0;
}