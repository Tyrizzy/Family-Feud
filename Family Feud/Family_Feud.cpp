#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
#include <map>
using namespace std;

class GameShow{
    public:
    string Name;
    string getName() const {return Name;};
};

class FamilyFeud{
    public:
    int Points = 0;
    int getPoints() const {return Points;};
};

int Rand, strike, point, total = 0;
string line, user, word;
map<string, int> answers;

void Round1(){
    fstream datafile_Questions;
    FamilyFeud FamilyFeud;
    strike = 0;

    srand(time(0));
    Rand = rand() % 3 + 1 ;
    
    if(Rand == 1){
        datafile_Questions.open("bodyache.txt", ios::in);
        if (datafile_Questions.is_open()){
            while((datafile_Questions)){            
                datafile_Questions >> word;
                datafile_Questions >> point;
                pair<string,int> Ans(word,point);
                answers.insert(Ans);
            }
            datafile_Questions.close();
        }
        else{
            cout << "CANNOT READ FILE" << endl;
        }

        while (strike != 3){
            cout << "TOP 7 ANSWERS ON THE BOARD: Name a part of your body that you might say has an 'ache': " << endl;
            cout << "Answer: ";
            cin >> user;
            transform(user.begin(), user.end(), user.begin(), ::toupper);

            if (answers.find(user) != answers.end()){
                cout << "CORRECT ANSWER!!! " << answers.at(user) << " points" << endl;
                FamilyFeud.Points += answers.at(user);
                total += answers.at(user);
            }            

            if (answers.find(user) == answers.end()){
                strike += 1;            
                cout << "STRIKE " << strike << endl;                                                               
            }   

            cout << "" << endl;

            answers.erase(user);

            if (answers.empty() == 1){
                cout << "CONGRATULATIONS YOU SWEPT THE BOARD, ROUND 1 OVER" << endl;
                cout << "Total Points for Round 1: " << FamilyFeud.getPoints() << " points" << endl;
                
                break;
            }

            if (strike == 3){
                cout << "SORRY YOU HAVE 3 STRIKES, ROUND 1 OVER" << endl;
                cout << "Total Points for Round 1: " << FamilyFeud.getPoints() << " points" << endl;
                break;
            }            
        }
    }

    if(Rand == 2){
        datafile_Questions.open("fruit.txt", ios::in);
        if (datafile_Questions.is_open()){
            while((datafile_Questions)){            
                datafile_Questions >> word;
                datafile_Questions >> point;
                pair<string,int> Ans(word,point);
                answers.insert(Ans);
            }
            datafile_Questions.close();
        }
        else{
            cout << "CANNOT READ FILE" << endl;
        }

        while (strike != 3){
            cout << "TOP 7 ANSWERS ON THE BOARD: Name a fruit you might eat in the morning: " << endl;
            cout << "Answer: ";
            cin >> user;
            transform(user.begin(), user.end(), user.begin(), ::toupper);

            if (answers.find(user) != answers.end()){
                cout << "CORRECT ANSWER!!! " << answers.at(user) << " points" << endl;
                FamilyFeud.Points += answers.at(user);
                total += answers.at(user);
            }                

            if (answers.find(user) == answers.end()){
                strike += 1;            
                cout << "STRIKE " << strike << endl;                                                               
            }   

            cout << "" << endl;

            answers.erase(user);

            if (answers.empty() == 1){
                cout << "CONGRATULATIONS YOU SWEPT THE BOARD, ROUND 1 OVER" << endl;
                cout << "Total Points for Round 1: " << FamilyFeud.getPoints() << " points" << endl;
                break;
            }

            if (strike == 3){
                cout << "SORRY YOU HAVE 3 STRIKES, ROUND 1 OVER" << endl;
                cout << "Total Points for Round 1: " << FamilyFeud.getPoints() << " points" << endl;
                break;
            }            
        }
    }

    if(Rand == 3){
        datafile_Questions.open("house.txt", ios::in);
        if (datafile_Questions.is_open()){
            while((datafile_Questions)){            
                datafile_Questions >> word;
                datafile_Questions >> point;
                pair<string,int> Ans(word,point);
                answers.insert(Ans);
            }
            datafile_Questions.close();
        }
        else{
            cout << "CANNOT READ FILE" << endl;
        }

        while (strike != 3){
            cout << "TOP 8 ANSWERS ON THE BOARD: Other than wood, name a material that might be used when building a house: " << endl;
            cout << "Answer: ";
            cin >> user;
            transform(user.begin(), user.end(), user.begin(), ::toupper);

            if (answers.find(user) != answers.end()){
                cout << "CORRECT ANSWER!!! " << answers.at(user) << " points" << endl;
                FamilyFeud.Points += answers.at(user);
                total += answers.at(user);
            }                        

            if (answers.find(user) == answers.end()){
                strike += 1;            
                cout << "STRIKE " << strike << endl;                                                               
            }   

            cout << "" << endl;

            answers.erase(user);

            if (answers.empty() == 1){
                cout << "CONGRATULATIONS YOU SWEPT THE BOARD, ROUND 1 OVER" << endl;
                cout << "Total Points for Round 1: " << FamilyFeud.getPoints() << " points" << endl;
                break;
            }

            if (strike == 3){
                cout << "SORRY YOU HAVE 3 STRIKES, ROUND 1 OVER" << endl;
                cout << "Total Points for Round 1: " << FamilyFeud.getPoints() << " points" << endl;
                break;
            }            
        }
    }    
}

