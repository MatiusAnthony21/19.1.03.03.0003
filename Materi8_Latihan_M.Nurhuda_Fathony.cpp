#include <iostream>
using namespace std;

string hasil [3] = {"Papa", "Kaka","Adik"}; //variabel hasil sebagai variabel global

void tampil () {
	string hasil [3] = {"Afin","Alfon","Ethan"}; //variabel hasil sebagai variabel lokal
	
	for (int i=0;i<3;i++){
		cout<<"Nama : "<<hasil [i]<<endl;
	}
}

int main ()
{
	tampil ();
	cout<<endl;
	for(int i=0;i<3;i++){
		cout<<"Nama : "<<  hasil[i]<<endl;
	}
	
	return 0;
}