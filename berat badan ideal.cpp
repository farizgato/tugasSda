#include<iostream>
using namespace std;
int main()
{
	string gender;
	float tb, bb, ideal;
	
	cout<<"Masukan gender\t\t: ";cin>>gender;
	
	if(gender=="p"){
		cout<<"Masukan tinggi badan\t: ";cin>>tb;
		cout<<"Masukan berat badan\t: ";cin>>bb;
		ideal=(tb-100)-((tb-100)*0.15);
	}else if(gender=="P"){
		cout<<"Masukan tinggi badan\t: ";cin>>tb;
		cout<<"Masukan berat badan\t: ";cin>>bb;	
		ideal=(tb-100)-((tb-100)*0.15);
	}else if(gender=="L"){
		cout<<"Masukan tinggi badan\t: ";cin>>tb;
		cout<<"Masukan berat badan\t: ";cin>>bb;
		ideal=(tb-100)-((tb-100)*0.1);
	}else if(gender=="l"){
		cout<<"Masukan tinggi badan\t: ";cin>>tb;
		cout<<"Masukan berat badan\t: ";cin>>bb;
		ideal=(tb-100)-((tb-100)*0.1);
	}else{
		cout<<"Invalid gender";
		ideal=0;
	}
	
	cout<<"Berat badan ideal\t: "<<ideal<<endl;
	
	if(ideal!=0){
		if(ideal==bb){
			cout<<"Berat badan tersebut ideal";
		}else if(ideal>bb){
			cout<<"Anda kekurangan berat badan";
		}else{
			cout<<"Anda kelebihan berat badan";
		}
	}
}
