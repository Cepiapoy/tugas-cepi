//CEPI

#include <iostream>

using namespace std;

int main(){
	//KAMUS
	
	char huruf[3]; //variabel array
	char h; //variabel penentu huruf yang di cari
	int y=0, sum=0;
	//ALGORITMA
	
	while(y <= 3){
			cout<<"+---+\n";
			cout<<"> ";cin>>huruf[y]; //program looping 
			y++;
	}
	
	for(int x=0; x<=3; x++ ){
	cout<<"huruf masukan ke-"<<x<<": "<<huruf[x]<<"\n";
	}
	
	cout<<"masukan huruf penentu "\n;
	cin>>h;
	
	for(int y=0; y<=3; y++ ){
	if(h == huruf[y]){int v=1; sum+=v; }
	}
	
	
	cout<<"jumlah huruf "<<h<<" : sebanyak: "<<sum;
	
}
