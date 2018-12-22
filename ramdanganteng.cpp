//  By Mr.Rm19
#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

int main(){
string lk,nm;
int opt; char why;
system("clear");
veve:
system("toilet -f pagga rocket file-dl  | lolcat");
cout << "                 downloader file apapun   " << endl;
cout << endl;
cout << "\033[97mCoded By : \033[92Mr.Rm19 \033[97m" << endl;
cout << "Team     : \033[92mRamdan19id@gmail.com\033[97m" << endl;
cout << "Telegram : \033[92github.com/Rmdn19id" << endl;
cout << endl;
cout << "=================================" << endl;
cout << "[1]with curl" << endl;
cout << "[2]with wget " << endl;
cout << "[3]speedtest.net" << endl;
cout << "[4]install DULU" << endl;
cout << "[5]Exit " << endl;
cout << "=================================" << endl;
cout << endl;
cout << "r0ck3T/> "; cin >> opt;
cout << endl;

if(opt==1){
cout << endl;
cout << "=======Download with curl========" << endl;
cout << "[*]File Name   : "; cin >> nm;
cout << "[*]Input Link  : "; cin >> lk;
cout << endl;
cout << "[!]" << system("date");
cout << "===============°=================" << endl;
system(string("curl -o "+nm+" "+lk).c_str());
cout << "=================================" << endl;

cout << "Back To Menu [y/n] : ";cin >> why;
if((why=='y')||(why=='Y')){
system("clear");
goto veve;
}

}
else if(opt==2){
cout << endl;
cout << "=======Download with wget========" << endl;
cout << "[*]File Name   : "; cin >> nm;
cout << "[*]Input Link  : "; cin >> lk;
cout << endl;
cout << "[!]" << system("date");
cout << "=================================" << endl;
system(string("wget -O "+nm+" "+lk).c_str());
cout << "=================================" << endl;
cout << endl;
cout << "Back To Menu [y/n] : ";cin >> why;
if((why=='y')||(why=='Y')){
system("clear");
goto veve;
}
}
else if(opt==3){
cout << "[!]Please Wait........" << endl;
cout << "==================================" << endl;
system(string("pip install speedtest-cli").c_str());
system("date");
system("speedtest-cli");
cout << "==================================" << endl;
cout << endl;
cout << "Back To Menu [y/n] : ";cin >> why;
if((why=='y')||(why=='Y')){
system("clear");
goto veve;
}

}
else if(opt==4){
cout << "[!]Please Wait | ";
system("date");
system("apt-get install curl");
system("apt-get install wget");
system("pip install speedtest-cli");
system("apt-get install toilet");
system("apt-get install ruby");
system("gem install lolcat");
system("clear");
goto veve;
}
}
