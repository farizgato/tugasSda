#include<iostream>
using namespace std;
int main()
{
	float nilai;
	string a;
	
	do{
	
	cout<<"Masukan Nilai\t: ";cin>>nilai;
	
		if(nilai<=40 && nilai>=0){
			cout<<"Nilai\t= E";
		}else if(nilai<=60){
			cout<<"Nilai\t= D";
		}else if(nilai<=75){
			cout<<"Nilai\t= C";
		}else if(nilai<=85){
			cout<<"Nilai\t= B";
		}else if(nilai<=100){
			cout<<"Nilai\t= A";
		}else{
			cout<<"Invalid Input";
		}
		
		cout<<"\nLanjutkan program (y/t) ? ";cin>>a;
		cout<<endl;
		system("cls");
		
	}while(a == "y");
	
	cout<<"\nTerimakasih dan Sampai Jumpa\n";
}