void Round2(){
    fstream datafile_Questions;
    FamilyFeud FamilyFeud;
    strike = 0;

    srand(time(0));
    Rand = rand() % 3 + 1 ;
    
    if(Rand == 1){
        datafile_Questions.open("candy_bar.txt", ios::in);
        if (datafile_Questions.is_open()){
            while((datafile_Questions)){            
                datafile_Questions >> word;
                datafile_Questions >> point;
                pair<string,int> Ans(word,point);
                answers.insert(Ans);
            }
            datafile_Questions.close();
        }
        else{
            cout << "CANNOT READ FILE" << endl;
        }

        while (strike != 3){
            cout << "TOP 6 ANSWERS ON THE BOARD: Name a common candy bar ingredient: " << endl;
            cout << "Answer: ";
            cin >> user;
            transform(user.begin(), user.end(), user.begin(), ::toupper);

            if (answers.find(user) != answers.end()){
                cout << "CORRECT ANSWER!!! " << answers.at(user) << " points" << endl;
                FamilyFeud.Points += answers.at(user);
                total += answers.at(user);
            }            

            if (answers.find(user) == answers.end()){
                strike += 1;            
                cout << "STRIKE " << strike << endl;                                                               
            }   

            cout << "" << endl;

            answers.erase(user);

            if (answers.empty() == 1){
                cout << "CONGRATULATIONS YOU SWEPT THE BOARD, ROUND 2 OVER" << endl;
                cout << "Total Points for Round 2: " << FamilyFeud.getPoints() << " points" << endl;
                break;
            }

            if (strike == 3){
                cout << "SORRY YOU HAVE 3 STRIKES, ROUND 2 OVER" << endl;
                cout << "Total Points for Round 2: " << FamilyFeud.getPoints() << " points" << endl;
                break;
            }            
        }
    }

    if(Rand == 2){
        datafile_Questions.open("state.txt", ios::in);
        if (datafile_Questions.is_open()){
            while((datafile_Questions)){            
                datafile_Questions >> word;
                datafile_Questions >> point;
                pair<string,int> Ans(word,point);
                answers.insert(Ans);
            }
            datafile_Questions.close();
        }
        else{
            cout << "CANNOT READ FILE" << endl;
        }

        while (strike != 3){
            cout << "TOP 7 ANSWERS ON THE BOARD: Name a state with a lot of mountains: " << endl;
            cout << "Answer: ";
            cin >> user;
            transform(user.begin(), user.end(), user.begin(), ::toupper);

            if (answers.find(user) != answers.end()){
                cout << "CORRECT ANSWER!!! " << answers.at(user) << " points" << endl;
                FamilyFeud.Points += answers.at(user);
                total += answers.at(user);              
            }            

            if (answers.find(user) == answers.end()){
                strike += 1;            
                cout << "STRIKE " << strike << endl;                                                               
            }   

            cout << "" << endl;

            answers.erase(user);

            if (answers.empty() == 1){
                cout << "CONGRATULATIONS YOU SWEPT THE BOARD, ROUND 2 OVER" << endl;
                cout << "Total Points for Round 2: " << FamilyFeud.getPoints() << " points" << endl;
                break;
            }

            if (strike == 3){
                cout << "SORRY YOU HAVE 3 STRIKES, ROUND 2 OVER" << endl;
                cout << "Total Points for Round 2: " << FamilyFeud.getPoints() << " points" << endl;
                break;
            }            
        }
    }

    if(Rand == 3){
        datafile_Questions.open("weekly.txt", ios::in);
        if (datafile_Questions.is_open()){
            while((datafile_Questions)){            
                datafile_Questions >> word;
                datafile_Questions >> point;
                pair<string,int> Ans(word,point);
                answers.insert(Ans);
            }
            datafile_Questions.close();
        }
        else{
            cout << "CANNOT READ FILE" << endl;
        }

        while (strike != 3){
            cout << "TOP 7 ANSWERS ON THE BOARD: Tell me something many people do or go to just once a week: " << endl;
            cout << "Answer: ";
            cin >> user;
            transform(user.begin(), user.end(), user.begin(), ::toupper);

            if (answers.find(user) != answers.end()){
                cout << "CORRECT ANSWER!!! " << answers.at(user) << " points" << endl;
                FamilyFeud.Points += answers.at(user);
                total += answers.at(user);              
            }            

            if (answers.find(user) == answers.end()){
                strike += 1;            
                cout << "STRIKE " << strike << endl;                                                               
            }   

            cout << "" << endl;

            answers.erase(user);

            if (answers.empty() == 1){
                cout << "CONGRATULATIONS YOU SWEPT THE BOARD, ROUND 2 OVER" << endl;
                cout << "Total Points for Round 2: " << FamilyFeud.getPoints() << " points" << endl;
                break;
            }

            if (strike == 3){
                cout << "SORRY YOU HAVE 3 STRIKES, ROUND 2 OVER" << endl;
                cout << "Total Points for Round 2: " << FamilyFeud.getPoints() << " points" << endl;
                break;
            }            
        }
    }    
}

