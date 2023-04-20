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

void doMath(string operation, int32_t registoryArray[], int positionArray[]);
//void readTxtFile(string fileName);
bool flagCheckerZ(int32_t num1);
bool flagCheckerN(int32_t num1);
void opperation(string operation, int32_t array[]);

int main()
{
    string fname = "input.txt";
    int32_t num1, num2;
    int32_t registoryArray[8] = {0};
    string storeValue, hex1, hex2, operationName;
    int operation;
    int positionArray[3] = {0};
    //declares the input stream of the file                                                                                                                                                                            
    ifstream fin (fname.c_str());
    //if the file is open the program proceds with the operation                                                                                                                                                       
    if(fin.is_open())
    {
        while(!fin.eof())
        {
            //stores the opperator
            fin >> operationName;
            //if operationName is Not then we only need one operand and skip the fin for hex number 2. Any other operation requires 2 operands.
            if( (operationName == "MOV") || (operationName == "mov"))
            {
            //stores the resgistory value as string then treats it as a character array and subtract 48 which is the ascii repersentation to get the proper intager position                                                                                                                                                                                 
            fin >> storeValue;
            positionArray[0] = storeValue[1];
            positionArray[0] -= 48;
            //converts the hex values into decimal
            fin >> hex1;  
            registoryArray[positionArray[0]] = stoll(hex1,0,16);
            //call the operation function to execute the arthmetic operation
            }
            else
            {
            fin >> storeValue;
            positionArray[0] = storeValue[1];
            positionArray[0] -= 48;
            fin >> hex1;
            positionArray[1] =  hex1[1];
            positionArray[1] -= 48;
            //converts the hex values into decimal
            fin >> hex2;
            positionArray[2] = hex2[1];
            positionArray[2] -= 48;
            doMath(operationName,registoryArray,positionArray);
            }                 
        }
    }
    else
    {
        cout << "Sorry cannot open your file!" << endl;
    }
    fin.close();

}

void doMath(string operation, int32_t registoryArray[], int positionArray[])
{
    signed int signedNum1;
    bool nFlag, zFlag;
    if(operation == "ADDS")
    {
        registoryArray[positionArray[0]] = registoryArray[positionArray[1]] + registoryArray[positionArray[1]];
        nFlag = flagCheckerN(registoryArray[positionArray[0]]);
        zFlag = flagCheckerZ(registoryArray[positionArray[0]]);
        cout << operation << " 0x" << hex << registoryArray[positionArray[1]] << " 0x" <<  registoryArray[positionArray[2]] << ": 0x" << registoryArray[positionArray[0]] << endl;
        cout << "N: " << nFlag <<  " Z: " << zFlag << endl;
    }
    else if(operation == "ands")
    {
        registoryArray[positionArray[0]] = registoryArray[positionArray[1]] & registoryArray[positionArray[1]];
        nFlag = flagCheckerN(registoryArray[positionArray[0]]);
        zFlag = flagCheckerZ(registoryArray[positionArray[0]]);
        cout << operation << " 0x" << hex << registoryArray[positionArray[1]] << " 0x" <<  registoryArray[positionArray[2]] << ": 0x" << registoryArray[positionArray[0]] << endl;
        cout << "N: " << nFlag <<  " Z: " << zFlag << endl;
    }
    else if(operation == "lsrs")
    {
        registoryArray[positionArray[0]] = registoryArray[positionArray[1]] << registoryArray[positionArray[2]];
        nFlag = flagCheckerN(registoryArray[positionArray[0]]);
        zFlag = flagCheckerZ(registoryArray[positionArray[0]]);
        cout << operation << " 0x" << hex << registoryArray[positionArray[1]] << " 0x" <<  registoryArray[positionArray[2]] << ": 0x" << registoryArray[positionArray[0]] << endl;
        cout << "N: " << nFlag <<  " Z: " << zFlag << endl;
    }
    else if(operation == "LSLS")
    {
        registoryArray[positionArray[0]] = registoryArray[positionArray[1]] << registoryArray[positionArray[2]];
        nFlag = flagCheckerN(registoryArray[positionArray[0]]);
        zFlag = flagCheckerZ(registoryArray[positionArray[0]]);
        cout << operation << " 0x" << hex << registoryArray[positionArray[1]] << " 0x" <<  registoryArray[positionArray[2]] << ": 0x" << registoryArray[positionArray[0]] << endl;
        cout << "N: " << nFlag <<  " Z: " << zFlag << endl;;
    }
    else if(operation == "orr")
    {
        registoryArray[positionArray[0]] = registoryArray[positionArray[1]] | registoryArray[positionArray[1]];
        nFlag = flagCheckerN(registoryArray[positionArray[0]]);
        zFlag = flagCheckerZ(registoryArray[positionArray[0]]);
        cout << operation << " 0x" << hex << registoryArray[positionArray[1]] << " 0x" <<  registoryArray[positionArray[2]] << ": 0x" << registoryArray[positionArray[0]] << endl;
        cout << "N: " << nFlag <<  " Z: " << zFlag << endl;
    }
    else if(operation == "SUBS")
    {
        registoryArray[positionArray[0]] = registoryArray[positionArray[1]] - registoryArray[positionArray[1]];
        nFlag = flagCheckerN(registoryArray[positionArray[0]]);
        zFlag = flagCheckerZ(registoryArray[positionArray[0]]);
        cout << operation << " 0x" << hex << registoryArray[positionArray[1]] << " 0x" <<  registoryArray[positionArray[2]] << ": 0x" << registoryArray[positionArray[0]] << endl;
        cout << "N: " << nFlag <<  " Z: " << zFlag << endl;
    }
    else if(operation == "xor")
    {
        registoryArray[positionArray[0]] = registoryArray[positionArray[1]] ^ registoryArray[positionArray[1]];
        nFlag = flagCheckerN(registoryArray[positionArray[0]]);
        zFlag = flagCheckerZ(registoryArray[positionArray[0]]);
        cout << operation << " 0x" << hex << registoryArray[positionArray[1]] << " 0x" <<  registoryArray[positionArray[2]] << ": 0x" << registoryArray[positionArray[0]] << endl;
        cout << "N: " << nFlag <<  " Z: " << zFlag << endl;
    }
    else
    {
        cout << "it broken" << endl;
    }
}

bool flagCheckerZ(int32_t num1)
{
    if (num1 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }

}

bool flagCheckerN(int32_t num1)
{
    int num;
    num = 1 + (num1 >> 31) - (-num1 >> 31);
    if(num == 1 || num1 == 2)
    {
        return false;
    }
    else
    {
        return true;
    }
}