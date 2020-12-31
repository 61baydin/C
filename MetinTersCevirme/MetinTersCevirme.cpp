#include <iostream>
using namespace std;

int main(){
	string metin,tMetin;
	cout<<"Metin Giriniz: ";
	getline(cin,metin);
	
	for (int i=metin.size()-1;i>=0;i--)
		tMetin+=metin[i];
	
	cout<<"Ters Cevrilmis Metin: "<<tMetin;
	return 0;
}
