/*#include <iostream>

//Public ile eriþim

class deneme
{
	int x;
	
	public:
		
		void ata(int n)
		{
			x=n;
		}
		
		void goster()
		{
			cout<<x<<endl;
		}
};

class turet:public deneme
{
	int y;
	
	public:
		
		void atatu(int n)
		{
			y=n;
		}
		
		void gostertu()
		{
			cout<<y<<endl;
		}
};

int main ()
{
	turet ob;
	
	ob.ata(23);
	
	ob.atatu(25);
	
	ob.goster();
	
	ob.gostertu();
	
	return 0;
}

*/ /*

#include<iostream>
                         //Private ile kalýtým.
using namespace std;

class deneme 
{
	int x;
	
	public:
		
		int goster()
		{
			return x=25;
		}
};

class turet : private deneme
{
	int y;
	
	public:
		
		int goster()
		{
			return y=58;
		}

int fonk()
{
	int z=goster();
	
	return z;
}

}ob;

int main ()
{
	cout<<"temel siniftan gelen:"<<ob.fonk()<<endl;
	
	cout<<"turetilmis siniftan gelen:"<<ob.goster()<<endl;
	
	return 0;
}

*/







