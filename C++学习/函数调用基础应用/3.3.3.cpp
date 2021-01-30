#include<iostream> 
using namespace std;
enum GameStatus{
	WIN,LOSE,PLAYING
};
int main(){
	int sum,myPoint;
	GameStaus status;
	unsigned seed;
	int rollDice();
	cout << "Please enter an unsigned integer:";
	cin >> seed;
	srand(seed)
	sum =rollDice();
	
} 
