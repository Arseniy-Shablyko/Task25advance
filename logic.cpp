#include "logic.h"
bool check_players(int players) {
	if (players < 2 || players > 10) {
		return false;
	}
	else {
		return true;
	}
}

string get_card_worthy(int card_worthy) {
	string card = "";

	if (card_worthy == 1) {
		card += "ace ";
	}
	else if (card_worthy == 2) {
		card += "two ";
	}
	else if (card_worthy == 3) {
		card += "three ";
	}
	else if (card_worthy == 4) {
		card += "four ";
	}
	else if (card_worthy == 5) {
		card += "five ";
	}
	else if (card_worthy == 6) {
		card += "six ";
	}
	else if (card_worthy == 7) {
		card += "seven ";
	}
	else if (card_worthy == 8) {
		card += "eight ";
	}
	else if (card_worthy == 9) {
		card += "nine ";
	}
	else if (card_worthy == 10) {
		card += "ten ";
	}
	else if (card_worthy == 11) {
		card += "jack ";
	}
	else if (card_worthy == 12) {
		card += "queen ";
	}
	else if (card_worthy == 13) {
		card += "king ";
	}

	return card;
}

string get_card_suit(int card_suit) {
	string card = "";

	if (card_suit == 1) {
		card += "peaks";
	}
	else if (card_suit == 2) {
		card += "clubs";
	}
	else if (card_suit == 3) {
		card += "worms";
	}
	else if (card_suit == 4) {
		card += "diamonds";
	}

	return card;
}

string get_card(int players) {
	bool checked_players = check_players(players);
	if (checked_players == false) {
		return "Error";
	}

	int all_cards = 52;
	int random_card_suit = rand() % (4 - 1 + 1) + 1;
	int random_card_worthy = rand() % (12 - 1 + 1) + 1;
	//cout << "random_card_suit: " << random_card_suit << endl;
	//cout << "random_card_worthy: " << random_card_worthy << endl;
	string card = get_card_worthy(random_card_worthy) + get_card_suit(random_card_suit);

	return card;
}