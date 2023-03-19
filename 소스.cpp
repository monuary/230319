//소유의 관계 역시 아래와 같이 상속의 조건이 되지만, 상속이 아니라 다른 방식을 택하는 경우가 많다.

#include<iostream>
#include<cstring>
using namespace std;

class Gun
{
	int bullet;
public:
	Gun(int bnum):bullet(bnum){}
	void Shot()
	{
		cout << "BBANG!" << endl;
		bullet--;
	}
};

class Police :public Gun
{
	int handcuffs;
public:
	Police(int bnum,int bcuff):Gun(bnum),handcuffs(bcuff){}
	void PutHandcuff()
	{
		cout << "SNAP!" << endl;
		handcuffs--;
	}
};

int main()
{
	Police pman(5, 3);
	pman.Shot();
	pman.PutHandcuff();
	return 0;
}