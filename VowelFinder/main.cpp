#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
string s;
char a;
ofstream f1,f2;
ifstream f3;

f1.open("2.txt",ios::out);
if(!f1)
{
cout<<"the file was unable to open";
return 0;
}

cout<<"enter your desired text:";
getline(cin,s);

f1<<s;
f1.close();

f3.open("2.txt",ios::in);
if(!f3)
{
cout<<"unable to open the file";
return 0;
}
int b=0;
cout<<"The vowels present in string saved in the file are:"<<endl;
while(!f3.eof())
{
a=f3.get();
if(a=='a'|a=='e'|a=='i'|a=='o'|a=='u')
{
cout<<a<<endl;
b++;
}

}

cout<<"the number of vowels are :"<<b;
}
