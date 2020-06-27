#include <iostream>
using namespace std;

int hasil = 5;//variabel hasil sebagai variabel global

void tampil (){
	int hasil = 10; //variabel hasil sebagai vriabel lokal
	
	cout<<"Hasil : "<<hasil<<endl;
}

int main ()
{
	tampil();
	cout<<"Hasil : "<<hasil<<endl;
	
	return 0;
}   