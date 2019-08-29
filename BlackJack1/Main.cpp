#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;
int welcome();
int main() {
	welcome();
}
int welcome() {
	cout << "Welcome to BlackJack" << endl << "There is a 'dealer' and a 'player'";
	cout << endl << "The goal is to get closest to 21" << endl;
	cout << "If you or the dealer go over 21 that player is 'bust' and loses.";
	return 0;
}