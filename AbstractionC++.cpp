#include<bits/stdc++.h>

using namespace std;

class Add{
	public:
		Add(int i=0){
			total = i;}
			
		//Interface to the outside world
		void addNum(int num){
			total += num;}
			
		//Interface to the outside world
		int getTotal(){
			return total;}
		
	private:
		//hidden from the outside world
		int total;
};

int main(){
	Add a;
	
	a.addNum(10);
	a.addNum(5);
	
	cout << "Total - " << a.getTotal() ;
	}
