#include<iostream>
using namespace std;
class rectangle{
	protected:
		float len, wid;
	public:
		getdata(){
		cout<<"ente the values of length="<<endl;
		cin>>len;
		cout<<"enter the values of width="<<endl;
		cin<<wid;
}
};
class Area{
	protected:
		float area;
	public:
		setdata(){
		area=len*wid;
		cout<<"area="<<endl;
}
};
class perimeter{
	protected:
		float perim;
	private:
		perdata(){
		perim=(len+wid)*2;
		cout<<"perim="<<endl;
	}
};
int main(){
	object r;
	r.getdata();
	r.setdata();
	r.perdata();
	return 0;
}
