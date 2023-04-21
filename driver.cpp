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
//void readTxtFile(string fileName);
bool flagCheckerZ(int32_t num1);
bool flagCheckerN(int32_t num1);
void opperation(string operation, int32_t array[]);
void displayArray(int32_t*);

int main()
{
    string fname = "input.txt";
    int32_t num1, num2;
    int32_t registoryArray[8] = {0};
    string storeValue, hex1, hex2, operationName;
    int operation;
    int positionArray[3] = {0};
    int position1;
    int position2;
    int position3;
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
            position1 = storeValue[1];
            position1 -= 48;
            //converts the hex values into decimal
            fin >> hex1;  
            registoryArray[position1] = stoll(hex1,0,16);
            displayArray(registoryArray);
            cout << endl;
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
            position2 = hex2[1];
            position2 -= 48;
            doMath(operationName,registoryArray,position1, position2, position3);
            displayArray(registoryArray);
            cout << endl;
            }                 
        }
    }
    else
    {
        cout << "Sorry cannot open your file!" << endl;
    }
    fin.close();

}

void doMath(string operation, int32_t registoryArray[], int position1, int position2,  int position3);
{
    signed int signedNum1;
    bool nFlag, zFlag, cflag, vflag;
    if(operation == "ADD")
    {
        registoryArray[postion] = registoryArray[position2] + registoryArray[position3];
    }
    else if(operation == "ADDS")
    {
        registoryArray[postion] = registoryArray[position2] + registoryArray[position3];
        nFlag = flagCheckerN(registoryArray[position3]);
        zFlag = flagCheckerZ(registoryArray[position3]);
    }
    else if(operation == "AND")
    {
        registoryArray[postion] = position2 & position3;
    }
    else if(operation == "ANDS")
    {
        registoryArray[postion] = position2 & position3;
        nFlag = flagCheckerN(registoryArray[position3]);
        zFlag = flagCheckerZ(registoryArray[position3]);
    }
    else if(operation == "ASR")
    {
        signedNum1 = num1;
        num3 = signedNum1 >> num2;
        nFlag = flagCheckerN(num3);
        zFlag = flagCheckerZ(num3);
        cout << operation << " Ox" << hex << num1 << " Ox" <<  num2 << ": Ox" << num3 << endl;
        cout << "N: " << nFlag <<  " Z: " << zFlag << endl;
    }
    else if(operation == "ASRS")
    {
        signedNum1 = num1;
        num3 = signedNum1 >> num2;
        nFlag = flagCheckerN(num3);
        zFlag = flagCheckerZ(num3);
        cout << operation << " Ox" << hex << num1 << " Ox" <<  num2 << ": Ox" << num3 << endl;
        cout << "N: " << nFlag <<  " Z: " << zFlag << endl;
    }
    else if(operation == "LSR")
    {
        num3 = num1 >> num2;
        nFlag = flagCheckerN(num3);
        zFlag = flagCheckerZ(num3);
        cout << operation << " Ox" << hex << num1 << " Ox" <<  num2 << ": Ox" << num3 << endl;
        cout << "N: " << nFlag <<  " Z: " << zFlag << endl;
    }
    else if(operation == "LSRS")
    {
        num3 = num1 >> num2;
        nFlag = flagCheckerN(num3);
        zFlag = flagCheckerZ(num3);
        cout << operation << " Ox" << hex << num1 << " Ox" <<  num2 << ": Ox" << num3 << endl;
        cout << "N: " << nFlag <<  " Z: " << zFlag << endl;
    }
    else if(operation == "LSL")
    {
        num3 = num1 << num2;
        nFlag = flagCheckerN(num3);
        zFlag = flagCheckerZ(num3);
        cout << operation << " Ox" << hex << num1 << " Ox" <<  num2 << ": Ox" << num3 << endl;
        cout << "N: " << nFlag <<  " Z: " << zFlag << endl;
    }
    else if(operation == "LSLS")
    {
        num3 = num1 << num2;
        nFlag = flagCheckerN(num3);
        zFlag = flagCheckerZ(num3);
        cout << operation << " Ox" << hex << num1 << " Ox" <<  num2 << ": Ox" << num3 << endl;
        cout << "N: " << nFlag <<  " Z: " << zFlag << endl;
    }
    else if(operation == "ORR")
    {
        num3 = num1 | num2;
        nFlag = flagCheckerN(num3);
        zFlag = flagCheckerZ(num3);
        cout << operation << " Ox" << hex << num1 << " Ox" <<  num2 << ": Ox" << num3 << endl;
        cout << "N: " << nFlag <<  " Z: " << zFlag << endl;
    }
    else if(operation == "ORRS")
    {
        num3 = num1 | num2;
        nFlag = flagCheckerN(num3);
        zFlag = flagCheckerZ(num3);
        cout << operation << " Ox" << hex << num1 << " Ox" <<  num2 << ": Ox" << num3 << endl;
        cout << "N: " << nFlag <<  " Z: " << zFlag << endl;
    }
    else if(operation == "SUB")
    {
        num3 = num1 - num3;
        nFlag = flagCheckerN(num3);
        zFlag = flagCheckerZ(num3);
        cout << operation << " Ox" << hex << num1 << " Ox" <<  num2 << ": Ox" << num3 << endl;
        cout << "N: " << nFlag <<  " Z: " << zFlag << endl;
    }
    else if(operation == "SUBS")
    {
        num3 = num1 - num3;
        nFlag = flagCheckerN(num3);
        zFlag = flagCheckerZ(num3);
        cout << operation << " Ox" << hex << num1 << " Ox" <<  num2 << ": Ox" << num3 << endl;
        cout << "N: " << nFlag <<  " Z: " << zFlag << endl;
    }
    else if(operation == "XOR")
    {
        num3 = num1 ^ num3;
        nFlag = flagCheckerN(num3);
        zFlag = flagCheckerZ(num3);
        cout << operation << " Ox" << hex << num1 << " Ox" <<  num2 << ": Ox" << num3 << endl;
        cout << "N: " << nFlag <<  " Z: " << zFlag << endl;
    }
    else if(operation == "XORS")
    {
        num3 = num1 ^ num3;
        nFlag = flagCheckerN(num3);
        zFlag = flagCheckerZ(num3);
        cout << operation << " Ox" << hex << num1 << " Ox" <<  num2 << ": Ox" << num3 << endl;
        cout << "N: " << nFlag <<  " Z: " << zFlag << endl;
    }

}
void displayArray(int32_t array[])
{
    for(int i = 0; i <= 7; i++)
    {
        cout << "R" << (i+1) << ": " << array[i] <<  " ";
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