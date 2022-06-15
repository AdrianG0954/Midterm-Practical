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

    questions.push_back("");
    answers.push_back("B");
    questions.push_back("");
    answers.push_back("A");
    questions.push_back("");
    answers.push_back("D");
    questions.push_back("");
    answers.push_back("C");
    questions.push_back("");
    answers.push_back("D");
    questions.push_back("");
    answers.push_back("A");


    srand((unsigned)time(0));

    int question_number = rand() % 1;

    string input = "placeholder";

    while (input != "quit")
    {
        cout << questions[question_number] << endl;
        cin >> input;
        if (input == answers[question_number]) {
            cout << "CORRECT!" << endl;
            score++;
        } else
            cout << "INCORRECT!" << endl;

        if (input == "4") {
            cout << "You got " << score << "/" << questions.size() << "Correct" << endl;
        }

        question_number = rand() % 1;
    }

    return 0;
}