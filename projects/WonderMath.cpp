#include<iostream>
#include <stdlib.h>
#include <random>
#include <math.h>
#define PI 3.14
using namespace std;

int option = 0; // global variable
int updateScore = 0;

void gradeOneChoice();
void gradeTwoChoice();
void gradeThreeChoice();
void gradeFourChoice();
void gradeFiveChoice();
void gradeSixChoice();
void gradeLevel();
void title();


int main(){
    srand((unsigned) time(NULL));
    gradeLevel();
    return 0;
}


void catcher(){
    cin.clear(); //clear the input cin
    cin.ignore(100, '\n'); //Up to 100 characters ignored
}

void spacer(){ // for spacing only not clearing
    int clear = 100;
    do {
        cout << endl;
        clear -= 1;
    } while (clear !=0);
}

void tryAgain(){
    char tryAgain;
    option = 0;

    cout << "WOULD YOU LIKE TO SOME MORE QUESTIONS? "<< endl;
    cout << "[ENTER Y if YES] / [ENTER ANYTHING if NO]: ";
    cin >> tryAgain;

    if (tryAgain == 'Y' || tryAgain == 'y'){
        spacer();
        gradeLevel();
    } else {
        cout << "                                    THANK YOU FOR USING  " << endl;
        title();
        exit(0);
    }

}

void title(){ // just some element
    cout << "██     ██  ██████  ███    ██ ██████  ███████ ██████  ███    ███  █████  ████████ ██   ██ " <<endl;
    cout << "██     ██ ██    ██ ████   ██ ██   ██ ██      ██   ██ ████  ████ ██   ██    ██    ██   ██ " <<endl;
    cout << "██  █  ██ ██    ██ ██ ██  ██ ██   ██ █████   ██████  ██ ████ ██ ███████    ██    ███████ " <<endl;
    cout << "██ ███ ██ ██    ██ ██  ██ ██ ██   ██ ██      ██   ██ ██  ██  ██ ██   ██    ██    ██   ██ " <<endl;
    cout << " ███ ███   ██████  ██   ████ ██████  ███████ ██   ██ ██      ██ ██   ██    ██    ██   ██ " <<endl;
}

void gradeLevel(){ // to show
    title();
    option = 0;

    cout << " " << endl;
    cout << "                                  CHOOSE WHAT GRADE LEVEL ARE YOU                            " << endl;
    cout << " " << endl;
    cout << " +=============================================================================================+" << endl;
    cout << " |   PRESS   |   LEVEL   |  DESCRIPTION                                                        |" << endl;
    cout << " +-----------+---------------------------------------------------------------------------------+" << endl;
    cout << " |   [ 1 ]   |  GRADE 1  |  TO ADD AND SUBTRACT NUMBERS UP TO 100                              |" << endl;
    cout << " +-----------+---------------------------------------------------------------------------------+" << endl;
    cout << " |   [ 2 ]   |  GRADE 2  |  TO ADD SUBTRACT NUMBERS UP TO 1000                                 |" << endl;
    cout << " |           |           |  MULTIPLY AND DIVIDE ONE(1) DIGIT NUMBERS                           |" << endl;
    cout << " +-----------+---------------------------------------------------------------------------------+" << endl;
    cout << " |   [ 3 ]   |  GRADE 3  |  TO ADD SUBTRACT NUMBERS UP TO 10000                                |" << endl;
    cout << " |           |           |  MULTIPLY AND DIVIDE TWO(2) DIGIT NUMBERS                           |" << endl;
    cout << " +-----------+---------------------------------------------------------------------------------+" << endl;
    cout << " |   [ 4 ]   |  GRADE 4  |  TO ADD SUBTRACT NUMBERS UP TO 100000                               |" << endl;
    cout << " |           |           |  MULTIPLY AND DIVIDE THREE(3) DIGIT NUMBERS                         |" << endl;
    cout << " +-----------+---------------------------------------------------------------------------------+" << endl;
    cout << " |   [ 5 ]   |  GRADE 5  |  TO ADD SUBTRACT DECIMAL NUMBERS UP TO 100.00                       |" << endl;
    cout << " |           |           |  MULTIPLY AND DIVIDE TWO(2) DIGIT DECIMAL NUMBERS                   |" << endl;
    cout << " +-----------+---------------------------------------------------------------------------------+" << endl;
    cout << " |   [ 6 ]   |  GRADE 6  |  TO SOLVE FOR AREA AND PERIMETER OF SOME BASIC SHAPES               |" << endl;
    cout << " +-----------+---------------------------------------------------------------------------------+" << endl;
    cout << " |   [ 7 ]   |  EXIT     |  TO EXIT THE PROGRAM                                                |" << endl;
    cout << " +=============================================================================================+" << endl;

    cout << " " << endl;
    cout << "    ENTER THE NUMBER OF YOUR CHOICE: ";
    cin >> option;

    switch(option){
        case 1:
            gradeOneChoice();
            break;

        case 2:
            gradeTwoChoice();
            break;

        case 3:
            gradeThreeChoice();
            break;

        case 4:
            gradeFourChoice();
            break;

        case 5:
            gradeFiveChoice();
            break;

        case 6:
            gradeSixChoice();
            break;


        case 7:
            spacer();
            cout << "                                    THANK YOU FOR USING  " << endl;
            title();
            break;

        default:

            cout << " ========================================== " << endl;
            cout << "  [INVALID] INVALID INPUT PLEASE TRY AGAIN  " << flush;
            system("read");
            catcher();
            spacer();
            gradeLevel();
            break;
    }
}

