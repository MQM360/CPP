#include <iostream>
#include <stdlib.h>

// Rock Paper Scissors
int main(){

srand(time(NULL));
int computer = rand() % 3 + 1;
int user = 0;

std::cout << "====================\n";
std::cout << "rock paper scissors!\n";
std::cout << "====================\n";

std::cout << "1) ✊\n";
std::cout << "2) ✋\n";
std::cout << "3) ✌️\n\n";
std::cout << "shoot! \n";
std::cin >> user;
std::cout << "\n";

//  Player Choices ==========================================
 if (user == 1)
    std::cout << "you choose: ✊\n";
  else if (user == 2)
    std::cout << "you choose: ✋\n";
  else
    std::cout << "you choose: ✌️\n";

  if (computer == 1)
    std::cout << "cpu choose: ✊\n";
  else if (computer == 2)
    std::cout << "cpu choose: ✋\n";
  else
    std::cout << "cpu choose: ✌️\n";

// USER = Rock ==========================================
if (user == 1 and computer ==1){
  std::cout << "You Tied!\n";  
}
else if (user == 1 and computer == 2){
  std::cout << "You lose to Paper!\n"; 
}
else if (user == 1 and computer == 3){
  std::cout << "You beat Scissors!\n"; 
}

// USER = Paper ==========================================
if (user == 2 and computer ==1){
  std::cout << "You beat Rock!\n";  
}
else if (user == 2 and computer == 2){
  std::cout << "You Tied!\n"; 
}
else if (user == 2 and computer == 3){
  std::cout << "You lose to Scissors!\n"; 
}

// USER = Scissors ==========================================
if (user == 3 and computer ==1){
  std::cout << "You lose to Rock!\n";  
}
else if (user == 3 and computer == 2){
  std::cout << "You beat Paper!\n"; 
}
else if (user == 3 and computer == 3){
  std::cout << "You Tied!\n"; 
}

return 0;

}
