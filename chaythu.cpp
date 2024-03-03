#include <iostream>
#include <vector>
using namespace std;
//hàm in vector
template<class t>
void printvecto(vector<t> a,string name){
	cout<<"\nnoi dung cua vecto "<<name<<": ";
	for(int i=0;i<a.size();i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
//hàm in thông tin vector
template<class t>
void infor(vector<t> a){
	if(!a.empty()){
		cout<<"phan tu dau la: "<<a.front()<<endl;
		cout<<"phan tu cuoi la:"<<a.back()<<endl;
	}
	cout<<"so phan tu trong vecto la: "<<a.size()<<endl;
}
int main(){
	//khai báo vecto
	vector<int> va;
	printvecto(va,"va");
	vector<int> vb(8,100);
	printvecto(vb,"vb");
	vector<int> vc(5);
	printvecto(vc,"vc");
	//gán va thong tin vecto
	for(int i=0;i<vc.size();i++){
		vc[i]=i*2+1;
	}
	va=vc;
	cout<<"thong tin vector a: "<<endl;
	printvecto(va,"va");
	infor(va);
	cout<<"thong tin vector b: "<<endl;
	printvecto(vb,"vb");
	infor(vb);
	cout<<"thong tin vector c: "<<endl;
	printvecto(vc,"vc");
	infor(vb);
	//bổ sung và xóa
	cout<<endl<<"BO SUNG THONG TIN"<<endl;
	//va ban đầu
	printvecto(va,"va");
	//va bỏ phần tử cuối
	va.pop_back();
	printvecto(va,"va");
	//va thêm phần tử cuối là 3
	va.push_back(3);
	printvecto(va,"va");
	//va thêm phần tử ở vị trí cụ thể
	va.insert(va.begin(),30);
	va.insert(va.begin()+2,45);
	printvecto(va,"va");
	//va xóa phần tử ở vị trí cụ thể
	va.erase(va.begin()+2);
	//va xóa 1 đoạn phần tử
	va.erase(va.begin()+1,va.begin()+3);
	printvecto(va,"va");
	//xóa cả vector a
	va.clear();
	printvecto(va,"va");
	//hoán đổi vector a và b
	va.swap(vb);
	printvecto(va,"va");
	//thay đổi kích thước và thêm giá trị cho vector
	va.resize(10,12);
	printvecto(va,"va");
	va.resize(13);
	printvecto(va,"va");
	//sử dụng con trỏ để truy cập vector
	int *p =va.data();
	*(p+4)=74;
	p[7]=4;
	printvecto(va,"va");
}