void gradeOneChoice(){ // for grade 1 addition and subtraction numbers up to 50

    int addOne, addTwo, sum, answer ,subtra, minu, diff;

    cout << " ========================================== " << endl;
    cout << "        YOU HAVE CHOSEN GRADE 1 LEVEL       " << endl;
    cout << " ========================================== " << endl;
    cout << "        CHOOSE WHAT TYPE OF OPERATION       " << endl;
    cout << "               [1] ADDITION                 " << endl;
    cout << "               [2] SUBTRACTION              " << endl;
    cout << "               [3] BACK TO MENU             " << endl;

    cout << "    ENTER THE NUMBER OF YOUR CHOICE: ";
    cin >> option;

    switch (option){
        case 1:
            cout << " ========================================== " << endl;
            cout << "        YOU HAVE CHOSEN ADDITION            " << endl;
            cout << " ========================================== " << endl;

            // to generate numbers
            for(int a = 1; a <= 10; a++) {

                // Retrieve a random number from 0 to 100
                addOne =  rand() % 100;
                addTwo =  rand() % 100;

                // Will get the answer
                sum = addOne + addTwo;

                cout << "    " << a << "). " << addOne << " + " << addTwo << " = ";
                cin >> answer;
                catcher();

                if (sum == answer){
                    updateScore += 1;
                }
            }

            cout << " ========================================== " << endl;
            cout << "        YOUR SCORE IS: " << updateScore << endl;
            cout << " ========================================== " << endl;
            break;

        case 2:
            cout << " ========================================== " << endl;
            cout << "        YOU HAVE CHOSEN SUBTRACTION         " << endl;
            cout << " ========================================== " << endl;


            // to generate numbers
            for(int a = 1; a <= 10; a++) {

                // Retrieve a random number from 0 to 100
                subtra = rand() % 100;
                minu = rand() % 100;

                // so that there will be no negative answer
                if (subtra > minu){
                    diff = subtra - minu; // Will get the difference
                    cout << "    " << a << "). " << subtra << " - " << minu << " = ";
                    cin >> answer;
                    catcher();


                } else {
                    diff = minu - subtra; // Will get the difference
                    cout << "    " << a << "). " << minu << " - " << subtra << " = ";
                    cin >> answer;
                    catcher();

                }

                if (diff == answer){
                    updateScore += 1;
                }
            }
            cout << " ========================================== " << endl;
            cout << "        YOUR SCORE IS: " << updateScore << endl;
            cout << " ========================================== " << endl;
            break;

        case 3:
            option = 0;
            spacer();
            gradeLevel();
            break;
    }
    tryAgain();
}

