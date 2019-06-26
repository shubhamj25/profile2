#include<iostream>
#include<string>
#include<fstream>
#include<windows.h>
#include <conio.h>
using namespace std;
main(){
	string username;
string password="";
char ch;
int sum;

cout<<"Username :\n";
getline(std::cin,username);
cout<<"Password :\n";
ch = _getch();
 while(ch != 13){//character 13 is enter
      password.push_back(ch);
      cout << '*';
      ch = _getch();
   }
if(password=="thapar@123")
{
cout<<"\nLogged in Successfully";

fstream file;
file.open("login.html",ios::out);
file<<"<html><body bgcolor=#900C3F><h3><b><font color=#FFDCB1>LOGGED IN AS :&nbsp&nbsp&nbsp"<<username<<"</font></b></h3></body></html>";
file.close();
file.open("sdetails.html",ios::out);
file<<"<html><meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\"><BODY BGCOLOR=#FFDCB1><head><style>a:link{color:white;text-decoration:none;}a:visited{color:white;text-decoration:none;}a:hover{color:hotpink;text-decoration:none;}a:active{color:#FFC13B;text-decoration:none;}";

file<<".button {\n";
file<<"  display: inline-block;\n";
file<<"  border-radius: 4px;\n";
file<<"  background-color:#FF5733  ;\n";
file<<"  border: none;\n";
 file<<" color: white;\n";
 file<<"text-align: center;\n";
 file<<" font-size: 28px;\n";
 file<<" padding: 10px;\n";
 file<<" width: 250px;\n";
 file<<" transition: all 0.5s;\n";
 file<<" cursor: pointer;\n";
 file<<" margin: 5px;\n}";

file<<".button span {\n";
 file<<" cursor: pointer;\n";
 file<<" display: inline-block;\n";
 file<<" position: relative;\n";
 file<<" transition: 0.5s;\n}\n";

file<<".button span:after {\n";
 file<<"content: \"\\00bb\";\n";
 file<<" position: absolute;\n";
 file<<" opacity: 0;\n";
 file<<" top: 0;\n";
 file<<"right: -20px;\n";
  file<<"transition: 0.5s;\n}";

file<<".button:hover span {\n";
 file<<" padding-right: 15px;\n}";

file<<".button:hover span:after {\n";
 file<<" opacity: 1;\n";
 file<<" right: 0;\n}";

file<<"</style></head><ul><FONT COLOR=\"white\" SIZE=\"5\" FACE=\"calibri\"><a href=";
file<<"\"PROFILES\\";
file<<username;
file<<".html\" target=";
file<<"\"right";
file<<"\"><button class=\"button\" style=\"vertical-align:middle\"><FONT COLOR=\"white\" SIZE=\"5\" FACE=\"calibri\"><span>Load Profile</span></FONT></button></a>&nbsp&nbsp<a href=\"PROFILES\\profile.exe\"><button class=\"button\" style=\"vertical-align:middle\"><FONT COLOR=\"white\" SIZE=\"5\" FACE=\"calibri\"><span>Create New Profile</span></FONT></button></a></ul></FONT></BODY></html>";
file.close();


file.open("sfees.html",ios::out);
file<<"<html><BODY BGCOLOR=#FFDCB1><head><style>\na:link{color:white;text-decoration:none;}\na:visited{color:white;text-decoration:none;}\na:hover{color:hotpink;text-decoration:none;}\na:active{color:#FFC13B;text-decoration:none;}\n";

file<<".button {\n";
file<<"  display: inline-block;\n";
file<<"  border-radius: 4px;\n";
file<<"  background-color:#FF5733  ;\n";
file<<"  border: none;\n";
 file<<" color: white;\n";
 file<<"text-align: center;\n";
 file<<" font-size: 28px;\n";
 file<<" padding: 10px;\n";
 file<<" width: 250px;\n";
 file<<" transition: all 0.5s;\n";
 file<<" cursor: pointer;\n";
 file<<" margin: 5px;\n}";

file<<".button span {\n";
 file<<" cursor: pointer;\n";
 file<<" display: inline-block;\n";
 file<<" position: relative;\n";
 file<<" transition: 0.5s;\n}";

file<<".button span:after {\n";
 file<<"content: \"\\00bb\";\n";
 file<<" position: absolute;\n";
 file<<" opacity: 0;\n";
 file<<" top: 0;\n";
 file<<"right: -20px;\n";
  file<<"transition: 0.5s;\n}";

file<<".button:hover span {\n";
 file<<" padding-right: 15px;\n}";

file<<".button:hover span:after {\n";
 file<<" opacity: 1;\n";
 file<<" right: 0;\n}\n";

file<<"</style></head><ul><FONT COLOR=\"white\" SIZE=\"5\" FACE=\"calibri\"><a href=";
file<<"\"PROFILES\\";
file<<username;
file<<"fees.html\" target=";
file<<"\"right";
file<<"\"><button class=\"button\" style=\"vertical-align:middle\"><FONT COLOR=\"white\" SIZE=\"5\" FACE=\"calibri\"><span>Show Fee Reciept</span></FONT></button></a></FONT></BODY></html>";
file.close();

file.open("smarks.html",ios::out);
file<<"<html><BODY BGCOLOR=#FFDCB1><head><style>\na:link{color:white;text-decoration:none;}\na:visited{color:white;text-decoration:none;}\na:hover{color:hotpink;text-decoration:none;}\na:active{color:#FFC13B;text-decoration:none;}\n";
file<<".button {\n";
file<<"  display: inline-block;\n";
file<<"  border-radius: 4px;\n";
file<<"  background-color:#FF5733  ;\n";
file<<"  border: none;\n";
 file<<" color: white;\n";
 file<<"text-align: center;\n";
 file<<" font-size: 28px;\n";
 file<<" padding: 10px;\n";
 file<<" width: 250px;\n";
 file<<" transition: all 0.5s;\n";
 file<<" cursor: pointer;\n";
 file<<" margin: 5px;\n}";

file<<".button span {\n";
 file<<" cursor: pointer;\n";
 file<<" display: inline-block;\n";
 file<<" position: relative;\n";
 file<<" transition: 0.5s;\n}";

file<<".button span:after {\n";
  file<<"content: \"\\00bb\";\n";
 file<<" position: absolute;\n";
 file<<" opacity: 0;\n";
 file<<" top: 0;\n";
 file<<"right: -20px;\n";
  file<<"transition: 0.5s;\n}";

file<<".button:hover span {\n";
 file<<" padding-right: 15px;\n}";

file<<".button:hover span:after {\n";
 file<<" opacity: 1;\n";
 file<<" right: 0;\n}";

file<<"</style></head><FONT COLOR=\"white\" SIZE=\"5\" FACE=\"calibri\"><a href=";
file<<"\"PROFILES\\";
file<<username;
file<<"marks.html\" target=";
file<<"\"right";
file<<"\"><button class=\"button\" style=\"vertical-align:middle\"><FONT COLOR=\"white\" SIZE=\"5\" FACE=\"calibri\"><span>Show Result</span></FONT></button></a></FONT>&nbsp&nbsp&nbsp&nbsp<a href=\"PROFILES\\"<<username<<"marks.html\" target=\"_blank\"><button class=\"button\" style=\"vertical-align:middle\"><FONT COLOR=\"white\" SIZE=\"5\" FACE=\"calibri\"><span>Print Result</span></FONT></button></a></BODY></html>";
file.close();

}
else
{
	MessageBox(0,"Incorrect Passkey!/n Please Click On Login Again \n Thanku :)","TIET",MB_OK);
}
}
