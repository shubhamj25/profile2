#include <string>
#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <windows.h>
using namespace std;
int main() {int x,y,z;
    string filename;
    string outname;
    string outputname;
    string markname;
    string name,fname,email,adress,mobile,desc,branch,hostel,gradecom,grademat,gradephy,gradeec,gradepc,gradeed,result,sem;
	float maths,phy,ed,comp2,pc,ec,gpcom,gpm,gpphy,gppc,gped,gpec,CG;
    cout<<"Enter the Enrollment Number :\n";
    getline(std::cin, filename);
    cout<<"Enter the Name of Student:\n";
    getline(std::cin, name);
     cout<<"Enter Father's Name :\n";
    getline(std::cin, fname);
     cout<<"Enter Address :\n";
    getline(std::cin, adress);
    cout<<"Enter Branch :\n";
    getline(std::cin, branch);
     cout<<"Cutternt Semester :\n";
    getline(std::cin, sem);
     cout<<"Description :\n";
    getline(std::cin, desc);
     cout<<"Contact :\n";
    getline(std::cin, mobile);
     cout<<"Email :\n";
    getline(std::cin, email);
    cout<<"Enter Hostel Alphabet in CAPS PLEASE :\n";
    getline(std::cin, hostel);
     cout<<"Enter marks in Comuter Programing (II) :\n";
    cin>>comp2;
    if(comp2>=80){gradecom="A";gpcom=10;}
    if((comp2<80)&&(comp2>=70)){gradecom="B";gpcom=9;}	
	if((comp2<70)&&(comp2>=60)){gradecom="C";gpcom=8;}
	if((comp2<60)&&(comp2>=50)){gradecom="D";gpcom=7;}
	if(comp2<50){gradecom="E";gpcom=6;}
     cout<<"Enter marks in Mathematics (II) :\n";
    cin>>maths;
    if(maths>=80){grademat="A";gpm=10;}
    if((maths<80)&&(maths>=70)){grademat="B";gpm=9;}	
	if((maths<70)&&(maths>=60)){grademat="C";gpm=8;}
	if((maths<60)&&(maths>=50)){grademat="D";gpm=7;}
	if(maths<50){grademat="E";gpm=6;}
     cout<<"Enter marks in Applied Physics (II) :\n";
    cin>>phy;
	if(phy>=80){gradephy="A";gpphy=10;}
    if((phy<80)&&(phy>=70)){gradephy="B";gpphy=9;}	
	if((phy<70)&&(phy>=60)){gradephy="C";gpphy=8;}
	if((phy<60)&&(phy>=50)){gradephy="D";gpphy=7;}
	if(phy<50){gradephy="E";gpphy=6;} 
	 cout<<"Enter marks in Electronics Engineering (II) :\n";
    cin>>ec;
	if(ec>=80){gradeec="A";gpec=10;}
    if((ec<80)&&(ec>=70)){gradeec="B";gpec=9;}	
	if((ec<70)&&(ec>=60)){gradeec="C";gpec=8;}
	if((ec<60)&&(ec>=50)){gradeec="D";gpec=7;}
	if(ec<50){gradeec="E";gpec=6;} 
	 cout<<"Enter marks in Proffesional Communication :\n";
    cin>>pc; 
    if(pc>=80){gradepc="A";gppc=10;}
    if((pc<80)&&(pc>=70)){gradepc="B";gppc=9;}	
	if((pc<70)&&(pc>=60)){gradepc="C";gppc=8;}
	if((pc<60)&&(pc>=50)){gradepc="D";gppc=7;}
	if(pc<50){gradepc="E";gppc=6;}
	 cout<<"Enter marks in Engineering Drawing :\n";
    cin>>ed;
    if(ed>=80){gradeed="A";gped=10;}
    if((ed<80)&&(comp2>=70)){gradeed="B";gped=9;}	
	if((ed<70)&&(comp2>=60)){gradeed="C";gped=8;}
	if((ed<60)&&(comp2>=50)){gradeed="D";gped=7;}
	if(ed<50){gradeed="E";gped=6;}
    MessageBox(0,"Thank You :)\nYour Profile has been created!","TIET",MB_OK);
    CG=(gpcom+gpm+gpphy+gped+gpec+gppc)/6;
    if(CG>6.9){
    	result="P A S S";
	}
	else
	{
		result="F A I L";
	}
	
		fstream file;
	file.open("Database.html",ios::app);
	file<<"<tr>";
 file<<"<td><font face=\"calibri\">"<<filename<<"</font></td>";
 file<<"<td><font face=\"calibri\">"<<name<<"</font></td>";
 file<<"<td><font face=\"calibri\">"<<fname<<"</font></td>";
 file<<"<td><font face=\"calibri\">"<<adress<<"</font></td>";
 file<<"<td><font face=\"calibri\">"<<desc<<"</font></td>";
 file<<"<td><font face=\"calibri\">"<<branch<<"</font></td>";
 file<<"<td><font face=\"calibri\">"<<email<<"</font></td>";
 file<<"<td><font face=\"calibri\">"<<mobile<<"</font></td>";
 file<<"<td><font face=\"calibri\">"<<hostel<<"</font></td>";
 file<<"<td><font face=\"calibri\">"<<CG<<"</font></td>";
 file<<"<td><font face=\"calibri\">"<<sem<<"</font></td>";
	file<<"</tr>";
	file.close();
	
	
    
    
     ifstream inStream;
    ofstream outStream;
    inStream.open(filename.c_str());
    outname=filename+".html";
    outStream.open(outname.c_str());
   outStream<<"<html><BODY BGCOLOR=#FFDCB1><h1><font size=5 face=";
   outStream<<"kristen itc" ;
   outStream<<" color=";
   outStream<<"BLACK";
   outStream<<"><ul><li><h3> Student Details </h3></li></ul></h1><P><ul>";
   
   outStream<<"<li>Enrollment Number :&nbsp&nbsp&nbsp";
   outStream<< filename ;
   outStream<<"</li>";
   
   outStream<<"<li>Name :&nbsp&nbsp&nbsp";
   outStream<< name ;
   outStream<<"</li>";
   
    outStream<<"<li>Father's Name :&nbsp&nbsp&nbsp";
   outStream<< fname ;
   outStream<<"</li>";
   
    outStream<<"<li>Address :&nbsp&nbsp&nbsp";
   outStream<< adress ;
   outStream<<"</li>";
   
   
    outStream<<"<li>Description :&nbsp&nbsp&nbsp<p>";
   outStream<< desc ;
   outStream<<"</p></li>";
   
    outStream<<"<li><b>Branch :&nbsp&nbsp&nbsp";
   outStream<< branch ;
   outStream<<"</li>";
   
     outStream<<"<li>Email :&nbsp&nbsp&nbsp";
   outStream<< email ;
   outStream<<"</li>"; 
   
   outStream<<"<li>Contact :&nbsp&nbsp&nbsp";
   outStream<< mobile ;
   outStream<<"</li>";
   
   outStream<<"<li>Hostel :&nbsp&nbsp&nbsp";
   outStream<< hostel ;
   outStream<<"</li>";
   
 
   
   
   outStream<<"</ul></BODY></html>";
   
   //end of the html coding 
   //starting of second html program
    fstream inputStream;
    ofstream outputStream;
    inputStream.open(filename.c_str());
    outputname=filename+"fees"+".html";
    outputStream.open(outputname.c_str());
   
   outputStream<<"<!DOCTYPE html><html><BODY BGCOLOR=#FFDCB1><head><style>table {width:90%;} table, th, td { border: 1px solid black    border-collapse: collapse;} th, td { padding: 5px;text-align: left;} table.names tr:nth-child(even) {background-color: #eee;} table.names tr:nth-child(odd) {background-color:#fff;} table.names th { background-color: black; color: white}";
 outputStream<<"</style>";
 outputStream<<"</head>";
 outputStream<<"<br><br><br>";
 outputStream<<"<body>";

 outputStream<<"<center>";
 outputStream<<"<table class=\"names\">";
   outputStream<<"<tr>";
    outputStream<<" <th colspan=\"5\"><B>FEE RECIEPT ; ) "<<name<<"</B></th>";
    outputStream<<" <th colspan=\"2\">"<<filename<<"<th> ";
   outputStream<<"</tr>";
   outputStream<<"<tr>";
     outputStream<<"<td  colspan=\"4\"><b>Paid by:</b>  "<< fname <<" ( Father )</td>";
     outputStream<<"<td  colspan=\"4\"><b>Paid to:</b>  Thapar University</td>";
   outputStream<<"</tr>";
   outputStream<<"<tr>";
     outputStream<<"<td colspan=\"5\"><B>DESCRIPTION</B></td>";
    outputStream<<" <td colspan=\"3\"><B>AMOUNT</B></td>";
   outputStream<<"</tr>";
   outputStream<<"<tr>";
    outputStream<<" <td rowspan=\"5\">This Fee Reciept includes all information <br>about the inclusion of the Course fee +<br> hostel fees  (All inclusive of taxes ).";
     outputStream<<" <br><br><b>Name :</b> "<<name<< " ( " <<filename <<" )<BR><B>Branch :</b>"<<branch;
 outputStream<<"</td>";
    outputStream<<" <td colspan=\"4\"><b>Course Fee :</b></td>";
     outputStream<<"<td colspan=\"3\">Rs. ";
	 if (branch=="CS"||branch=="computer science"||branch=="computers"||branch=="coe"||branch=="COE"||branch=="Computer Science"||branch=="Computers")
	 {
	 	outputStream<<" 1,30,000</td>";
	 	x=130000;
	 }
	 if ((branch=="Electronics and Computer ")||(branch=="ENC")||(branch=="enc")||(branch=="electronics and computer")||(branch=="Electronics")||(branch=="ECE")||(branch=="ece")||(branch=="electronics")||(branch=="Mechanical")||(branch=="ME")||(branch=="me")||(branch=="mechanical"))
	 {
	 	outputStream<<" 1,250,000</td>";
	 	 x=125000;
	 }
	if (branch=="Chemical"||branch=="CE"||branch=="ce"||branch=="chemical"||branch=="Electrical"||branch=="EE"||branch=="ee"||branch=="electrical")
	 {
	 	outputStream<<" 1,200,000</td>";
	 	 x=120000;
	 }
	 
	 
	outputStream<<"</tr> <tr>";
    outputStream<<" <td colspan=\"4\"><b>Hostel Fee :<b></td>";
    outputStream<<" <td colspan=\"3\">Rs. ";
    
     if (hostel=="A"||hostel=="B"||hostel=="C"||hostel=="J")
	 {
	 	outputStream<<" 44,000</td>";
	 	 y=44000;
	 }
	 if (hostel=="E"||hostel=="G"||hostel=="I"||hostel=="PG")
	 {
	 	outputStream<<" 40,000</td>";
	 	 y=40000;
	 }
	if (hostel=="K"||hostel=="L"||hostel=="M")
	 {
	 	outputStream<<" 41,000</td>";
	 	 y=41000;
	 }
	
  
  	outputStream<<" <tr>";
    outputStream<<"<td colspan=\"4\"><b>Mess Fee :</b></td>";
   
    outputStream<<"<td colspan=\"3\">Rs.";
	 if (hostel=="A"||hostel=="B"||hostel=="C"||hostel=="J")
	 {
	 	outputStream<<" 16,000</td>"; z=16000;
	 }
	 if (hostel=="E"||hostel=="G"||hostel=="I"||hostel=="PG")
	 {
	 	outputStream<<" 15,000</td>"; z=15000;
	 }
	if (hostel=="K"||hostel=="L"||hostel=="M")
	 {
	 	outputStream<<" 15,000</td>"; z=15000;
	 }
	
    outputStream<<" </tr> ";
    outputStream<<"<tr>";
    outputStream<<"<tr>";
    outputStream<<"<td colspan=\"4\"><b>Tax :</b></td>";
   
    outputStream<<"<td colspan=\"3\">18% GST ( ALL INCLUSIVE IN COURSE + HOSTEL & MESS FEES )</td>";
    outputStream<<"</tr> ";
    outputStream<<"<tr>";
    outputStream<<" <td colspan=\"4\"><b>GRAND TOTAL </b> to be paid by netbanking / credit / debit card<b> :</b></td>";
   
    outputStream<<"<td colspan=\"4\">Rs. ";
    outputStream<<x+y+z;
	
    outputStream<<" </tr> ";

    outputStream<<"</table>";
    outputStream<<"</center>";

    outputStream<<"</body>";
    outputStream<<"</BODY>";
    outputStream<<"</html> ";
    
    //end of another html doc
    //starting another one 
    
    fstream input2Stream;
    ofstream output2Stream;
    input2Stream.open(filename.c_str());
    markname=filename+"marks"+".html";
    output2Stream.open(markname.c_str());
    
    output2Stream<<"<!DOCTYPE html><html><BODY BGCOLOR=#FFDCB1><head><style>table {    width:92%;}table, th, td {    border: 1px solid black;    border-collapse: collapse} th, td {    padding: 5px;    text-align: left;}table.names tr:nth-child(even) {    background-color: #eee;}table.names tr:nth-child(odd) {   background-color:#fff;}table.names th {    background-color: black;    color: white}</style></head><br><br><br><body>";
 

   output2Stream<<"<center>";
   output2Stream<<"<table class=\"names\">";
output2Stream<<"    <tr>";
    output2Stream<<"<th rowspan=\"4\"><B>";
output2Stream<<"<head>";
output2Stream<<"<style>";
output2Stream<<"div {";
    
    
output2Stream<<"}";

output2Stream<<".img1 {";
output2Stream<<"    float: right;";
output2Stream<<"}";

output2Stream<<".clearfix {";
   output2Stream<<" overflow: auto;";
output2Stream<<"}";

output2Stream<<".img2 {";
output2Stream<<"float: left;";
output2Stream<<"}";
output2Stream<<"</style>";
output2Stream<<"</head>";
output2Stream<<"<body bgcolor=#900C3F>";
output2Stream<<"<div class=\"clearfix\">";
output2Stream<<"<img class=\"img2\" src=\"html\\logo.png\">";
output2Stream<<"<CENTER><FONT COLOR=\"white\" SIZE=5 FACE=\"calibri light\"><b>THAPAR INSTITUTE OF ENGINEERING AND TECHNOLOGY </font><BR><FONT COLOR=\"white\" SIZE=4 FACE=\"calibri light\">( Deemed to be University )</font></b></CENTER></div></body>";

output2Stream<<"<H1><br><CENTER>Marksheet ; ) "<<name<<"</CENTER></H1></B></th>";
output2Stream<<"<th colspan=\"2\">"<<filename<<"</th>";
output2Stream<<"</tr>";
 
  
     output2Stream<<"<tr>";
       output2Stream<<"<td>This Marksheet includes all information <br>about the marks you have scored in subjects of your previous semester.These marks are Aggregate. ";
        output2Stream<<"<br><br><b>Name :</b> "<<name <<" ( "<< filename <<" ) "<<"<BR><B>Branch :</b> "<< branch <<" </td> ";
     output2Stream<<"</tr> ";
	
     output2Stream<<"<tr>";
       output2Stream<<"<th><b>Status : "<<result<<"<b></th>";
      output2Stream<<"</tr>";
   output2Stream<<"</table>";

   output2Stream<<"<table class=\"names\">";
       output2Stream<<"<tr>";
   output2Stream<<"<td><b><CENTER>SUBJECT & IT'S DETAILS</CENTER></b></td>";
   output2Stream<<"<td><CENTER><B>AGGREGATE MARKS</CENTER></B></td>";
   output2Stream<<"<td colspace=\"2\"><B><CENTER>GRADES</B></CENTER></td>";
     output2Stream<<"</tr> ";
   output2Stream<<"<tr>";
    output2Stream<<"<tr>";
    output2Stream<<"<td ><b>Computer Programing (II) [Credits = 4.0]:</b><BR>On completion of this course, the students would be able to";
   output2Stream<<"<ul>";
   output2Stream<<"<li>Write, compile and debug programs in C++, use different data types, operators and I/O function in a computer program.</li>";
   output2Stream<<"<li>Comprehend the concepts of classes, objects and apply basics of object oriented programming, polymorphism and inheritance.</li>";
   output2Stream<<"<li>Demonstrate use of file handling.</li>";
   output2Stream<<"<li>Demonstrate use of templates and exception handling.</li>";
   output2Stream<<"<li>Demonstrate use of windows programming concepts using C++</li>";
   output2Stream<<"</ul>";
   output2Stream<<"</td>";
    output2Stream<<"<td><center>"<<comp2<<"</center></td>";
    output2Stream<<"<td colspace =\"2\"><center>"<<gradecom<<"</center></td>";
  
     output2Stream<<"</tr> ";
    output2Stream<<"<tr>";
      output2Stream<<"<td ><b>Mathematics (II) [Credits = 3.5] :</b><br>On completion of this course, the students would be able to";
   output2Stream<<"<ul>";
   output2Stream<<"<li>Solve 1st and 2nd order differential order equation</li>";
   output2Stream<<"<li>Find laplace and laplace inverse of various functions</li>";
   output2Stream<<"<li>Find fourier expansions of various periodic functions and also be able to solve heat and wave equation</li>";
   output2Stream<<"<li>Perform matrix operations</li>";
   output2Stream<<"<ul>";

   output2Stream<<"</td>";
      output2Stream<<"<td><center>"<<maths<<"</center></td>";
     output2Stream<<"<td colspace =\"2\"><center>"<<grademat<<"</center></td>";
    
    output2Stream<<"</tr> ";
    output2Stream<<"<tr>";
       output2Stream<<"<td><b>Applied Physics [Credits = 4.5] :</b><br>On completion of this course, the students would be able to";

   output2Stream<<"<ul>";
   output2Stream<<"<li>Demonstrate a detailed knowledge of oscillations, ultrasonics, electromagnetic waves, wave optics, lasers, and quantum mechanics.</li>";
   output2Stream<<"<li>Discuss how the laws of physics have been exploited and applied in the development and design of simple engineering systems.</li>";
   output2Stream<<"<li>Collate, analyse and formulate an experimental report with error analysis and conclusions.</li>";
   output2Stream<<"</ul>";

   output2Stream<<"</td>";
     output2Stream<<"<td><center>"<<phy<<"</center></td>";
    output2Stream<<"<td colspace =\"2\"><center>"<<gradephy<<"</center></td>";
   
     output2Stream<<"</tr> ";
   output2Stream<<"<tr>";
       output2Stream<<"<td><b>Electronics [Credits = 4.5] : </b><br>On completion of this course, the students would be able to";
   output2Stream<<"<ul>";
   output2Stream<<"<li>Demonstrate the use of semiconductor diodes in various applications.</li>";
   output2Stream<<"<li>Discuss and explain the working of transistors and Operational Amplifiers, their configurations and applications.</li>";
   output2Stream<<"<li>Recognize and apply the number systems and Boolean Algebra.</li>";
   output2Stream<<"<li>Reduce Boolean Expressions and implement them with Logic Gates.</li>";
   output2Stream<<"<li>Analyze, design and Implement combinational and sequential circuits.</li>";
   output2Stream<<"<li>Analyze and differentiate logic families, TTL and CMOS.</li>";
   output2Stream<<"</ul>";


   output2Stream<<"</td>";
    output2Stream<<"<td><center>"<<ec<<"</center></td>";
    output2Stream<<"<td colspace =\"2\"><center>"<<gradeec<<"</center></td>";

    output2Stream<<"<tr>";
       output2Stream<<"<td ><b>Professional Communication [Credits = 4]: </b><br>On completion of this course, the students would be able to";
   output2Stream<<"<ul>";
   output2Stream<<"<li>Apply communication concepts for effective interpersonal communication.</li>";
   output2Stream<<"<li>Select the most appropriate media of communication for a given situation.</li>";
   output2Stream<<"<li>Speak assertively and effectively.</li>";
   output2Stream<<"<li>Write objective organizational correspondence.</li>";
   output2Stream<<"<li>Design effective  resumes,reports and proposals .</li>";
   output2Stream<<"</ul>";

   output2Stream<<"</td>";
   output2Stream<<"<td><center>"<<pc<<"</center></td>";
    output2Stream<<"<td colspace =\"2\"><center>"<<gradepc<<"</center></td>";
   output2Stream<<"<tr>";
      output2Stream<<" <td><b>Engineering Drawing [Credits = 4]: </b><br>On completion of this course, the students would be able to";
   output2Stream<<"<ul>";
   output2Stream<<"<li>creatively comprehend geometrical details of common engineering objects</li>";
   output2Stream<<"<li>draw dimensioned  orthographic and isometric projections of simple engineering objects.</li>";
   output2Stream<<"<li>interpret the meaning and intent of toleranced dimensions and geometric tolerance symbolism;</li>";
   output2Stream<<"<li>create the engineering drawings for simple engineering objects using AutoCAD</li>";
   output2Stream<<"<li>manage screen menus and commands using AutoCAD</li>";
   output2Stream<<"<li>operate data entry modes and define drawings geometrically in terms of Cartesian, polar and relative coordinates in AutoCAD</li>";
   output2Stream<<"<li>create and edit drawings making selections of objects, discriminating by layering and using entities, object snap modes, editing commands, angles and displacements using AutoCAD</li>";
   output2Stream<<"</ul>";

   output2Stream<<"</td>";
    output2Stream<<"<td><center>"<<ed<<"</center></td>";
    output2Stream<<"<td colspace =\"2\"><center>"<<gradeed<<"</center></td>";
 
     output2Stream<<"</tr>"; 
   output2Stream<<"<TR>";
   output2Stream<<"<th><b>CGPA :</B> <TH>";
   output2Stream<<"<TH COLSPAN=\"2\"><CENTER><B> "<< CG <<" </B></CENTER></TH>";
   output2Stream<<"</TR>";
   output2Stream<<"</table>";
   output2Stream<<"</center>";
   
   output2Stream<<"</body>";
   output2Stream<<"</BODY>";
   output2Stream<<"</html>";
   
}
