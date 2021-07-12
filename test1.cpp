#include <bits/stdc++.h>
#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    fstream in("Random Names.txt");
    int numLoop, randNum, average, sum, count = 0;
    int grade[1000];
    float numTemp;

    string feeling = "";

    cout << "How are you?" << endl;
    getline(cin, feeling);
    cout << feeling << endl << endl;

    in >> randNum;

    while(in >> numLoop){
        sum = 0;
        numTemp = 0;

        for(int i=0; i<numLoop; i++){
            in >> grade[i];
        } 

        for(int j=0; j<numLoop; j++){
            sum = sum + grade[j];
        }

        average = sum/numLoop;

        for(int k=0; k<numLoop; k++){
            if(grade[k] > average){
                numTemp++;
            }
        }

        count++;
        cout << fixed << setprecision(3) << "%" << (numTemp/numLoop)*100 << endl;

        if(randNum == count) return 0;


    }
}