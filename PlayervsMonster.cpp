#include<iostream> 



using namespace std;


int main () {   
//  step1 : Output the player's health followed the monster's health in the format (replacing X and Y with the player and monster's health respectively):

//The player and monster will both start with 10 health and keep doing damage to one another until either the player, monster, or both the player and monster have no health.

int turn =1;
bool block = false;

int damgaeStab =2 ;
int damdageSlash = 3; 

int playerHealth = 10;
int monsterHealth = 10;


while (playerHealth >= 0 && monsterHealth >= 0) {


cout << "Player Health: "<< playerHealth << " \nMonster Health: " << monsterHealth << endl;

int option = 0;
// step 2 : Read which attack the player wants to perform. Use the prompt "1-Stab -or- 2-Slash: "
cout << "1-Stab -or- 2-Slash: " << endl; 
/*Validate the attack selection is not input failure and that it is a valid selection 
(1 for stab and 2 for slash). If there is input failure output the error 
"Error: Invalid selection" and continue from step (2)
    */

cin >> option ;
if  (option != 1 && option != 2) { 
    cout << "Error: Invalid selection" << endl;
    
    cin.clear(); // Clear the error state
    cin.ignore(100,'\n');
    // Continue from step (2)
   continue; // Restart the main function to re-prompt for input

}
if (option == 1) {
     if (turn % 2 == 1) {
        cout << "The monster blocks your attack" << endl;
    } else {
        cout << "You stab the monster causing 2 damage"<< endl;
        cout << "The monster shoots a fire ball at you causing 2 damage" << endl; 
        playerHealth -= 2;

        monsterHealth -= damgaeStab;
    }
    
    }
else if (option ==2) { 
    if (turn % 2 ==1) { 
                cout << "The monster blocks your attack" << endl;
    } else {
        cout << "You slash the monster causing 3 damage" << endl;
        cout << "The monster shoots a fire ball at you causing 2 damage" << endl;
        playerHealth -= 2;
        monsterHealth -= damdageSlash; 
    }
    }
    turn++;

//cout << "Player Health: "<< playerHealth << " \nMonster Health: " << monsterHealth << endl;
}
if ( playerHealth <= 0 && monsterHealth <= 0) {
    cout << "The player and monster killed eachother" << endl;
} else if (playerHealth <= 0) { 
    cout << "The monster killed you" << endl;
} else if (monsterHealth <= 0) {
    cout << "You killed the monster" << endl;
}



// note : 
//The program will read in which of the two attacks to perform, then the monster will repond:
//block -> attack -> block -> attack -> ...
return 0;
}