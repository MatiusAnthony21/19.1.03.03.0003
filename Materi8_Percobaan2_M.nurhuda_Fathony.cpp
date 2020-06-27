#include <iostream>
using namespace std;

int hasil [3] = {7,6,5}; //variabel hasil sebagai variabel global

void tampil () {
	int hasil [3] = {10,11,12}; //variabel hasil sebagai variabel lokal
	
	for (int i=0;i<3;i++){
		cout<<"hasil : "<<hasil [i]<<endl;
	}
}

int main ()
{
	tampil ();
	cout<<endl;
	for(int i=0;i<3;i++){
		cout<<"Hasil : "<<  hasil[i]<<endl;
	}
	
	return 0;
}