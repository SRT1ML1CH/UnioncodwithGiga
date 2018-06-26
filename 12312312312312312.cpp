#include<iostream>
#include<math.h>
#include<conio.h>
 
using namespace std;
 
class Sample
{
protected:
int n;
int a[100000];
public:
	Sample(){};
	Sample(int count);
	void show();
	void input();
	double average(int n);
	double dispersia(int o);
	double rozmah(int o);
	double kvadra(int o);
};
Sample::Sample(int count)
{
	cout<<"vvedite svou viborku:"<<endl;
	n=count;
	for(int i=0;i<n;i++)
	cin>>a[i];
}
void Sample::show()
{
	cout<<"vasha viborka viglyadit tak: ";
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
}
double Sample::average(int n)
{
	float sum=0,aver;
	for(int i=0;i<n;i++)
	sum+=a[i];
	aver=sum/n;
	cout<<endl<<"seredne arefm. vashoi viborki viglyadit tak: "<<aver;
	cout<<endl;
}
double Sample::dispersia(int o) {
    float y,h,l,l1;
    for(int i=0;i<o;i++)
    {
        y+=a[i];
        h=y/o;
        l+=a[i]-h;
        l1=l/(o-1);    
    }
    cout<<"DISPERSIYA VIBORKI: "<<l1;
    cout<<endl; }
   double Sample::rozmah(int o)
{
int max=a[0];
for(int i=0;i<o;i++)
if(a[i]>max)max=a[i];
float min=a[0];
for(int i=0;i<o;i++)
if(a[i]<min)min=a[i];
cout<<"ROZMAH VIBORKI: "<<max-min;
cout<<endl;
}
double Sample::kvadra(int o)
{
float y,h,z,s,z1;
for(int i=0;i<o;i++)
y+=a[i];
h=y/o;
y=0;
for(int i=0;i<o;i++)
{
y+=a[i];
 s+=y-h;
z+=pow(s,2);
}
z1=z/o;
cout<<"SEREDNOKVADRATICHNE VIDHILENNYA: "<<z1<<endl;
}

int main()
{
	int y,n; 
	cin>>y;
	n=y;
	Sample obj1(n);
	obj1.show();
	obj1.average(n);
	obj1.dispersia(n);
	obj1.rozmah(n);
	obj1.kvadra(n);
	getch();
	return 0;
}
