//Program: Magical CatGirl Machine Language Simulation
//By Quinn Joseph Contaldi
//04/01/2023

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstdint>
//#include <type_traits>
#include "CatGirl.h"
#include  <bitset>
using namespace std;

void doMathButWith3(string operation, uint32_t registoryArray[], int position1, int position2, string hex1, bool &N, bool &Z, bool &C, bool &V);
void doMath(string operation, uint32_t registoryArray[], int position1, int position2,  int position3, bool &N, bool &Z, bool &C, bool &V);
void readTxtFile(string fileName);
void flagChecker( uint32_t registoryArray[], int position1, int position2,  int position3, long long int testNumber);
void opperation(string operation, uint32_t array[]);
void displayArray(uint32_t*);

int main()
{
    
    CatGirl catGirl;
    string fname = "input.txt";
    uint32_t num1, num2;
    uint32_t registoryArray[8] = {0};
    string storeValue, temp, hex1, hex2, operationName;
    int position1, position2, position3, i = 0, x = 0;
    bool N = 0, Z = 0, C = 0, V = 0;
    //declares the input stream of the file                                                                                                                                                                            
    ifstream fin (fname.c_str());
    //if the file is open the program proceds with the operation
    //catGirl.displayMenu();                                                                                                                                                 
    if(fin.is_open())
    {
        while(fin.good())
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
                while (hex1[i])
                {
                    i++;
                }
                temp = hex1;
                for (x; x < i; x++)
                {
                    hex1[x] = temp[x+1];
                }
                hex1[x+1] = ' ';
                x = 0;
                cout << storeValue;
                registoryArray[position1] = stoll(hex1,0,16);
                cout << operationName << " " << storeValue << " " << "#" << hex1 << endl;
                displayArray(registoryArray);
                cout << "N = " << N << " Z = " << Z << " C = " << C << " V = " << V << endl;
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
                doMath(operationName, registoryArray, position1, position2, position3, N, Z, C, V);
                displayArray(registoryArray);
                cout << "N = " << N << " Z = " << Z << " C = " << C << " V = " << V << endl;
            }                
        }
    }
    else
    {
        cout << "Sorry cannot open your file!" << endl;
    }
    fin.close();

}