void Round3(){
    fstream datafile_Questions;
    FamilyFeud FamilyFeud;
    strike = 0;

    srand(time(0));
    Rand = rand() % 2 + 1 ;
    
    if(Rand == 1){
        datafile_Questions.open("breakdown.txt", ios::in);
        if (datafile_Questions.is_open()){
            while((datafile_Questions)){            
                datafile_Questions >> word;
                datafile_Questions >> point;
                pair<string,int> Ans(word,point);
                answers.insert(Ans);
            }
            datafile_Questions.close();
        }
        else{
            cout << "CANNOT READ FILE" << endl;
        }

        while (strike != 3){
            cout << "TOP 6 ANSWERS ON THE BOARD: Name something that breaks down: " << endl;
            cout << "Answer: ";
            cin >> user;
            transform(user.begin(), user.end(), user.begin(), ::toupper);

            if (answers.find(user) != answers.end()){
                cout << "CORRECT ANSWER!!! " << answers.at(user) << " points" << endl;
                FamilyFeud.Points += answers.at(user);
                total += answers.at(user);             
            }            

            if (answers.find(user) == answers.end()){
                strike += 1;            
                cout << "STRIKE " << strike << endl;                                                               
            }   

            cout << "" << endl;

            answers.erase(user);

            if (answers.empty() == 1){
                cout << "CONGRATULATIONS YOU SWEPT THE BOARD, ROUND 3 OVER" << endl;
                cout << "Total Points for Round 3: " << FamilyFeud.getPoints() * 2 << " points" << endl;
                break;
            }

            if (strike == 3){
                cout << "SORRY YOU HAVE 3 STRIKES, ROUND 3 OVER" << endl;
                cout << "Total Points for Round 3: " << FamilyFeud.getPoints() * 2 << " points" << endl;
                break;
            }            
        }
    }

    if(Rand == 2){
        datafile_Questions.open("two_am.txt", ios::in);
        if (datafile_Questions.is_open()){
            while((datafile_Questions)){            
                datafile_Questions >> word;
                datafile_Questions >> point;
                pair<string,int> Ans(word,point);
                answers.insert(Ans);
            }
            datafile_Questions.close();
        }
        else{
            cout << "CANNOT READ FILE" << endl;
        }

        while (strike != 3){
            cout << "TOP 5 ANSWERS ON THE BOARD: Name a reason you would wake up at 2AM in the morning: " << endl;
            cout << "Answer: ";
            cin >> user;
            transform(user.begin(), user.end(), user.begin(), ::toupper);

            if (answers.find(user) != answers.end()){
                cout << "CORRECT ANSWER!!! " << answers.at(user) << " points" << endl;
                FamilyFeud.Points += answers.at(user);
                total += answers.at(user);              
            }            

            if (answers.find(user) == answers.end()){
                strike += 1;            
                cout << "STRIKE " << strike << endl;                                                               
            }   

            cout << "" << endl;

            answers.erase(user);

            if (answers.empty() == 1){
                cout << "CONGRATULATIONS YOU SWEPT THE BOARD, ROUND 3 OVER" << endl;
                cout << "Total Points for Round 3: " << FamilyFeud.getPoints() * 2 << " points" << endl;
                break;
            }

            if (strike == 3){
                cout << "SORRY YOU HAVE 3 STRIKES, ROUND 3 OVER" << endl;
                cout << "Total Points for Round 3: " << FamilyFeud.getPoints() * 2 << " points" << endl;
                break;
            }            
        }
    }
}

