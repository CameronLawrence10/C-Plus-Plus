//Cameron Lawrence
//Nov 25th
//CPSC 1020 (10:10AM - 11:00 AM)
//This program plays a simple card game with the computer based on cards that numbered with either orange or purple
//6 Hours
#include <iostream>
#include "Hand.h"
#include "Card.h"
#include "Deck.h"
#include "Player.h"
#include <string>
#include <numeric>
#include <iomanip>
#include <cstdlib>
using namespace std;

//**********NOTES*********
//human is X
//Computer is Y  (FOR EVERYTHING)
//Do Extra Credit at end

int main() {
    vector <int> hum;
    vector <int> com;

//extra credit play again  
    char repeat = 'Y';

    int comW = 0;
    int delt;
    int round;
    int humW = 0;
    int count = 0;
    int total = 0;
    int a = 1;

//whos not pumped about Tiger Game!!!!! 
  cout << "Welcome to TigerGame!\n";

//do while loop for whole game for extra credit to play again
  do {
    Deck deckOfCards;
    deckOfCards.shuffle();  
    cout << "Enter the amount of times you would like to play\n";
    cin >> round;

//extra credit for only a specfific amount of rounds up to 10
  while(10 < round || 1 > round) {
    cout << "Unable to play this amount of times, please pick a number between 1 and 10.\n";
    cin >> round; }


    Player X(deckOfCards, round);
    Player Y(deckOfCards, round);
    cout << "The deck has been shuffled and each player had drawn " << round << " cards.\n\n";

//counting rounds
  for(int i = 0; round > i; i++) {
    cout << "Round " << i+1;
    cout << endl;
    cout << "-------\n";
    ++count;
    ++total;
    
//for computers card
    Card YCard = Y.hand.dealCard(0); 
    cout <<"The computer plays: " << YCard.printCard();
    cout << endl;
    cout << "Your hand: " << X.hand.printHand();
    cout << endl;
    cout << "Which card do you want to play?\n";
    cin >> delt;
    
//for humans card
    Card XCard = X.hand.dealCard(delt-1);
    cout << "You played: ";
    cout << XCard.printCard() << endl;

//whos card is greater than others card and then increment the winners score
    if(YCard.getValue() < XCard.getValue()) {
      cout << "You win this round!\n\n";
      X.score += XCard.getValue(); }
    
        else if (YCard.getValue() > XCard.getValue()) {
            cout << "The computer wins this round!\n\n";
            Y.score += YCard.getValue(); }
    
            else  { cout << "Tie!\n\n"; }

//current scores of the match for computer and human 
   if (a == 1 || a == 10) {
    cout << "Current scores: \n";
    cout << "You: " << X.score;
    cout<< endl;
    cout << "Computer: " << Y.score;
    cout << endl << endl; }}
        if (a == 2 || a > 3) { 
            cout << "No scores to show\n"; }

//final socres for the match
    cout << "FINAL SCORE:\n";
    cout << "You: " << X.score;
    cout << endl;
    cout << "Computer " << Y.score;
    cout << endl;
    hum.push_back(X.score); 
    com.push_back(Y.score);

//final winning display of overall winner of the whole game
    if (Y.score > X.score) { cout << "Computer has won!\n\n"; 
        ++comW; }

        else if (Y.score < X.score) { cout << "Congratulations! You won!\n\n"; 
            ++humW; }
            
            else { cout << "It's a tie!\n\n"; }

        cout << "Tiger game is the best game ever invented, would you wanna play again? Type 'Y' for Yes or 'N' for No.\n\n";
    } while (repeat == 'Y' || repeat == 'y');

  return 0; }