void gradeTwoChoice() { // for grade 2 add,multiply, subtract, divide numbers up to 100
    int addOne, addTwo, sum, answer ,subtra, minu, diff;
    int mPlier, mPlicand, product;
    int diviDend, diviSor, qout, remain, remainAns;


    cout << " ========================================== " << endl;
    cout << "        YOU HAVE CHOSEN GRADE 2 LEVEL       " << endl;
    cout << " ========================================== " << endl;
    cout << "        CHOOSE WHAT TYPE OF OPERATION       " << endl;
    cout << "               [1] ADDITION                 " << endl;
    cout << "               [2] SUBTRACTION              " << endl;
    cout << "               [3] MULTIPLICATION           " << endl;
    cout << "               [4] DIVISION                 " << endl;
    cout << "               [5] BACK TO MENU             " << endl;


    cout << "    ENTER THE NUMBER OF YOUR CHOICE: ";
    cin >> option;

    switch (option) {
        case 1:
            cout << " ========================================== " << endl;
            cout << "        YOU HAVE CHOSEN ADDITION            " << endl;
            cout << " ========================================== " << endl;

            // to generate numbers
            for (int a = 1; a <= 10; a++) {

                // Retrieve a random number from 0 to 1000
                addOne = rand() % 1000;
                addTwo = rand() % 1000;

                // Will get the answer
                sum = addOne + addTwo;

                cout << "    " << a << "). " << addOne << " + " << addTwo << " = ";
                cin >> answer;
                catcher();


                if (sum == answer) {
                    updateScore += 1;
                }
            }

            cout << " ========================================== " << endl;
            cout << "        YOUR SCORE IS: " << updateScore << endl;
            cout << " ========================================== " << endl;
            break;

        case 2:
            cout << " ========================================== " << endl;
            cout << "        YOU HAVE CHOSEN SUBTRACTION         " << endl;
            cout << " ========================================== " << endl;


            // to generate numbers
            for (int a = 1; a <= 10; a++) {

                // Retrieve a random number from 0 to 1000
                subtra = rand() % 1000;
                minu = rand() % 1000;

                // so that there will be no negative answer
                if (subtra > minu) {
                    diff = subtra - minu; // Will get the difference
                    cout << "    " << a << "). " << subtra << " - " << minu << " = ";
                    cin >> answer;
                    catcher();


                } else {
                    diff = minu - subtra; // Will get the difference
                    cout << "    " << a << "). " << minu << " - " << subtra << " = ";
                    cin >> answer;
                    catcher();

                }

                if (diff == answer) {
                    updateScore += 1;
                }
            }
            cout << " ========================================== " << endl;
            cout << "        YOUR SCORE IS: " << updateScore << endl;
            cout << " ========================================== " << endl;
            break;

        case 3:
            cout << " ========================================== " << endl;
            cout << "        YOU HAVE CHOSEN MULTIPLICATION           " << endl;
            cout << " ========================================== " << endl;

            // to generate numbers
            for (int a = 1; a <= 10; a++) {

                // Retrieve a random number from 1 to 10
                mPlier = 1 + (rand() % 9);
                mPlicand = 1 + (rand() % 9);

                // Will get the answer
                product = mPlier * mPlicand;

                cout << "    " << a << "). " << mPlier << " X " << mPlicand << " = ";
                cin >> answer;
                catcher();


                if (product == answer) {
                    updateScore += 1;
                }
            }

            cout << " ========================================== " << endl;
            cout << "        YOUR SCORE IS: " << updateScore << endl;
            cout << " ========================================== " << endl;
            break;

        case 4:
            cout << " ========================================== " << endl;
            cout << "        YOU HAVE CHOSEN DIVISION            " << endl;
            cout << " ========================================== " << endl;
            cout << "  INSTRUCTIONS:                             " << endl;
            cout << "     PLEASE ENTER THE WHOLE NUMBER QUOTIENT " << endl;
            cout << "     AND THE REMAINDER.                     " << endl;
            cout << " ========================================== " << endl;

            for (int a = 1; a <= 10; a++) {

                // Retrieve a random number from 1 to 10
                diviDend = 1 + (rand() % 9);
                diviSor = 1 + (rand() % 9);

                qout = diviDend / diviSor;
                remain = diviDend % diviSor;

                cout << "    " << a << "). " << diviDend << " / " << diviSor << ":" << endl;
                cout << "    ENTER QUOTIENT: ";
                cin >> answer;
                catcher();


                cout << "    ENTER REMAINDER: ";
                cin >> remainAns;

                if (qout == answer && remainAns == remain) {
                    updateScore += 1;
                }
            }

            cout << " ========================================== " << endl;
            cout << "        YOUR SCORE IS: " << updateScore << endl;
            cout << " ========================================== " << endl;
            break;


        case 5:
            option = 0;
            spacer();
            gradeLevel();
            break;
    }
    tryAgain();
}

void gradeThreeChoice(){ // for grade 1 addition and subtraction numbers up to 50

    int addOne, addTwo, sum, answer ,subtra, minu, diff;
    int mPlier, mPlicand, product;
    int diviDend, diviSor, qout, remain, remainAns;

    cout << " ========================================== " << endl;
    cout << "        YOU HAVE CHOSEN GRADE 3 LEVEL       " << endl;
    cout << " ========================================== " << endl;
    cout << "        CHOOSE WHAT TYPE OF OPERATION       " << endl;
    cout << "               [1] ADDITION                 " << endl;
    cout << "               [2] SUBTRACTION              " << endl;
    cout << "               [3] MULTIPLICATION           " << endl;
    cout << "               [4] DIVISION                 " << endl;
    cout << "               [5] BACK TO MENU             " << endl;

    cout << "    ENTER THE NUMBER OF YOUR CHOICE: ";
    cin >> option;

    switch (option){
        case 1:
            cout << " ========================================== " << endl;
            cout << "        YOU HAVE CHOSEN ADDITION            " << endl;
            cout << " ========================================== " << endl;

            // to generate numbers
            for(int a = 1; a <= 10; a++) {

                // Retrieve a random number from 0 to 10 000
                addOne =  rand() % 10000;
                addTwo =  rand() % 10000;

                // Will get the answer
                sum = addOne + addTwo;

                cout << "    " << a << "). " << addOne << " + " << addTwo << " = ";
                cin >> answer;
                catcher();


                if (sum == answer){
                    updateScore += 1;
                }
            }

            cout << " ========================================== " << endl;
            cout << "        YOUR SCORE IS: " << updateScore << endl;
            cout << " ========================================== " << endl;
            break;

        case 2:
            cout << " ========================================== " << endl;
            cout << "        YOU HAVE CHOSEN SUBTRACTION         " << endl;
            cout << " ========================================== " << endl;


            // to generate numbers
            for(int a = 1; a <= 10; a++) {

                // Retrieve a random number from 0 to 100
                subtra = rand() % 10000;
                minu = rand() % 10000;

                // so that there will be no negative answer
                if (subtra > minu){
                    diff = subtra - minu; // Will get the difference
                    cout << "    " << a << "). " << subtra << " - " << minu << " = ";
                    cin >> answer;
                    catcher();


                } else {
                    diff = minu - subtra; // Will get the difference
                    cout << "    " << a << "). " << minu << " - " << subtra << " = ";
                    cin >> answer;
                    catcher();

                }

                if (diff == answer){
                    updateScore += 1;
                }
            }
            cout << " ========================================== " << endl;
            cout << "        YOUR SCORE IS: " << updateScore << endl;
            cout << " ========================================== " << endl;
            break;

        case 3:
            cout << " ========================================== " << endl;
            cout << "        YOU HAVE CHOSEN MULTIPLICATION           " << endl;
            cout << " ========================================== " << endl;

            // to generate numbers
            for(int a = 1; a <= 10; a++) {

                // Retrieve a random number from 10 to 99
                mPlier = 10 + (rand() % 89);

                // Retrieve a random number from 10 to 99
                mPlicand =  10 + (rand() % 89);

                // Will get the answer
                product = mPlier * mPlicand;

                cout << "    " << a << "). " << mPlier << " X " << mPlicand << " = ";
                cin >> answer;
                catcher();


                if (product == answer){
                    updateScore += 1;
                }
            }

            cout << " ========================================== " << endl;
            cout << "        YOUR SCORE IS: " << updateScore << endl;
            cout << " ========================================== " << endl;
            break;

        case 4:
            cout << " ========================================== " << endl;
            cout << "        YOU HAVE CHOSEN DIVISION            " << endl;
            cout << " ========================================== " << endl;
            cout << "  INSTRUCTIONS:                             " << endl;
            cout << "     PLEASE ENTER THE WHOLE NUMBER QUOTIENT " << endl;
            cout << "     AND THE REMAINDER.                     " << endl;
            cout << " ========================================== " << endl;

            for (int a = 1; a <= 10; a++) {

                // Retrieve a random number from 1 to 10
                diviDend = 10 + (rand() % 89);
                diviSor = 1 + (rand() % 9);

                qout = diviDend / diviSor;
                remain = diviDend % diviSor;


                cout << "    " << a << "). " << diviDend << " / " << diviSor << ":" << endl;
                cout << "    ENTER QUOTIENT: ";
                cin >> answer;
                catcher();


                cout << "    ENTER REMAINDER: ";
                cin >> remainAns;


                if (qout == answer && remainAns == remain) {
                    updateScore += 1;
                }
            }

            cout << " ========================================== " << endl;
            cout << "        YOUR SCORE IS: " << updateScore << endl;
            cout << " ========================================== " << endl;
            break;

        case 5:
            option = 0;
            spacer();
            gradeLevel();
            break;
    }
    tryAgain();
}