void Round4(){
    fstream datafile_Questions;
    FamilyFeud FamilyFeud;
    strike = 0;

    srand(time(0));
    Rand = rand() % 2 + 1 ;
    
    if(Rand == 1){
        datafile_Questions.open("bear.txt", ios::in);
        if (datafile_Questions.is_open()){
            while((datafile_Questions)){            
                datafile_Questions >> word;
                datafile_Questions >> point;
                pair<string,int> Ans(word,point);
                answers.insert(Ans);
            }
            datafile_Questions.close();
        }
        else{
            cout << "CANNOT READ FILE" << endl;
        }

        while (strike != 3){
            cout << "TOP 6 ANSWERS ON THE BOARD: Name a type of bear: " << endl;
            cout << "Answer: ";
            cin >> user;
            transform(user.begin(), user.end(), user.begin(), ::toupper);

            if (answers.find(user) != answers.end()){
                cout << "CORRECT ANSWER!!! " << answers.at(user) << " points" << endl;
                FamilyFeud.Points += answers.at(user);
                total += answers.at(user);              
            }            

            if (answers.find(user) == answers.end()){
                strike += 1;            
                cout << "STRIKE " << strike << endl;                                                               
            }   

            cout << "" << endl;

            answers.erase(user);

            if (answers.empty() == 1){
                cout << "CONGRATULATIONS YOU SWEPT THE BOARD, ROUND 4 OVER" << endl;
                cout << "Total Points for Round 4: " << FamilyFeud.getPoints() * 3 << " points" << endl;
                break;
            }

            if (strike == 3){
                cout << "SORRY YOU HAVE 3 STRIKES, ROUND 4 OVER" << endl;
                cout << "Total Points for Round 4: " << FamilyFeud.getPoints() * 3 << " points" << endl;
                break;
            }            
        }
    }

    if(Rand == 2){
        datafile_Questions.open("sports.txt", ios::in);
        if (datafile_Questions.is_open()){
            while((datafile_Questions)){            
                datafile_Questions >> word;
                datafile_Questions >> point;
                pair<string,int> Ans(word,point);
                answers.insert(Ans);
            }
            datafile_Questions.close();
        }
        else{
            cout << "CANNOT READ FILE" << endl;
        }

        while (strike != 3){
            cout << "TOP 6 ANSWERS ON THE BOARD: Name a sport some mothers hope their child never plays: " << endl;
            cout << "Answer: ";
            cin >> user;
            transform(user.begin(), user.end(), user.begin(), ::toupper);

            if (answers.find(user) != answers.end()){
                cout << "CORRECT ANSWER!!! " << answers.at(user) << " points" << endl;
                FamilyFeud.Points += answers.at(user);
                total += answers.at(user);            
            }            

            if (answers.find(user) == answers.end()){
                strike += 1;            
                cout << "STRIKE " << strike << endl;                                                               
            }   

            cout << "" << endl;

            answers.erase(user);

            if (answers.empty() == 1){
                cout << "CONGRATULATIONS YOU SWEPT THE BOARD, ROUND 4 OVER" << endl;
                cout << "Total Points for Round 4: " << FamilyFeud.getPoints() * 3 << " points" << endl;
                break;
            }

            if (strike == 3){
                cout << "SORRY YOU HAVE 3 STRIKES, ROUND 4 OVER" << endl;
                cout << "Total Points for Round 4: " << FamilyFeud.getPoints() * 3 << " points" << endl;
                break;
            }            
        }
    }
}

void close(){
    string C;
    cout << "Enter any key and press enter to close" << endl;
    cin >> C;
}

int main(){
    GameShow GameShow;
    FamilyFeud FamilyFeud;
    cout << "Enter name of contestant: ";
    cin >> GameShow.Name;

    cout << "Welcome " << GameShow.getName() << "!, Let's get ready to play the FEUD!!!" << endl;
    
    cout << "" << endl;

    cout << "ROUND 1" << endl;
    Round1();
    
    cout << "" << endl;

    cout << "ROUND 2" << endl;
    Round2();

    cout << "" << endl;

    cout << "ROUND 3 - DOUBLE THE POINT VALUE" << endl;
    Round3();

    cout << "" << endl;

    cout << "ROUND 4 - TRIPLE THE POINT VALUE" << endl;
    Round4();

    cout << "" << endl;

    if (FamilyFeud.getPoints() >= 500){
        cout << "GAME TOTAL: " << total << endl;
        cout << "CONGRATULATIONS " << GameShow.getName() << " You move on to the FAST MONEY ROUND!!!" << endl;
    }
    else{
        cout << "GAME TOTAL: " << total << endl;
        cout << "SORRY " << GameShow.getName() << " You do not have enough points to move on to the FAST MONEY ROUND!!!" << endl;
    }

    close();
    return 0;
}