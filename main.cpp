#include <iostream>
#include <algorithm>
#include "queue.h"
#include "value.h"

using namespace std;

int main(){
  int _suit_size = 4;
  int _value_size = 13;
  int _index = 0;
  int _user_count, _dealer_count;

  QueueArrayList <string> dealer(11);
  QueueArrayList <string> user(11);
  QueueArrayList <string> deck(52);

  string cards[52], temp;
  string choice;
  string suits[_suit_size] = {
    "Hearts",
    "Spades",
    "Clubs",
    "Diamonds"
  };

  string value[_value_size] = {
    "A",
    "2",
    "3",
    "4",
    "5",
    "6",
    "7",
    "8",
    "9",
    "10",
    "J",
    "Q",
    "K"
  };


  for(int i = 0; i < _suit_size; i++){
    for(int j = 0;j < _value_size; j++){
      temp = value[j] + " " + suits[i];
      cards[_index++] = temp;
    }
  }

  random_shuffle(begin(cards), end(cards));

  for(int i = 0; i < _index; i++){
    deck.insert(cards[i]);
  }

  while(1){
    _user_count = 0;
    _dealer_count = 0;

    temp = deck.remove();
    cout << value(temp[0], _user_count);
    user.insert(temp);

    temp = deck.remove();
    cout << value(temp[0], _user_count);
    user.insert();


    while(1){
      cin >> choice;
      if(choice == "hit"){
        user.display();
      }
    }
  }

  deck.display();
  cout << deck.remove() << endl;
  cout << deck.remove() << endl;
  cout << deck.remove() << endl;

  return 0;
}
