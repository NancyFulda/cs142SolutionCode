#include <iostream>
#include <cstring>
using namespace std;

// Useful web links for ASCII art:
// https://www.asciiart.eu/mythology/gryphon
// https://www.asciiart.eu/mythology/dragons
// https://www.asciiart.eu/mythology/unicorns

class MagicPet {
private:
    string type = "gryphon";
    string name = "UNNAMED_PET";
    string color;
    string eyeColor;
    string size;
public:
    MagicPet(string userChoice);
    void Render();
    string Description();
    void SetName(string name) {this->name = name;}
};

int main() {

    cout << "Welcome to the magic pet shop! What kind of pet would you like?" << endl;
    cout << "(a) Gryphon" << endl;
    cout << "(b) Unicorn" << endl;
    cout << "(c) Dragon" << endl;

    string userChoice;
    cin >> userChoice;

    if (userChoice == "a" or userChoice == "b" or userChoice == "c") {
        // Do nothing, this is valid input
    } else {
        cout << "I'm so sorry! I don't know how to create that kind of pet." << endl;
    }

    MagicPet pet(userChoice);
    cout << endl;
    cout << "Okay, here's your pet!" << endl;

    pet.Render();
    cout << pet.Description() << endl;

    string petName;
    cout << endl;
    cout << "What do you want to name your pet?" << endl;
    cin >> petName;
    pet.SetName(petName);

    return 0;
}


string MagicPet::Description() {
    string description = "";
    if (type == "gryphon") {
        description += "The Pet Shop owner brings you a " + size +
                        " gryphon with a " + color + " pelt and " +
                        eyeColor + " eyes.";
    }
    if (type == "unicorn") {
            description += "The Pet Shop owner returns with a " + size +
                            " unicorn with " + color + " fur and " +
                            eyeColor + " eyes.";
    }
    if (type == "dragon") {
            description += "The Pet Shop owner whistles, and a " +
                            size + " dragon flies into the room. It has " +
                            color + " scales and " + eyeColor + " eyes.";
    }
    return description;
}

MagicPet::MagicPet(string userChoice) {

    // Set the creature's type based on user input
    switch(userChoice.at(0)) {
        case 'a': type = "gryphon"; break;
        case 'b': type = "unicorn"; break;
        case 'c': type = "dragon"; break;
        default: cout << "ERROR: Unknown userChoice" << endl;
    }

    // Select a random color for the creature's fur or scales
    int randomNumber = rand()%3;
    switch(randomNumber) {
        case 0: color = "blazing red";
        case 1: color = "saphire blue";
        case 2: color = "soft white";
    }

    // Select a random color for the creature's eyes
    randomNumber = rand()%3;
    switch(randomNumber) {
        case 0: eyeColor = "deep green";
        case 1: eyeColor = "azure";
        case 2: eyeColor = "purple";
    }

    // Select a random size for the creature
    randomNumber = rand()%7;
    switch(randomNumber) {
        case 0: size = "miniature";
        case 1: size = "tiny";
        case 2: size = "waist-high";
        case 3: size = "medium-sized";
        case 4: size = "massive";
        case 5: size = "towering";
        case 6: size = "gigantic";
    }
}

void MagicPet::Render() {
    if (type == "gryphon") {
        cout << "                            ______" << endl;
        cout << "                 ______,---'__,---'" << endl;
        cout << "             _,-'---_---__,---'" << endl;
        cout << "      /_    (,  ---____'," << endl;
        cout << "     /  ',,   `, ,-'" << endl;
        cout << "    ;/)   ,',,_/,'" << endl;
        cout << "    | /\\   ,.'//\\" << endl;
        cout << "    `-` \\ ,,'    `." << endl;
        cout << "         `',   ,-- `." << endl;
        cout << "         '/ / |      `,         _" << endl;
        cout << "         //'',.\\_    .\\      ,{==>-" << endl;
        cout << "      __//   __;_`-  \\ `;.__,;'" << endl;
        cout << "    ((,--,) (((,------;  `--' jv" << endl;
        cout << "     ```  '   ```" << endl;
    }
    if (type == "unicorn") {
        cout << "\\." << endl;
        cout << " \\\\      ." << endl;
        cout << "  \\\\ _,.+;)_" << endl;
        cout << "  .\\\\;~%:88%%." << endl;
        cout << " (( a   `)9,8;%." << endl;
        cout << " /`   _) ' `9%%%?" << endl;
        cout << "(' .-' j    '8%%'" << endl;
        cout << " `\"+   |    .88%)+._____..,,_   ,+%$%." << endl;
        cout << "        :.   d%9`             `-%*'\"'~%$." << endl;
        cout << "     ___(   (%C                 `.   68%%9" << endl;
        cout << "    .\"        \7                  ;  C8%%)`" << endl;
        cout << "    : .\"-.__,'.____________..,`   L.  \\86' ," << endl;
        cout << "    : L    : :            `  .'\\.   '.  %$9%)" << endl;
        cout << "    ;  -.  : |             \\  \\  \"-._ `. `~\\" << endl;
        cout << "     `. !  : |              )  >     \". ?" << endl;
        cout << "       `'  : |            .' .'       : |" << endl;
        cout << "           ; !          .' .'         : |" << endl;
        cout << "          ,' ;         ' .'           ; (" << endl;
        cout << "         .  (         j  (            `  \"" << endl;
        cout << "         \"\"\"'          \"\"'             `\"\" mh" << endl;
    }
    if (type == "dragon") {
        cout << " <>=======()" << endl;
        cout << "(/\\___   /|\\\\          ()==========<>_" << endl;
        cout << "       \\_/ | \\\\        //|\\   ______/ \\)" << endl;
        cout << "        \\_|  \\\\      // | \\_/" << endl;
        cout << "         \\|\\/|\\_   //  /\\/" << endl;
        cout << "          (oo)\\ \\_//  /" << endl;
        cout << "         //_/\\_\\/ /  |" << endl;
        cout << "        @@/  |=\\  \\  |" << endl;
        cout << "             \\_=\\_ \\ |" << endl;
        cout << "               \\==\\ \\|\\_ snd" << endl;
        cout << "            __(\\===\\(  )\\" << endl;
        cout << "           (((~) __(_/   |" << endl;
        cout << "                (((~) \\  /" << endl;
        cout << "                ______/ /" << endl;
        cout << "                '------'" << endl;
    }
}
