#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    vector<string> questions;
    vector<string> answers;
    int score = 0;

    questions.push_back("What animal is a feline? :\n a) cat \nb) Elephant\n c) Shark \n e) exit");
    answers.push_back("a");
    questions.push_back("What is the Capital of france? : \n a) Rome \nb) Paris\n c) Washington D.C \n e) exit");
    answers.push_back("b");
    questions.push_back("What is the most common blood type? : \n a) Type B \nb) Type A\n c) Type O \n e) exit");
    answers.push_back("c");
    questions.push_back("What city is located on the equator? : \n a) Minnesota \nb) New York\n c) Singapore \n e) exit");
    answers.push_back("c");
    questions.push_back("What month is allergy season : \n a) January \nb) December\n c) July\n e) exit");
    answers.push_back("b");
    questions.push_back("What is the most played game of 2021? : \n a) Fifa \nb) Call of Duty\n c) Halo Infinite \n e) exit");
    answers.push_back("a");

    
    srand((unsigned)time(0));

    int question_number = rand() % 5;

    string input = "placeholder";

    while (input != "e")
    {
        cout << questions[question_number] << endl;
        cin >> input;
        if (input == answers[question_number]) {
            cout << "CORRECT!" << endl;
            score++;
        } else
            cout << "INCORRECT!" << endl;

        if (input == "e") {
            return 0;
        }

        question_number = rand() % 5;
    }

    return 0;
}