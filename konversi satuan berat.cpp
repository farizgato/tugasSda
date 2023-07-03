#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	string satuan[]={"kg", "hg", "dag", "g", "dg", "cg", "mg"};
	string awal, akhir;
	int pilih;
	float nilai;
	int x, y;
	int a = sizeof(satuan)/sizeof(*satuan);
	
	do{
		
		cout<<"\tMencari konversi satuan berat"<<endl;
		cout<<"================================================"<<endl;
		
		cout<<"Masukan satuan awal\t: ";cin>>awal;
		cout<<"Masukan satuan akhir\t: ";cin>>akhir;
		cout<<"Masukan nilai\t\t: ";cin>>nilai;
		
		for(int b=0; b < a; b++){
			if(awal==satuan[b]){
				x = b + 1;
			}
			if(akhir==satuan[b]){
				y = b + 1;
			}
		}
		
		int d;
		
		if(x<y){
			int c = y - x;
			for(d = 0; d < c; d++){
				nilai*=10;
			}
		}else if(x>y){
			int c = x - y;
			for(d = 0; d < c; d++){
				nilai/=10;
			}
		}else{
			
		}	
		
		cout<<"Hasil konversi\t\t: "<<nilai;
		cout<<"\n\nIngin mengulang program? (y/t) : ";
		pilih = getch();
		system("cls");
		
	}while(pilih == 121);
	
	cout<<"================================\n";
	cout<<"\tProgram berhenti\n";
	cout<<"================================\n";
	
}
