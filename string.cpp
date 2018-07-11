#include<iostream>
#include<string>
using namespace std;
int a;
int n;
int i;
class str
{
    public:
	string str1,str2;
	void getstr()
	{
		cout<<"enter string 1:";
		cin>>str1;
		cout<<"\nenter string 2:";
		cin>>str2;

	}
	void prtstr()
	{
		cout<<endl<<"your string 1 is:-"<<str1<<endl;
		a=str1.length();
        cout<<"lenth of string is:"<<str1.length()<<endl;
	}
	void concat()
	{
	    cout<<"conatenation of two strins is:-\n";
        cout<<str1+str2<<endl;
	}
	void substr()
	{
	    cout<<str1.substr(4,2);
	}
	void reverse()
	{
	    string str3;
	    int n,i;
	    n=a;
	    for(i=0;i<a;i++)
	    {
	        str3+=str1[n-1];
	        n--;
	    }
	        cout<<"\nreverserd string is:-\n";
	        cout<<str3;
	}
	void palindrom()
	{
	    int flag;
	    flag=0;
	    n=a;
	    for(i=0;i<a;i++)
	    {
	        if(str1[i]==str1[n])
	        {
	         flag+=1;   
	        }
	        n--;
	    }
	    if(flag==(a-1)/2)
	    {
	    cout<<"\nstr1 is pallindrom";
	    }
	    else
	    cout<<"\nstr1 is not pallindrom";
	    
	    
	}
};
int main()
{
    str s;
    s.getstr();
    s.prtstr();
    s.concat();
    s.substr();
    s.reverse();
    s.palindrom();
    
}