void gradeFourChoice(){ // for grade 2 add,multiply, subtract, divide numbers up to 100

    int addOne, addTwo, sum, answer ,subtra, minu, diff;
    int diviDend, diviSor, qout, remain, remainAns;
    int mPlier, mPlicand, product;

    cout << " ========================================== " << endl;
    cout << "        YOU HAVE CHOSEN GRADE 4 LEVEL       " << endl;
    cout << " ========================================== " << endl;
    cout << "        CHOOSE WHAT TYPE OF OPERATION       " << endl;
    cout << "               [1] ADDITION                 " << endl;
    cout << "               [2] SUBTRACTION              " << endl;
    cout << "               [3] MULTIPLICATION           " << endl;
    cout << "               [4] DIVISION                 " << endl;
    cout << "               [5] BACK TO MENU             " << endl;


    cout << "    ENTER THE NUMBER OF YOUR CHOICE: ";
    cin >> option;

    switch (option){
        case 1:
            cout << " ========================================== " << endl;
            cout << "        YOU HAVE CHOSEN ADDITION            " << endl;
            cout << " ========================================== " << endl;

            // to generate numbers
            for(int a = 1; a <= 10; a++) {

                // Retrieve a random number from 0 to 10 000
                addOne =  rand() % 100000;
                addTwo =  rand() % 100000;

                // Will get the answer
                sum = addOne + addTwo;

                cout << "    " << a << "). " << addOne << " + " << addTwo << " = ";
                cin >> answer;
                catcher();


                if (sum == answer){
                    updateScore += 1;
                }
            }

            cout << " ========================================== " << endl;
            cout << "        YOUR SCORE IS: " << updateScore << endl;
            cout << " ========================================== " << endl;
            break;

        case 2:
            cout << " ========================================== " << endl;
            cout << "        YOU HAVE CHOSEN SUBTRACTION         " << endl;
            cout << " ========================================== " << endl;


            // to generate numbers
            for(int a = 1; a <= 10; a++) {

                // Retrieve a random number from 0 to 100
                subtra = rand() % 100000;
                minu = rand() % 100000;

                // so that there will be no negative answer
                if (subtra > minu){
                    diff = subtra - minu; // Will get the difference
                    cout << "    " << a << "). " << subtra << " - " << minu << " = ";
                    cin >> answer;
                    catcher();


                } else {
                    diff = minu - subtra; // Will get the difference
                    cout << "    " << a << "). " << minu << " - " << subtra << " = ";
                    cin >> answer;
                    catcher();

                }

                if (diff == answer){
                    updateScore += 1;
                }
            }
            cout << " ========================================== " << endl;
            cout << "        YOUR SCORE IS: " << updateScore << endl;
            cout << " ========================================== " << endl;
            break;

        case 3:
            cout << " ========================================== " << endl;
            cout << "        YOU HAVE CHOSEN MULTIPLICATION           " << endl;
            cout << " ========================================== " << endl;

            // to generate numbers
            for(int a = 1; a <= 10; a++) {

                // Retrieve a random number from 100 to 999
                mPlier = 100 + (rand() % 989);

                // Retrieve a random number from 10 to 99
                mPlicand =  10 + (rand() % 89);

                // Will get the answer
                product = mPlier * mPlicand;

                cout << "    " << a << "). " << mPlier << " X " << mPlicand << " = ";
                cin >> answer;
                catcher();


                if (product == answer){
                    updateScore += 1;
                }
            }

            cout << " ========================================== " << endl;
            cout << "        YOUR SCORE IS: " << updateScore << endl;
            cout << " ========================================== " << endl;
            break;

        case 4:
            cout << " ========================================== " << endl;
            cout << "        YOU HAVE CHOSEN DIVISION            " << endl;
            cout << " ========================================== " << endl;
            cout << "  INSTRUCTIONS:                             " << endl;
            cout << "     PLEASE ENTER THE WHOLE NUMBER QUOTIENT " << endl;
            cout << "     AND THE REMAINDER.                     " << endl;
            cout << " ========================================== " << endl;

            for (int a = 1; a <= 10; a++) {

                // Retrieve a random number from 1 to 10
                diviDend = 100 + (rand() % 989);
                diviSor = 10 + (rand() % 89);

                qout = diviDend / diviSor;
                remain = diviDend % diviSor;

                cout << "    " << a << "). " << diviDend << " / " << diviSor << ":" << endl;
                cout << "    ENTER QUOTIENT: ";
                cin >> answer;
                catcher();

                cout << "    ENTER REMAINDER: ";
                cin >> remainAns;


                if (qout == answer && remainAns == remain) {
                    updateScore += 1;
                }
            }

            cout << " ========================================== " << endl;
            cout << "        YOUR SCORE IS: " << updateScore << endl;
            cout << " ========================================== " << endl;
            break;

        case 5:
            option = 0;
            spacer();
            gradeLevel();
            break;
    }
    tryAgain();
}

