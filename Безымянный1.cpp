#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

class Sample
{
	private:
	int *a;
	int o;
		public:
			Sample(int o){
			a=new int[o];
		}
		
	void input(int o)
	{
		cout<<"VVEDITE ELEMENTI VASHOI VIBORKI:"<<endl;
		for(int i=0;i<o;i++)
		{
			cin>>a[i];
		}
		cout<<endl;
	}
	void show(const int o)
	{
		cout<<"VASHI ELEMENTI VIBORKI TAKIE:";
		for(int i=0;i<o;i++)
		{
			cout<<" "<<a[i];
		}
		cout<<endl;
	}
	void sred(const int o)
	{
		float y,h;
		for(int i=0;i<o;i++)
		y+=a[i];
		h=y/o;
		cout<<"SREDNEE ZNACHENIE VIBORKI: "<<h;
		cout<<endl;
	}
	void disper(const int o)
	{
		float y,h,l,l1;
		for(int i=0;i<o;i++)
		y+=a[i];
		h=y/o;
		for(int i=0;i<o;i++)
		l+=a[i]-h;
		l1=l/(o-1);
		cout<<"DISPERSIYA VIBORKI: "<<l1;
		cout<<endl;
	}
	void rozmah(const int o)
	{
		float max=a[0];
		for(int i=0;i<o;i++)
		if(a[i]>max)max=a[i];
		float min=a[0];
		for(int i=0;i<o;i++)
		if(a[i]<min)min=a[i];
		cout<<"ROZMAH VIBORKI: "<<max-min;
		cout<<endl;
	}
	~Sample()
		{
			delete[] a;
		}
	
};


int main()
{
	int n;
	cout<<"VVEDITE KOLICHESTVO ELEMENTOV VIBOROK:\n";
	cin>>n;
	cout<<endl;
	Sample a(); 
	a[n].input(n);
	a[n].show(n);
	a[n].sred(n);
	a[n].disper(n);
	a[n].rozmah(n);
	delete []a;
	getch();
	return 0;
}
