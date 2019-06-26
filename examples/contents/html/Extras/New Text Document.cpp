#include<iostream>
#include<fstream>
using namespace std;
main(){
	fstream file;
	file.open("my.xls",ios::out);
	file<<"cell no1 \t"<<"hello\t"<<"cell no3 "<<endl;
	file<<"cellno2";
	file.close();
}
