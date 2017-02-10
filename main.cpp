#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int card1, card2, card3, card4, card5, card6, card7, dealerCard1, dealerCard2, dealerCard3, dealerCard4, dealerCard5, dealerCard6, dealerCard7;
int cardtotal, dealerTotal;
string hitstick;

int main()
{
    void dealCards();
    void dealThirdCard();
    void dealFourthCard();
    void dealFifthCard();
    void dealSixCard();
    void dealSevenCard();
    void bust();
    void winner();
    void dealerPlay();
    void draw();

    cout << "BlackJack - Made by Algore" << endl;
    cout << "---------------------------" << endl;
    cout << endl;
    cout << "Welcome to the game" << endl;
    cout << "press ENTER to start" << endl;
    cin.get();
    dealCards();
    // First 2 cards
    cout << "Your Cards" << endl << card1 << endl << card2 << endl;
        cardtotal = card1 + card2;
    cout << "Card Total: " << cardtotal << endl;
    cin.get();
        if (cardtotal > 21) {
            bust();
        }
        if (cardtotal == 21) {
            winner();
        }
    cout << "'hit' or 'stay'" << endl;
    cin >> hitstick;
        if (hitstick=="hit") {
            dealThirdCard();
        }else {
            dealerPlay();
        }
        system("cls");
        // third card
    cout << "BlackJack - Made by Algore" << endl;
    cout << "---------------------------" << endl;
    cout << endl;
    cout << "Here are your cards" << endl;
    cout << card1 << endl << card2 << endl << card3 << endl;
        cardtotal = cardtotal + card3;
    cout << "Your card total is: " << cardtotal << endl;
    cin.get();
        if (cardtotal > 21) {
            bust();
        }
        if (cardtotal == 21) {
            winner();
        }
    cout << "'hit' or  'stay'" << endl;
    cin >> hitstick;
        if (hitstick=="hit") {
            dealFourthCard();
        }else {
            dealerPlay();
        }
    system("cls");
    // fourth card
    cout << "BlackJack - Made by Algore" << endl;
    cout << "---------------------------" << endl;
    cout << endl;
    cout << "Your Cards" << endl;
    cout << card1 << endl << card2 << endl << card3 << endl << card4 << endl;
        cardtotal = cardtotal + card4;
    cout << "Your card total is: " << cardtotal << endl;
        if (cardtotal > 21) {
            bust();
        }
        if (cardtotal == 21) {
            winner();
        }
            cout << "'hit' or  'stay'" << endl;
    cin >> hitstick;
        if (hitstick=="hit") {
            dealFifthCard();
        }else {
            dealerPlay();
        }
      system("cls");
      // fifth card
    cout << "BlackJack - Made by Algore" << endl;
    cout << "---------------------------" << endl;
    cout << endl;
    cout << "Your Cards" << endl;
    cout << card1 << endl << card2 << endl << card3 << endl << card4 << endl << card5 << endl;
        cardtotal = cardtotal + card5;
    cout << "Your card total is: " << cardtotal << endl;
        if (cardtotal > 21) {
                if (cardtotal > dealerTotal) {
                    winner();
                }
            bust();
        }
        if (cardtotal == 21) {
            winner();
        }
            cout << "'hit' or  'stay'" << endl;
    cin >> hitstick;
        if (hitstick=="hit") {
            dealSixCard();
        }else {
            dealerPlay();
        }

      system("cls");
    cout << "BlackJack - Made by Algore" << endl;
    cout << "---------------------------" << endl;
    cout << endl;
    cout << "Your Cards" << endl;
    cout << card1 << endl << card2 << endl << card3 << endl << card4 << endl << card5 << endl << card6 << endl;
        cardtotal = cardtotal + card6;
    cout << "Your card total is: " << cardtotal << endl;
        if (cardtotal > 21) {
            bust();
        }
        if (cardtotal == 21) {
            winner();
        }
        dealerPlay();
        cin.get();
        return 0;
}

void dealCards()  {

    srand(time(NULL));
    card1 = rand() % 11 + 1;
    card2 = rand() % 11 + 1;
    return;
}

void dealThirdCard() {
    srand(time(NULL));
    card3 = rand() % 11 + 1;
}

void dealFourthCard() {
    srand(time(NULL));
    card4 = rand() % 11 + 1;
}
void dealFifthCard() {
    srand(time(NULL));
    card5 = rand() % 11 + 1;
}
void dealSixCard() {
    srand(time(NULL));
    card6 = rand() % 11 + 1;
}
void dealSevenCard() {
    srand(time(NULL));
    card7 = rand() % 11 + 1;
}


void bust() {
    system("cls");
    cout << "BlackJack - Made by Algore" << endl;
    cout << "---------------------------" << endl << endl;
    cout << "BUST\n";
    cout << "Play Again? y/n \n";
    string sel;
    cin >> sel;
    if (sel == "y") {
        main();
    } else {cin.get();}
}

void winner() {
    system("cls");
    cout << "BlackJack - Made by Algore" << endl;
    cout << "---------------------------" << endl << endl;
    cout << "Congratulations you have won\n";
    cin.get();
}

void dealerPlay() {
    void draw();
    system("cls");
    cout << "Your Card Total: " << cardtotal << endl;
    cout << "Dealer Draws\n\n\n";
    srand(time(NULL));
    dealerCard1 = rand() % 11 + 1;
    dealerCard2 = rand() % 11 + 1;
        dealerTotal = dealerCard1 + dealerCard2 + dealerCard3 + dealerCard4 + dealerCard5 + dealerCard6;
    if (dealerTotal >= 17) {
        draw();
    } else {
    srand(time(NULL));
    dealerCard3 = rand() % 11 + 1;
    }
    if (dealerTotal >= 17) {
        draw();
    } else {
    srand(time(NULL));
    dealerCard4 = rand() % 11 + 1;
    }
    if (dealerTotal >= 17) {
        draw();
    } else {
    srand(time(NULL));
    dealerCard5 = rand() % 11 + 1;
    }
    if (dealerTotal >= 17) {
        draw();
    } else {
    srand(time(NULL));
    dealerCard6 = rand() % 11 + 1;
    }
}

void draw() {
cout << "Dealer Total: " << dealerTotal;
if (dealerTotal == 21) {
    bust();
} else if (dealerTotal > cardtotal) {
    bust();
} else {
    winner();
}
}
