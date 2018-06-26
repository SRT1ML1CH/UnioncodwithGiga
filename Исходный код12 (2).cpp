#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>


using namespace std;



void proverka(string str,int &count,string str1,int &count1){
	int sch = count;
	int sch1 = count1;

	for(int k=0;k<sch;++k){
	int cnt = 1;
	
	bool rep = false;

	for(int j=0;j<k;++j)
		if(str[k] == str[j]){
			rep = true;
			break;
		}

		if(rep) continue;

		for(int i=k+1;i<sch;++i){
			if(str[k] == str[i])
				++cnt;
		}
		cout<<str[k]<<"-->"<<cnt<<endl;
		
		if(cnt > 1){
		cout<<"Не уникальная"<<endl;
		}
		else{
		cout<<"уникальная"<<endl;
		}
	}
	cout<<endl<<endl;
	for(int k=0;k<sch1;++k){
	int cnt1 = 1;
	
	bool rep1 = false;

	for(int j=0;j<k;++j)
		if(str1[k] == str1[j]){
			rep1 = true;
			break;
		}

		if(rep1) continue;

		for(int i=k+1;i<sch1;++i){
			if(str1[k] == str1[i])
				++cnt1;
		}
		cout<<str1[k]<<"-->"<<1<<endl;
		
		if(cnt1 > 1){
		cout<<"Не уникальная"<<endl;
		}
		else{
		cout<<"Уникальная"<<endl;
		}
	}
	
}

int main(){
setlocale(0,"");
int count,count1;

string arr1;
string arr2;


cout<<"Введите вашу строку: "<<endl;
getline(cin,arr1);

cout<<endl;


cout<<"Введите вашу 2 строку: "<<endl;
getline(cin,arr2);

cout<<endl;



cout<<"Ваши строки: "<<endl;
for(int i=0;i<arr1.size();i++){
	cout<<arr1[i];
}

cout<<endl;
for(int i=0;i<arr2.size();i++){
	cout<<arr2[i];
}
cout<<endl;

cout<<"укажите длину новой строки: "<<endl;
cin>>count;

cout<<"укажите длину 2 новой строки: "<<endl;
cin>>count1;


string s = "...";
string s1 = "..";

int C,C1;
C = arr1.size() - count;
C1 = arr2.size() - count1;

if(s.size() <= C){
	for(int i=0;i<count;i++){
		cout<<arr1[i];
	}
	cout<<s;

}
else{
	for(int i=0;i<count;i++){
		cout<<arr1[i];
	}
	cout<<s1;
}

cout<<endl;
if(s.size() <= C1){
	for(int i=0;i<count1;i++){
		cout<<arr2[i];
	}
	cout<<s;

}
else{
	for(int i=0;i<count1;i++){
		cout<<arr2[i];
	}
	cout<<s1;
}
cout<<endl;


char *newarr1 = new char[count];
char *newarr2 = new char[count1];

for(int i=0;i<count;i++){
	newarr1[i] = arr1[i];
}


cout<<endl;
for(int i=0;i<count1;i++){
	newarr2[i] = arr2[i];
}

cout<<endl;
proverka(newarr1,count,newarr2,count1);

cout<<endl<<endl;

int pa = strcmp(newarr1,newarr2);
	if(pa == 32){
		cout<<"Строки не уникальны"<<endl;
	}
	else{
		cout<<"Строки уникальны"<<endl;
	}

system("pause");
return 0;
}