void gradeFiveChoice(){ // for grade 2 add,multiply, subtract, divide numbers up to 100

    float addOne, addTwo, sum, answer ,subtra, minu, diff;
    float diviDend, diviSor, qout;
    float mPlier, mPlicand, product;

    cout << " ========================================== " << endl;
    cout << "        YOU HAVE CHOSEN GRADE 5 LEVEL       " << endl;
    cout << " ========================================== " << endl;
    cout << "        CHOOSE WHAT TYPE OF OPERATION       " << endl;
    cout << "               [1] ADDITION                 " << endl;
    cout << "               [2] SUBTRACTION              " << endl;
    cout << "               [3] MULTIPLICATION           " << endl;
    cout << "               [4] DIVISION                 " << endl;
    cout << "               [5] BACK TO MENU             " << endl;


    cout << "    ENTER THE NUMBER OF YOUR CHOICE: ";
    cin >> option;

    switch (option){

        case 1:
            cout << " ========================================== " << endl;
            cout << "        YOU HAVE CHOSEN ADDITION            " << endl;
            cout << " ========================================== " << endl;

            // to generate numbers
            for(int a = 1; a <= 10; a++) {

                // Retrieve a random number from 0.0 to 1000.0
                random_device ad;
                uniform_real_distribution<float>dist(0.0,1000.0);

                addOne = dist(ad); //needs to become 878.568
                addOne *=100; //multiply to 100 to became 87868.87868
                addOne = trunc(addOne); //truncate to remove decimal place, 87856.0
                addOne /= 100; //divide to 100 to bring back the decimal place to the right place, 878.560

                addTwo = dist(ad); //needs to become 878.568
                addTwo *=100; //multiply to 100 to became 87868.87868
                addTwo = trunc(addOne); //truncate to remove decimal place, 87856.0
                addTwo /= 100; //divide to 100 to bring back the decimal place to the right place, 878.560


                // Will get the answer
                sum = addOne + addTwo;

                cout << "    " << a << "). " << addOne << " + " << addTwo << " = ";
                cin >> answer;
                catcher();


                if (sum == answer){
                    updateScore += 1;
                }
            }

            cout << " ========================================== " << endl;
            cout << "        YOUR SCORE IS: " << updateScore << endl;
            cout << " ========================================== " << endl;
            break;

        case 2:
            cout << " ========================================== " << endl;
            cout << "        YOU HAVE CHOSEN SUBTRACTION         " << endl;
            cout << " ========================================== " << endl;


            // to generate numbers
            for(int a = 1; a <= 10; a++) {

                random_device sb;
                uniform_real_distribution<float>dist(0.0,1000.0);

                // Retrieve a random number from 0.0 to 1000.0
                subtra = ceil(dist(sb) * 100.0) / 100.0;
                minu = ceil(dist(sb) * 100.0) / 100.0;

                // so that there will be no negative answer
                if (subtra > minu){//878.568
                    diff = subtra-minu; //needs to become 878.568
                    diff *=100; //multiply to 100 to became 87868.87868
                    diff = trunc(diff); //truncate to remove decimal place, 87856.0
                    diff /= 100; //divide to 100 to bring back the decimal place to the right place, 878.560

                    cout << "    " << a << "). " << subtra << " - " << minu << " = ";
                    cin >> answer;
                    catcher();


                } else {//878.568
                    diff = minu-subtra; //needs to become 878.568
                    diff *=100; //multiply to 100 to became 87868.87868
                    diff = trunc(diff); //truncate to remove decimal place, 87856.0
                    diff /= 100; //divide to 100 to bring back the decimal place to the right place, 878.560

                    cout << "    " << a << "). " << minu << " - " << subtra << " = ";
                    cin >> answer;
                    catcher();

                }

                if (diff == answer){
                    updateScore += 1;
                }
            }
            cout << " ========================================== " << endl;
            cout << "        YOUR SCORE IS: " << updateScore << endl;
            cout << " ========================================== " << endl;
            break;

        case 3:
            cout << " ========================================== " << endl;
            cout << "        YOU HAVE CHOSEN MULTIPLICATION           " << endl;
            cout << " ========================================== " << endl;
            cout << "  INSTRUCTIONS:                             " << endl;
            cout << "     PLEASE ENTER THE ANSWER IN TO THE      " << endl;
            cout << "     NEAREST HUNDREDTHS                     " << endl;
            cout << " ========================================== " << endl;


            // to generate numbers
            for(int a = 1; a <= 10; a++) {

                random_device multi;
                uniform_real_distribution<float>dist(0.0,99.0);

                // Retrieve a random number from 100 to 999
                mPlier = ceil(dist(multi) * 100.0) / 100.0;

                // Retrieve a random number from 10 to 99
                mPlicand = ceil(dist(multi) * 100.0) / 100.0;

                // Will get the answer
                product = ceil((mPlier * mPlicand) * 100.0) / 100.0;


                cout << "    " << a << "). " << mPlier << " X " << mPlicand << " = ";
                cin >> answer;
                catcher();


                if (product == answer){
                    updateScore += 1;
                }
            }

            cout << " ========================================== " << endl;
            cout << "        YOUR SCORE IS: " << updateScore << endl;
            cout << " ========================================== " << endl;
            break;

        case 4:
            cout << " ========================================== " << endl;
            cout << "        YOU HAVE CHOSEN DIVISION            " << endl;
            cout << " ========================================== " << endl;
            cout << "  INSTRUCTIONS:                             " << endl;
            cout << "     PLEASE ENTER THE QUOTIENT              " << endl;
            cout << "     AND GET TWO DECIMAL PLACES             " << endl;
            cout << "                                            " << endl;
            cout << "     !!DO NOT ROUND OFF!!                   " << endl;
            cout << " ========================================== " << endl;

            for (int a = 1; a <= 10; a++) {

                // Retrieve a random number from 1 to 10
                diviDend = 100.0 + (rand() % 989);
                diviSor = 10 + (rand() % 89);


                qout = diviDend/diviSor; //needs to become 878.568
                qout *=100; //multiply to 100 to became 87868.87868
                qout = trunc(qout); //truncate to remove decimal place, 87856.0
                qout /= 100; //divide to 100 to bring back the decimal place to the right place, 878.560


                cout << "    " << a << "). " << diviDend << " / " << diviSor << " = ";
                cin >> answer;
                catcher();


                if (qout == answer) {
                    updateScore += 1;
                }
            }

            cout << " ========================================== " << endl;
            cout << "        YOUR SCORE IS: " << updateScore << endl;
            cout << " ========================================== " << endl;
            break;

        case 5:
            option = 0;
            spacer();
            gradeLevel();
            break;
    }
    tryAgain();
}

