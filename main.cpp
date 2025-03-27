#include "logic.h"
int main() {
	int players;
	cout << "Input number of players: ";
	cin >> players;

	for (int i = 0; i < players; i++) {
		string player_cards = get_card(players) + " " + get_card(players);
		cout << "Player " << i + 1 << ": " << player_cards << endl;
	}

	string table_cards = get_card(players) + " " 
		+ get_card(players) + " " 
		+ get_card(players) + " " 
		+ get_card(players) 
		+ " " + get_card(players) 
		+ " ";
	cout << "Table: " << table_cards << endl;

	return 0;
}