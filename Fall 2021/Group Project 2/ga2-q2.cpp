/*
Author: Chase Condron, Karsyn Hutchinson, Ivory Scherphorn
Program: ga2-q2
Date Created: 11/9/21

PesudeoCode:
1.) Display menu options to user, user selects these submenus
2.) Based on their selection, do the corresponding action and then go back to main menu
3.) When user is done, they press Q to exit the program.
*/
#include <iostream>
#include <iomanip>

//prototypes for functions
int setInventory(int brandInventory[], int brandChoice);
int setPurchased(int brandInventory[], int brandChoice);
int setSold(int brandInventory[], int brandChoice);
void displayInventory (int brandInventory[]);
char mainMenu(char choice);

//function to enter the inventory
/*
    INPUTS: brandInventory[], brandChoice
    OUTPUTS: brandInventory[brandChoice]

    PESUDOCODE:
    1.) Gets the array and brandChoice from main
    2.) Asks the user how much soda they wish to enter
    3.) Enter this amount into the array...
*/
int setInventory(int brandInventory[], int brandChoice){
    int enteredAmount;
    do {
        std::cout << "Enter inventory for entered brand... (entry cannot be less than 0)\n";
        std::cin >> enteredAmount;
    } while (enteredAmount < 0);
    brandInventory[brandChoice] = enteredAmount;
    return brandInventory[brandChoice];
}

//function to purchase soda from a distributor
/*
    INPUTS: brandInventory[], brandChoice
    OUTPUTS: brandInventory[brandChoice]

    PESUDOCODE:
    1.) Gets the array and brandChoice from main
    2.) Asks the user how much soda was sold to the store
    3.) Calculate new value of soda, return this to the array...
*/
int setPurchased(int brandInventory[], int brandChoice){
    int enteredAmount;
    std::cout << "Enter amount purchased for entered brand... (entry cannot be less than 0)\n";
    std::cout << "Your current selection currently has: " << brandInventory[brandChoice] << " in stock...\n";
    std::cin >> enteredAmount;
    if (enteredAmount > 0){
        brandInventory[brandChoice] += enteredAmount; 
    } else {
        std::cout << "You cannot buy a negative amount of soda!\n";
    }
    return brandInventory[brandChoice];
}

//function to sell soda to a customer
/*
    INPUTS: brandInventory[], brandChoice
    OUTPUTS: brandInventory[brandChoice]

    PESUDOCODE:
    1.) Gets the array and brandChoice from main
    2.) Asks the user how much soda was bought from the store
    3.) Calculate new value of soda, return this to the array...
*/
int setSold(int brandInventory[], int brandChoice){
    int enteredAmount;
    std::cout << "Enter amount sold for entered brand... (entry cannot be less than 0)\n";
    std::cout << "Your current selection currently has: " << brandInventory[brandChoice] << " in stock...\n";
    std::cin >> enteredAmount;
    if (enteredAmount > 0 && enteredAmount - brandInventory[brandChoice] < 0){
      brandInventory[brandChoice] -= enteredAmount;   
    } else {
        std::cout << "You cannot buy more than what we have in store...\n";
    }
    return brandInventory[brandChoice];
}

//function to display inventory
/*
    INPUTS: brandInventory[]
    OUTPUTS: nothing

    PESUDOCODE:
    1.) Gets the arrays and displays them
*/
void displayInventory (int brandInventory[]){
    std::cout << "This is your current stock of soda:\n";
    std::cout << std::setw(11) << "Coca-Cola " << brandInventory[0] << std::endl;
    std::cout << std::setw(11) << "Pepsi " << brandInventory[1] << std::endl;
    std::cout << std::setw(11) << "Canada dry " << brandInventory[2] << std::endl;
    std::cout << std::setw(11) << "7-up " << brandInventory[3] << std::endl;
}

//function to call the menu back after a certain menu option has been completed
/*
    INPUTS: choice
    OUTPUTS: choice

    PSEUDO-CODE:
    1.) Takes entry from the main
    2.) returns it to the switch case to decide what menu to pull...
*/
char mainMenu(char choice){
    std::cout << "Please enter the operation you wish to perform:\n(E)nter Inventory\n(P)urchase Soda\n(S)ell Soda\n(D)isplay Inventory\n(Q)uit Program\n";
    std::cin >> choice;
    return choice;
}

int main(){
    //declare
    char choice;
    int brandIDs[4] = {1, 2, 3 ,4};
    int brandInventory[] = {0, 0, 0, 0};
    int brandChoice, enteredAmount;
    
    //while loop to make it so the program does not close until
    //the user presses Q...
    bool startLoop = true;
    while (startLoop){
        switch (mainMenu(choice))
        {
        case 'E':
            //will ask the user what brand of soda to enter and call the appropriate function...
            do {
            std::cout << "Enter brand of Soda; Coca-Cola (1), Pepsi (2), Canada Dry (3), Seven-up (4)\n";
            std::cin >> brandChoice;
            brandChoice -= 1;
            } while (!(brandChoice >= 0 && brandChoice <= 3));
            setInventory(brandInventory, brandChoice);
            break;
        case 'P':
            //will ask the user what brand of soda to enter and call the appropriate function...
            do {
                std::cout << "Enter brand of Soda; Coca-Cola (1), Pepsi (2), Canada Dry (3), Seven-up (4)\n";
                std::cin >> brandChoice;
                brandChoice -= 1;
            } while (!(brandChoice >= 0 && brandChoice <= 3));
            setPurchased(brandInventory, brandChoice);
            break;
        case 'S':
            //will ask the user what brand of soda to enter and call the appropriate function...
            do {
            std::cout << "Enter brand of Soda; Coca-Cola (1), Pepsi (2), Canada Dry (3), Seven-up (4)\n";
            std::cin >> brandChoice;
            brandChoice -= 1;
            } while (!(brandChoice >= 0 && brandChoice <= 3));
            setSold(brandInventory, brandChoice);
            break;
        case 'D':
            //will display the current inventory to the user...
            displayInventory(brandInventory);
            break;
        case 'Q':
            //makes the variable false, which in turn exits the program...
            std::cout << "Goodbye";
            startLoop = false;
            break;
        default:
            //incase something goes wrong, but I don't believe this would ever occur besides invalid entry...
            std::cout << "Wrong entry, or perhaps something broke!\n";
        }
    }
}