void gradeSixChoice(){ // for grade 2 add,multiply, subtract, divide numbers up to 100
    int radius;
    float answer, cir, area;
    float perimeter, aSide, bSide, cSide;
    float base, height;
    float length, width;
    cout << " ========================================== " << endl;
    cout << "        YOU HAVE CHOSEN GRADE 6 LEVEL       " << endl;
    cout << " ========================================== " << endl;
    cout << "        CHOOSE WHAT TYPE OF OPERATION       " << endl;
    cout << "               [1] CIRCLE                   " << endl;
    cout << "               [2] TRIANGLE                 " << endl;
    cout << "               [3] RECTANGLE                " << endl;
    cout << "               [4] SQUARE                   " << endl;
    cout << "               [5] BACK TO MENU             " << endl;


    cout << "    ENTER THE NUMBER OF YOUR CHOICE: ";
    cin >> option;

    switch (option) {
        case 1:
            cout << " ========================================== " << endl;
            cout << "        YOU HAVE CHOSEN CIRCLE              " << endl;
            cout << " ========================================== " << endl;

            cout << "        CHOOSE WHAT TYPE TO SOLVE           " << endl;
            cout << "               [1] CIRCUMFERENCE            " << endl;
            cout << "               [2] AREA                 " << endl;
            cout << "               [3] BACK TO MENU             " << endl;


            cout << "    ENTER THE NUMBER OF YOUR CHOICE: ";
            cin >> option;

            switch (option) {
                case 1:
                    for (int a = 1; a <= 5; a++) {

                        radius = 1 + rand() % 98;

                        cout << " ========================================== " << endl;
                        cout << "   NO " << a << ":        " << endl;
                        cout << " ========================================== " << endl;
                        cout << "   GIVEN:        " << endl;
                        cout << "    RADIUS: " << radius << endl;
                        cout << "    PI: 3.14     " << endl;
                        cout << " ========================================== " << endl;
                        cout << "   FORMULA: 2 x PI x RADIUS        " << endl;
                        cout << " ========================================== " << endl;
                        cout << "   SOLVE FOR CIRCUMFERENCE:        " << endl;
                        cout << "   ENTER CIRCUMFERENCE: ";
                        cin >> answer;
                        catcher();

                        cout << " ========================================== " << endl;
                        cout << " " << endl;

                        //Solve for circumference
                        cir = 2 * PI * radius;

                        if (cir == answer) {
                            updateScore += 1;
                        }
                    }

                    cout << " ========================================== " << endl;
                    cout << "        YOUR SCORE IS: " << updateScore << endl;
                    cout << " ========================================== " << endl;
                    break;

                case 2:
                    for (int a = 1; a <= 5; a++) {

                        radius = 1 + rand() % 98;

                        cout << " ========================================== " << endl;
                        cout << "   NO " << a << ":        " << endl;
                        cout << " ========================================== " << endl;
                        cout << "   GIVEN:        " << endl;
                        cout << "    RADIUS: " << radius << endl;
                        cout << "    PI: 3.14     " << endl;
                        cout << " ========================================== " << endl;
                        cout << "   FORMULA: PI x RADIUS^2                   " << endl;
                        cout << " ========================================== " << endl;
                        cout << "   SOLVE FOR AREA:                          " << endl;
                        cout << "   ENTER AREA: ";
                        cin >> answer;
                        catcher();

                        cout << " ========================================== " << endl;
                        cout << " " << endl;

                        //Solve for circumference
                        area = PI * pow(radius, 2);

                        if (area == answer) {
                            updateScore += 1;
                        }
                    }

                    cout << " ========================================== " << endl;
                    cout << "        YOUR SCORE IS: " << updateScore << endl;
                    cout << " ========================================== " << endl;
                    break;
                case 3:
                    option = 0;
                    spacer();
                    gradeLevel();
                    break;
            }
        break;
        case 2:
            cout << " ========================================== " << endl;
            cout << "        YOU HAVE CHOSEN TRIANGLE              " << endl;
            cout << " ========================================== " << endl;

            cout << "        CHOOSE WHAT TYPE TO SOLVE           " << endl;
            cout << "               [1] PERIMETER                " << endl;
            cout << "               [2] AREA                     " << endl;
            cout << "               [3] BACK TO MENU             " << endl;

            cout << "    ENTER THE NUMBER OF YOUR CHOICE: ";
            cin >> option;

            switch (option) {
                case 1:
                    for (int a = 1; a <= 5; a++) {

                        aSide = 1 + rand() % 98;
                        bSide = 1 + rand() % 98;
                        cSide = 1 + rand() % 98;

                        cout << " ========================================== " << endl;
                        cout << "   NO " << a << ":        " << endl;
                        cout << " ========================================== " << endl;
                        cout << "   GIVEN:        " << endl;
                        cout << "    A SIDE: " << aSide << endl;
                        cout << "    B SIDE: " << bSide << endl;
                        cout << "    C SIDE: " << cSide << endl;
                        cout << " ========================================== " << endl;
                        cout << "   FORMULA: P = A + B + C       " << endl;
                        cout << " ========================================== " << endl;
                        cout << "   SOLVE FOR PERIMETER:        " << endl;
                        cout << "   ENTER PERIMETER: ";
                        cin >> answer;
                        catcher();

                        cout << " ========================================== " << endl;
                        cout << " " << endl;

                        //Solve for perimeter
                        perimeter = aSide + bSide + cSide;

                        if (perimeter == answer) {
                            updateScore += 1;
                        }
                    }
                    cout << " ========================================== " << endl;
                    cout << "        YOUR SCORE IS: " << updateScore << endl;
                    cout << " ========================================== " << endl;
                    break;

                case 2:
                    for (int a = 1; a <= 5; a++) {

                        base = 1 + rand() % 98;
                        height = 1 + rand() % 98;

                        cout << " ========================================== " << endl;
                        cout << "   NO " << a << ":        " << endl;
                        cout << " ========================================== " << endl;
                        cout << "   GIVEN:        " << endl;
                        cout << "    BASE: " << base << endl;
                        cout << "    HEIGHT : " << height << endl;
                        cout << " ========================================== " << endl;
                        cout << "   FORMULA: A = 1/2 * B * H       " << endl;
                        cout << " ========================================== " << endl;
                        cout << "   SOLVE FOR AREA:        " << endl;
                        cout << "   ENTER AREA: ";
                        cin >> answer;
                        catcher();

                        cout << " ========================================== " << endl;
                        cout << " " << endl;

                        //Solve for AREA
                        area = 0.5 * base * height;

                        if (area == answer) {
                            updateScore += 1;
                        }
                    }
                    cout << " ========================================== " << endl;
                    cout << "        YOUR SCORE IS: " << updateScore << endl;
                    cout << " ========================================== " << endl;
                    break;

                case 3:
                    option = 0;
                    spacer();
                    gradeLevel();
                    break;
            }
            break;

        case 3:
            cout << " ========================================== " << endl;
            cout << "        YOU HAVE CHOSEN RECTANGLE           " << endl;
            cout << " ========================================== " << endl;

            cout << "        CHOOSE WHAT TYPE TO SOLVE           " << endl;
            cout << "               [1] PERIMETER                " << endl;
            cout << "               [2] AREA                     " << endl;
            cout << "               [3] BACK TO MENU             " << endl;


            cout << "    ENTER THE NUMBER OF YOUR CHOICE: ";
            cin >> option;

            switch (option) {
                case 1:
                    for (int a = 1; a <= 5; a++) {

                        length = 1 + rand() % 98;
                        width = 1 + rand() % 98;

                        cout << " ========================================== " << endl;
                        cout << "   NO " << a << ":        " << endl;
                        cout << " ========================================== " << endl;
                        cout << "   GIVEN:        " << endl;
                        cout << "    LENGTH: " << length << endl;
                        cout << "    WIDTH: " << width << endl;
                        cout << " ========================================== " << endl;
                        cout << "   FORMULA: P = 2 (L + W)                   " << endl;
                        cout << " ========================================== " << endl;
                        cout << "   SOLVE FOR PERIMETER:        " << endl;
                        cout << "   ENTER PERIMETER: ";
                        cin >> answer;
                        catcher();

                        cout << " ========================================== " << endl;
                        cout << " " << endl;

                        //Solve for perimeter
                        perimeter = 2*(length+width);

                        if (perimeter == answer) {
                            updateScore += 1;
                        }
                    }
                    cout << " ========================================== " << endl;
                    cout << "        YOUR SCORE IS: " << updateScore << endl;
                    cout << " ========================================== " << endl;
                    break;

                case 2:
                    for (int a = 1; a <= 5; a++) {

                        length = 1 + rand() % 98;
                        width = 1 + rand() % 98;

                        cout << " ========================================== " << endl;
                        cout << "   NO " << a << ":        " << endl;
                        cout << " ========================================== " << endl;
                        cout << "   GIVEN:        " << endl;
                        cout << "    LENGTH: " << length << endl;
                        cout << "    WIDTH: " << width << endl;
                        cout << " ========================================== " << endl;
                        cout << "   FORMULA: A = W * L       " << endl;
                        cout << " ========================================== " << endl;
                        cout << "   SOLVE FOR AREA:        " << endl;
                        cout << "   ENTER AREA: ";
                        cin >> answer;
                        catcher();

                        cout << " ========================================== " << endl;
                        cout << " " << endl;

                        //Solve for perimeter
                        area = width * length;

                        if (area == answer) {
                            updateScore += 1;
                        }
                    }
                    cout << " ========================================== " << endl;
                    cout << "        YOUR SCORE IS: " << updateScore << endl;
                    cout << " ========================================== " << endl;
                    break;
                case 3:
                    option = 0;
                    spacer();
                    gradeLevel();
                    break;
            }
            break;
        case 4:
            cout << " ========================================== " << endl;
            cout << "        YOU HAVE CHOSEN SQUARE              " << endl;
            cout << " ========================================== " << endl;

            cout << "        CHOOSE WHAT TYPE TO SOLVE           " << endl;
            cout << "               [1] PERIMETER            " << endl;
            cout << "               [2] AREA                 " << endl;
            cout << "               [3] BACK TO MENU             " << endl;

            cout << "    ENTER THE NUMBER OF YOUR CHOICE: ";
            cin >> option;

            switch (option) {
                case 1:
                    for (int a = 1; a <= 5; a++) {

                        aSide = 1 + rand() % 98;

                        cout << " ========================================== " << endl;
                        cout << "   NO " << a << ":        " << endl;
                        cout << " ========================================== " << endl;
                        cout << "   GIVEN:        " << endl;
                        cout << "    aSide: " << aSide << endl;
                        cout << " ========================================== " << endl;
                        cout << "   FORMULA: P = 4 * A                       " << endl;
                        cout << " ========================================== " << endl;
                        cout << "   SOLVE FOR PERIMETER:        " << endl;
                        cout << "   ENTER PERIMETER: ";
                        cin >> answer;
                        catcher();

                        cout << " ========================================== " << endl;
                        cout << " " << endl;

                        //Solve for perimeter
                        perimeter = 4 * aSide;

                        if (perimeter == answer) {
                            updateScore += 1;
                        }
                    }
                    cout << " ========================================== " << endl;
                    cout << "        YOUR SCORE IS: " << updateScore << endl;
                    cout << " ========================================== " << endl;
                    break;

                case 2:
                    for (int a = 1; a <= 5; a++) {

                        aSide = 1 + rand() % 98;

                        cout << " ========================================== " << endl;
                        cout << "   NO " << a << ":        " << endl;
                        cout << " ========================================== " << endl;
                        cout << "   GIVEN:        " << endl;
                        cout << "    LENGTH: " << aSide << endl;
                        cout << " ========================================== " << endl;
                        cout << "   FORMULA: A = A^2 " << endl;
                        cout << " ========================================== " << endl;
                        cout << "   SOLVE FOR AREA:        " << endl;
                        cout << "   ENTER AREA: ";
                        cin >> answer;
                        catcher();

                        cout << " ========================================== " << endl;
                        cout << " " << endl;

                        //Solve for perimeter
                        area = pow(aSide,2);

                        if (area == answer) {
                            updateScore += 1;
                        }
                    }
                    cout << " ========================================== " << endl;
                    cout << "        YOUR SCORE IS: " << updateScore << endl;
                    cout << " ========================================== " << endl;
                    break;
                case 3:
                    option = 0;
                    spacer();
                    gradeLevel();
                    break;
            }
            break;
        case 5:
            option = 0;
            spacer();
            gradeLevel();
            break;
    }
    tryAgain();
}