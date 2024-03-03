#include <iostream>
#include <cmath>
#include <string>
using namespace std;
class diem{
	private: 
	char tendiem;
	float x,y,z;
	string mau;
	int n;
	public:
	friend istream &operator>>(istream &is,diem &d){
			cout<<"nhap ten diem: ";
			is>>d.tendiem;
			cout<<"nhap hoanh do: ";
			is>>d.x;
			cout<<"nhap tung do: ";
			is>>d.y;
			cout<<"nhap cao do: ";
			is>>d.z;
			cout<<"nhap mau: ";
			is.ignore();
			is>>d.mau;		
		return is;
	}
	friend ostream &operator<<(ostream &os,diem d){		
os<<d.tendiem<<"\t"<<d.x<<"\t"<<d.y<<"\t"<<d.z<<"\t"<<d.mau<<endl;
		return os;
	}
	char tend(){
		return this->tendiem;
	}
	float hd(){
		return this->x;
	}
	float td(){
	return this->y;
	}
	float cd(){
	return this->z;
	}
	string getmau(){
		return this->mau;
	}
};
int main(){
	int n;
	cout<<"nhap so diem: ";
	cin>>n;
	diem *a;
	a=new diem[n];
	for(int i=0;i<n;i++){
	cout<<"nhap thong tin diem "<<i+1<<endl;
	cin>>a[i];
	}
	cout<<"diem do xa goc toa do nhat la: "<<endl;
	float max=0.0;
	for(int i=0;i<n;i++){
		if(a[i].getmau()=="do"&&(pow(a[i].hd(),2)+pow(a[i].td(),2)+pow(a[i].cd(),2))>=max)
		max=pow(a[i].hd(),2)+pow(a[i].td(),2)+pow(a[i].cd(),2);
	}
	for(int i=0;i<n;i++){
		if(a[i].getmau()=="do"&&(pow(a[i].hd(),2)+pow(a[i].td(),2)+pow(a[i].cd(),2))==max){
			cout<<a[i]<<endl;
		}
	}
	float kc=0.0;
	for(int i=0;i<n;i++){
		if(a[i].getmau()=="vang"){
			kc+=abs(a[i].hd())+abs(a[i].td())+abs(a[i].cd());
		}
	}
	cout<<"tong kc tu diem vang den goc toa do la: "<<kc/3;}