void doMath(string operation, uint32_t registoryArray[], int position1, int position2,  int position3, bool &N, bool &Z, bool &C, bool &V)
{
    long int testNumber;
    signed int signedNum1;
    if((operation == "ADD") || (operation == "add") || (operation == "ADDS") || (operation == "adds"))
    {
        cout << operation << endl;
        testNumber = registoryArray[position2] + registoryArray[position3];
        registoryArray[position1] = registoryArray[position2] + registoryArray[position3];
        if (registoryArray[position1] > 0x7fffffff)
            N = 1;
        else
            N = 0;
        if (registoryArray[position1] == 0)
            Z = 1;
        else
            Z = 0;
        if(testNumber > registoryArray[position1])
            C = 1;
        else
            C = 0;
        if (registoryArray[position1] < registoryArray[position2] || registoryArray[position1] << registoryArray[position3])
            V = 1;
        else
            V = 0;
    }
    else if((operation == "AND") || (operation == "and") || (operation == "ANDS") || (operation == "ands"))
    {
        cout << operation << endl;
        registoryArray[position1] = registoryArray[position2] & registoryArray[position3];
        if (registoryArray[position1] > 0x7fffffff)
            N = 1;
        else
            N = 0;
        if (registoryArray[position1] == 0)
            Z = 1;
        else
            Z = 0;
    }
    else if((operation == "ASR") || (operation == "asr") || (operation == "ASRS") || (operation == "asrs"))
    {
        cout << operation << endl;
        signedNum1 = registoryArray[position1];
        registoryArray[position3] = signedNum1 >> registoryArray[position2];
        if (registoryArray[position1] > 0x7fffffff)
            N = 1;
        else
            N = 0;
        if (registoryArray[position1] == 0)
            Z = 1;
        else
            Z = 0;
        if(testNumber > registoryArray[position1])
            C = 1;
        else
            C = 0;
    }
    else if((operation == "LSR") || (operation == "lsr") || (operation == "LSRS") || (operation == "lsrs"))
    {
        cout << operation << endl;
        registoryArray[position1] = registoryArray[position2] >> position3;
        if (registoryArray[position1] > 0x7fffffff)
            N = 1;
        else
            N = 0;
        if (registoryArray[position1] == 0)
            Z = 1;
        else
            Z = 0;
        if(testNumber > registoryArray[position1])
            C = 1;
        else
            C = 0;
    }
    else if((operation == "LSL") || (operation == "lsl") || (operation == "LSLS") || (operation == "lsls"))
    {
        cout << operation << endl;
        registoryArray[position1] = registoryArray[position2] << position3;
        if (registoryArray[position1] > 0x7fffffff)
            N = 1;
        else
            N = 0;
        if (registoryArray[position1] == 0)
            Z = 1;
        else
            Z = 0;
        if(testNumber < registoryArray[position1])
            C = 1;
        else
            C = 0;
    }
    else if((operation == "ORR") || (operation == "orr") || (operation == "ORRS") || (operation == "orrs"))
    {
        cout << operation << endl;
        bitset<32> bitset;
        //cout << operation << endl;
        registoryArray[position1] = registoryArray[position2] | registoryArray[position3];
        int ms_bit = bitset[bitset.size()-1];
        if (ms_bit = 1)
            N = 0;
        else
            N = 1;
        if (registoryArray[position1] == 0)
            Z = 1;
        else
            Z = 0;
        if(testNumber > registoryArray[position1])
            C = 1;
        else
            C = 0;
    }
    else if((operation == "SUB") || (operation == "sub") || (operation == "SUBS") || (operation == "subs"))
    {
        cout << operation << endl;
        registoryArray[position1] = registoryArray[position2] - registoryArray[position3];
        if (registoryArray[position1] > 0x7fffffff)
            N = 1;
        else
            N = 0;
        if (registoryArray[position1] == 0)
            Z = 1;
        else
            Z = 0;
        if(registoryArray[position1] < registoryArray[position2] || registoryArray[position1] < registoryArray[position3])
            C = 1;
        else
            C = 0;
        if (registoryArray[position1] < registoryArray[position2] || registoryArray[position1] < registoryArray[position3])
            V = 1;
        else
            V = 0;
    }
    else if((operation == "XOR") || (operation == "xor") || (operation == "XORS") || (operation == "xors"))
    {
        cout << operation << endl;
        bitset<32> bitset = registoryArray[position2] ^ registoryArray[position3];
        int ms_bit = bitset[bitset.size()-1];
        registoryArray[position1] = registoryArray[position2] ^ registoryArray[position3];
        if (ms_bit = 1)
            N = 0;
        else
            N = 1;
        if (registoryArray[position1] == 0)
            Z = 1;
        else
            Z = 0;
        if(testNumber > registoryArray[position1])
            C = 1;
        else
            C = 0;
        if (registoryArray[position1] < registoryArray[position2] || registoryArray[position1] << registoryArray[position3])
            V = 1;
        else
            V = 0;
    }
}

void doMathButWith3(string operation, uint32_t registoryArray[], int position1, int position2, string hex1, bool &N, bool &Z, bool &C, bool &V)
{
    int i = 0, j = 0;
    string temp;
    if((operation == "MOV") || (operation== "mov"))
    {
        //stores the resgistory value as string then treats it as a character array and subtract 48 which is the ascii repersentation to get the proper intager position                                                                                                                                                                                 
        //the string will be R1 for example so 1 is located at array element 1 thus we set our position 1 which repersents our store registory as a int value.
        //This will take the number that will be loaded in our store registory
        while (hex1[j])
        {
            j++;
        }
        temp = hex1;
        for (j; j < i; j++)
        {
            hex1[j] = temp[j+1];
        }
        hex1[j+1] = ' ';
        j = 0;
        registoryArray[position1] = stoll(hex1,0,16);
        cout << operation<< " " << "R" << position1 << " " << "#" << hex1 << endl;
        displayArray(registoryArray);
        cout << "N = " << N << " Z = " << Z << " C = " << C << " V = " << V << endl;
    }
}

void displayArray(uint32_t array[])
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