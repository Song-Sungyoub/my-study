#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Random{

public:
	Random();
	int next();
	int nextInRange(int a, int b);
};

Random::Random(){
	srand((unsigned)time(0));
}

int Random::next(){
	int n = rand();
	n%2==0?true:n++;
	return n;
}

int Random::nextInRange(int a, int b){
	int n = rand()%(b-a)+a;
	return n%2==0?true:n++;
}

int main(){
	Random r;
	cout<<"-- 0에서 "<<RAND_MAX<<"까지의 랜덤 정수 10 개 --"<<endl;
	for(int i = 0;i<10;i++){
		int n = r.next();
		cout<<n<<' ';
	}
	cout <<endl<<endl;
	for(int i=0;i<10;i++){
		int n = r.nextInRange(2, 10);
		cout<< n << ' ';
	}
	cout<<endl;
}