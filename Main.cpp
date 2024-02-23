#include <iostream>
#include <vector>
#include <string>
int main() {
    /* amoeba, evove, evolve */
    /* Beginning */
    int user = 0;
    int count = 0;
    std::vector<std::string> missney;
    std::vector<std::string> answer;
    std::string state;
    char choice2;
    char choice3;
    int choice4;
    std::cout << "In the story of life there is a balance in the carbon.\n";
    std::cout << "Plant cells and animal cells exist to provocate each render\n";
    std::cout << "At all cost these systems exist to inhibit and   stipulate the planetarium & elements.\n";
    std::cout << "This is the story of the 99.\n";
    std::cout << "Question 1: What do you love most in the world?\n";
    std::cout << "Press enter to skip\n";
    std::cin >> state;
    missney.push_back(state);
    if (state == "") {
        user--;
    }
    else {
        user++;
    }
    std::string choicetwo = "destroys";
    std::string choicedos = "joins";
    std::string choicevi = "leaves";
    for (int j = 0; j < 3 && choice2 != 'A' && choice2 != 'B' && choice2 != 'C'; j++) {
        std::cout << "Question 2: Do you wish to destroy or unionise the world?\n";
        std::cout << "Type: A for destruction, B for union, C if you're to remain a shade.\n";
        std::cin >> choice2;
    }
                switch (choice2) {
                case 'A':
                    missney.push_back(choicetwo);
                    break;
                case 'B':
                    missney.push_back(choicedos);
                    user++;
                    break;
                case 'C':
                    missney.push_back(choicevi);
                default:
                    std::cout << "Try again:\n";
                    std::cin >> choice2;
                }
 
    std::string answer1 = "Hell";
    std::string answerdos = "Heaven";
    std::cout << "In heaven do wish for a battle field or luxuries?\n";
    for (int k = 0; k < 3 && choice3 != 'A' && choice3 != 'B'; k++) {
    std::cout << "Type A for Warzone, B for Paradise:\n";
    std::cin >> choice3;
       switch (choice3) {
       case 'A':
        missney.push_back(answer1);
        break;
        case 'B':
        missney.push_back(answerdos);
        break;
        default:
        std::cout << "Try again:\n";
        std::cin >> choice3;
               }
            }
     
            std::string answer4 = "Devil";
            std::string answerquatro = "God";
            std::cout << "What weapon is fit for a King of True heart?/n";
            for (int w = 0; w < 3 && choice4 != 1 && choice4 != 2; w++) {
                std::cout << "1 for Buster Sword, 2 for Excalibur:\n";
                    std::cin >> choice4;
                switch (choice4) {
                case '1':
                    missney.push_back(answer4);
                    break;
                case '2':
                    missney.push_back(answerquatro);
                    break;
                default:
                    std::cout << "Try again:\n";
                    std::cin >> choice3;
                }
            }
            if (user == 0) {
                std::cout << "Oca You failed them or they failed you.\n";
                std::cout << "You awake in a satalite of what remains of anteiq earth you are now but a moon to the suns orbit.\n";
                std::cout << "In the light alterior, life crosses over with you but dreams are your only access to the trivial world the one you cannot find.\n";
            }else if (user == 1) {
                std::cout << "Destiny has decided to give you another chance in the symphony of Good and Evil the Judge Erroe gives you a link.\n";
                std::cout << "King Erra has given all creatures atral bodies and the snake returns withs limbs unicosect.\n";
                std::cout << "Atlas we have our a wager on terra carnation";
                std::cout << "Ruing the day no soul rose the reigns of Mastery\n";
                std::cout << "The balance of Erroe's Tree favored the Warzone, the pain of losing the war to Imicrabal's Teeth\n";
            }
            else if (user == 2) {
                std::cout << "The Wild Origin\n";
                std::cout << "To be an equal in paradise\n";
                std::cout << "Your will has inspred heratage. The lives accounted for outlived thier work.\n";
                std::cout << "In your last day of Earth you shall cross to another world ruled by living stone\n";
                std::cout << "Your role as the Genie in the Bottle oh homuculous\n";
                std::cout << "Your enactment on earth has earned you Two titles\n";
                std::cout << "True Invader: Planetary Composition\n";
                std::cout << "Host Dragon: Edua Groalasinacs\n";
            }
            std::cout << missney[0] + " " + missney[1] + " " + missney[2] + " to teir " + missney[3];
          }
    /* if(user == 0){
      std::cout << "In the story of life there is a balance in the carbon.\n";
      std::cout << "Plant cells and animal cells exist to provocate each render\n";
      std::cout << "At all cost these systems exist to inhibit and   stipulate the planetarium & elements.\n";
      std::cout << "This is the story of the 99.";}
      }else if(user == 1){
      std::cout << "Oca You failed them or they failed you.\n";
      std::cout << "You awake in a satalite of what remains of anteiq earth you are now but a moon to the suns orbit.\n";
      std::cout << "In the light alterior, life crosses over with you but dreams are your only access to the trivial world the one you cannot find.\n";
      }else if(user == 2){
      std::cout << "Destiny has decided to give you another chance in the symphony of Good and Evil the Judge Erroe gives you a link.\n";
      std::cout << "King Erra has given all creatures atral bodies and the snake returns withs limbs unicosect.\n";
      std::cout << "Atlas we have our a wager on terra carnation";
      std::cout << "Ruing the day no soul rose the reigns of Mastery\n";
      std::cout << "The balance of Erroe's Tree favored the Warzone, the pain of losing the war to Imicrabal's Teeth";
      }else if(user == 3){
      std::cout << "The Wild Origin\n";
      std::cout << "To be an equal in paradise\n";
      std::cout << "Your will has inspred heratage. The lives accounted for outlived thier work.\n";
      std::cout << "In your last day of Earth you shall cross to another world ruled by living stone\n";
      std::cout << "Your role as the Genie in the Bottle oh homuculous\n";
      std::cout << "Your enactment on earth has earned you Two titles\n";
      std::cout << "True Invader: Planetary Composition\n";
      std::cout << "Host Dragon: Edua Groalasinacs";
      }
      */
