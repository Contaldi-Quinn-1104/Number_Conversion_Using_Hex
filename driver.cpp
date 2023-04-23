//Program: Magical CatGirl Machine Language Simulation
//By Quinn Joseph Contaldi
//04/01/2023

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstdint>
#include <type_traits>
#include "CatGirl.h"

using namespace std;

void doMath(string operation, int32_t registoryArray[], int position1, int position2,  int position3);
void readTxtFile(string fileName);
void flagChecker( int32_t registoryArray[], int position1, int position2,  int position3, long long int testNumber);
void opperation(string operation, int32_t array[]);
void displayArray(int32_t*);

int main()
{
    CatGirl catGirl;
    string fname = "input.txt";
    int32_t num1, num2;
    int32_t registoryArray[8] = {0};
    string storeValue, hex1, hex2, operationName;
    int operation;
    int positionArray[3] = {0};
    int position1, position2, position3;
    //declares the input stream of the file                                                                                                                                                                            
    ifstream fin (fname.c_str());
    //if the file is open the program proceds with the operation
    catGirl.displayMenu();                                                                                                                                                 
    if(fin.is_open())
    {
        while(!fin.eof())
        {
            //stores the opperator
            fin >> operationName;
            //if operationName is MOV then we only need one operand and skip the fin for hex number 2. Any other operation requires 2 operands.
            if((operationName == "MOV") || (operationName == "mov"))
            {
                //stores the resgistory value as string then treats it as a character array and subtract 48 which is the ascii repersentation to get the proper intager position                                                                                                                                                                                 
                fin >> storeValue;
                //the string will be R1 for example so 1 is located at array element 1 thus we set our position 1 which repersents our store registory as a int value.
                position1 = storeValue[1];
                position1 -= 48;
                //This will take the number that will be loaded in our store registory
                fin >> hex1;  
                registoryArray[position1] = stoll(hex1,0,16);
                cout << operationName << " " << storeValue << " " << "#" << hex1 << endl;
                displayArray(registoryArray);
                //call the operation function to execute the arthmetic operation
            }
            else
            {
                fin >> storeValue;
                position1 = storeValue[1];
                position1 -= 48;
                fin >> hex1;
                position2 =  hex1[1];
                position2 -= 48;
                //converts the hex values into decimal
                fin >> hex2;
                position3 = hex2[1];
                position3 -= 48;
                //cout << "position one: " << position1 << endl;
                //cout << "position two: " << position2 << endl;
                //cout << "position three: " << position3 << endl;
                //cout << "Operation Name: " << operationName << endl;
                doMath(operationName, registoryArray, position1, position2, position3);
                displayArray(registoryArray);
            }                 
        }
    }
    else
    {
        cout << "Sorry cannot open your file!" << endl;
    }
    fin.close();

}

void doMath(string operation, int32_t registoryArray[], int position1, int position2,  int position3)
{
    cout << operation << endl;
    long long int testNumber;
    signed int signedNum1;
    if((operation == "ADD") || (operation == "add") || (operation == "ADDS") || (operation == "adds"))
    {
        cout << "we are in add" << endl;
        testNumber = registoryArray[position1] + registoryArray[position2];
        registoryArray[position1] = registoryArray[position2] + registoryArray[position3];
        cout << registoryArray[position1] << endl;
        flagChecker(registoryArray, position1, position2, position3, testNumber);
    }
    else if((operation == "AND") || (operation == "and") || (operation == "ANDS") || (operation == "ands"))
    {
        testNumber = registoryArray[position1] & registoryArray[position2];
        registoryArray[position1] = position2 & position3;
        flagChecker(registoryArray, position1, position2, position3, testNumber);
    }
    else if((operation == "ASR") || (operation == "asr") || (operation == "ASRS") || (operation == "asrs"))
    {
        signedNum1 = registoryArray[position1];
        registoryArray[position3] = signedNum1 >> registoryArray[position2];
        testNumber = signedNum1 >> registoryArray[position2];
        flagChecker(registoryArray, position1, position2, position3, testNumber);
    }
    else if((operation == "LSR") || (operation == "lsr") || (operation == "LSRS") || (operation == "lsrs"))
    {
        registoryArray[position1] = registoryArray[position2] >> registoryArray[position3];
    }
    else if((operation == "LSL") || (operation == "lsl") || (operation == "LSLS") || (operation == "lsls"))
    {
        registoryArray[position1] = registoryArray[position2] << registoryArray[position3];
        testNumber = registoryArray[position2] << registoryArray[position3];
        flagChecker(registoryArray, position1, position2, position3, testNumber);
    }
    else if((operation == "ORR") || (operation == "orr") || (operation == "ORRS") || (operation == "orrs"))
    {
        registoryArray[position1] = registoryArray[position2] | registoryArray[position3];
        testNumber = 0;
        flagChecker(registoryArray, position1, position2, position3, testNumber);
    }
    else if((operation == "SUB") || (operation == "sub") || (operation == "SUBS") || (operation == "subs"))
    {
        //cout << "because subs is broken we will do some investigation" << endl;
        //cout << "position one: " << position1 << endl;
        //cout << "position two: " << position2 << endl;
        //cout << "position three: " << position3 << endl;
        //cout << hex << registoryArray[position3] << " - " << registoryArray[position2] << endl;
        registoryArray[position1] = registoryArray[position2] - registoryArray[position3];
        //cout << "this is our total: " << registoryArray[position1] << endl;
        testNumber = 0;
        flagChecker(registoryArray, position1, position2, position3, testNumber);
    }
    else if((operation == "XOR") || (operation == "xor") || (operation == "XORS") || (operation == "xors"))
    {
        registoryArray[position1] = registoryArray[position2] ^ registoryArray[position3];
        testNumber = 0;
        flagChecker(registoryArray, position1, position2, position3, testNumber);
    }


}
void displayArray(int32_t array[])
{
    int spaceCounter = 0;
    for(int i = 0; i <= 7; i++)
    {
        cout << "R" << (i) << ": 0x" << hex << array[i] <<  " ";
        spaceCounter++;
        if(spaceCounter >= 4)
        {
            cout << endl;
            spaceCounter = 0;
        }
    }
}
void flagChecker( int32_t registoryArray[], int position1, int position2,  int position3, long long int testNumber)
{
    bool N, Z, C, V;
    if (registoryArray[position1] == 0)
        N = 1;
    else
        N = 0;
    int num;
    num = 1 + (registoryArray[position1] >> 31) - (-registoryArray[position1] >> 31);
    if(num == 1 || registoryArray[position1] == 2)
        Z = 0;
    else
        Z = 1;
    if (registoryArray[position1] < testNumber)
    {
        C = 1;
        V = 1;
    }
    else
        C = 0;
        V = 0;
    cout << " N = " << N << " Z = " << Z << " C = " << C << " V = " << V << endl;
}