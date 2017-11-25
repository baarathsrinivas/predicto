#include<iostream>
#include<fstream>
#include<string>
char notochar(int x);
int chartono(char x);
using namespace std;
int main()
{
    ifstream ftp1;
    fstream ftp2;
    string str1,str2;
    ftp1.open("testingfile.txt", ios::in);
    ftp2.open("file1.txt");
    while (!ftp1.eof())
    {
        int i,x;
        ftp1>>str1;
        cout<<str1<<endl;
        while(!ftp2.eof())
        {
            ftp2>>str2;
        if (str1==str2)
        {
            str1.append("%%1");
            ftp2<<str1;
            cout<<"#";
        }
        else{
        for(i=0;i<str2.size();i++)
        {
            if(str2[i]=='%'&&str2[i+1]=='%')
            {
                i=i+2;
                x= chartono(str2[i]);
                x=x+1;
                char num= notochar(x);
                str2[i]=num;
            }
        }
        cout<<"*";
        }
        cout<<"done....";
        }
    }
    int e;
    cout<<"enter 1 to exit"<<endl;
    cin>>e;
    return (0);
}
char notochar(int x)
{
    char i;
    switch(x)
    {
    case 1:
        i='1';
        break;
    case 2:
        i='2';
        break;
    case 3:
        i='3';
        break;
    case 4:
        i='4';
        break;
    case 5:
        i='5';
        break;
    case 6:
        i='6';
        break;
    }
    return(i);
}
int chartono(char x)
{
    int i;
    switch(x)
    {
    case '1':
        i=1;
        break;
    case '2':
        i=2;
        break;
    case '3':
        i=3;
        break;
    case '4':
        i=4;
        break;
    case '5':
        i=5;
        break;
    case '6':
        i=6;
        break;
    }
    return(i);
}
