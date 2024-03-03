#include <iostream>
using namespace std;
class ps{
	private:
		int tu,mau;
	public:
		friend istream &operator>>(istream &is,ps &p){
			cout<<"nhap tu: ";
			is>>p.tu;
			cout<<"nhap mau: ";
			is>>p.mau;
			return is;
		}
		friend ostream &operator<<(ostream &os,ps p){
			os<<p.tu<<"/"<<p.mau;
			return os;
		}
		int ucln(int a,int b){
			while(a!=b){
				if(a>b)
				a=a-b;
				else 
				b=b-a;
			}
			return a;
		}
		ps rutgon(){
			int uc=ucln(tu,mau);
			ps t;
		    t.tu=tu/uc;
		    t.mau=mau/uc;
		    return t;
		}
		ps(){
		tu=0;
		mau=1;
		}
		ps(int a,int b){
			tu=a;
			mau=b;
		}
		ps operator -(){
			ps s;
			s.tu=-tu;
			s.mau=mau;
			return s;
		}
		ps operator *(ps p){
			ps s;
			s.tu=p.tu*tu;
			s.mau=p.mau*mau;
			return s.rutgon();
		}
		ps operator +(ps p){
			ps s;
			s.tu=tu*p.mau+p.tu*mau;
			s.mau=p.mau*mau;
			return s.rutgon();
		}
		int operator ==(ps p){
			int kt = (tu*p.mau==p.tu*mau);
			return kt; 
		}
};
int main(){
	ps a,b;
	cout<<"nhap phan so a: "<<endl;cin>>a;
	cout<<"phan so a la: "<<a<<endl;
	cout<<"nhap phan so b: "<<endl;cin>>b;
	cout<<"phan so b la: "<<b<<endl;
	cout<<"phan so -a la:"<<-a<<endl;
	cout<<"phan so a*b la: "<<a*b<<endl;
	cout<<"phan so a+b la: "<<a+b<<endl;
	cout<<"phan so a=b la: "<<(a==b)<<endl;
}