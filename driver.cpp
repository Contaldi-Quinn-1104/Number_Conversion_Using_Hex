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

void doMath(string operation, int32_t array[], int store, int num1, int num2);
void doMathNotVersion(string operation, int32_t num1);
void readTxtFile(string fileName);
bool flagCheckerZ(int32_t num1);
bool flagCheckerN(int32_t num1);
void opperation(string operation, int32_t array[]);

int main(int argc, char* argv[])
{
    if (argc == 1)
    {
        cout << "please use the following format: " << argv[0] << " input.txt" << endl;
        return 0;
    }
    if (argc == 2)
    {
        CatGirl catgirl;
        catgirl.displayMenu();
        string fname = argv[1];
        int32_t num1, num2;
        string operationName;
        int operation;
        int  storeRegistoryInt = 0;
        int  operand1 = 0;
        int  operand2 = 0;
        string operandRegistory1;
        string operandRegistory2;
        string storeRegistory;
    }
}
/*
        int32_t registoryArray[8] = {0};
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
                if((operationName == "NOT") || (operationName == "NOTS"))
                {
                    //stores the hex values as strings                                                                                                                                                                                 
                    fin >> num1;
                    //call the operation function to execute the arthmetic operation
                    doMathNotVersion(operationName, num1);
                }
                else if ((operationName == "MOV") || (operationName == "mov"))
                {
                    fin >> operandRegistory1;
                    operand1 = operandRegistory1[1];
                    fin >> registoryArray[operand1];
                }
                else if 
                {
                    fin >> storeRegistory;
                    storeRegistoryInt = storeRegistory[1];
                    fin >> operandRegistory1;
                    operand1 = operandRegistory1[1];
                    fin >> operandRegistory2;
                    operand2 = operandRegistory2[1];
                    doMath(operation, registoryArray, storeRegistoryInt, operand1, operand2);
                }                 
            }
        }
        else
        {
        cout << "Sorry cannot open your file!" << endl;
        }
    fin.close();
    }
}

void doMath(string operation, int32_t array[], int store, int num1, int num2);
{
    signed int signedNum1;
    bool nFlag, zFlag;
    if(operation == "ADD")
    {
        array[store] = array[num1] + array[num2];
        nFlag = flagCheckerN(array[store]);
        zFlag = flagCheckerZ(array[store]);
        cout << operation << " 0x" << hex << array[num1] << " 0x" <<  array[num2] << ": 0x" << array[num3] << endl;
        cout << "N: " << nFlag <<  " Z: " << zFlag << endl;
    }
    else if(operation == "ADDS")
    {
        array[store] = array[num1] + array[num2];
        nFlag = flagCheckerN(array[store]);
        zFlag = flagCheckerZ(array[store]);
        cout << operation << " 0x" << hex << array[num1] << " 0x" <<  array[num2] << ": 0x" << array[num3] << endl;
        cout << "N: " << nFlag <<  " Z: " << zFlag << endl;
    }
    else if(operation == "AND")
    {
        array[store] = array[num1] & array[num2];
        nFlag = flagCheckerN(array[store]);
        zFlag = flagCheckerZ(array[store]);
        cout << operation << " 0x" << hex << array[num1] << " 0x" <<  array[num2] << ": 0x" << array[num3] << endl;
        cout << "N: " << nFlag <<  " Z: " << zFlag << endl;
    }
    else if(operation == "ANDS")
    {
        array[store] = array[num1] & array[num2];
        nFlag = flagCheckerN(array[store]);
        zFlag = flagCheckerZ(array[store]);
        cout << operation << " 0x" << hex << array[num1] << " 0x" <<  array[num2] << ": 0x" << array[num3] << endl;
        cout << "N: " << nFlag <<  " Z: " << zFlag << endl;
    }
    else if(operation == "ASR")
    {
        signedNum1 = array[num1];
        array[store] = signedNum1 >> array[num2];
        nFlag = flagCheckerN(array[store]);
        zFlag = flagCheckerZ(array[store]);
        cout << operation << " 0x" << hex << array[num1] << " 0x" <<  array[num2] << ": 0x" << array[num3] << endl;
        cout << "N: " << nFlag <<  " Z: " << zFlag << endl;
    }
    else if(operation == "ASRS")
    {
        signedNum1 = array[num1];
        array[store] = signedNum1 >> array[num2];
        nFlag = flagCheckerN(array[store]);
        zFlag = flagCheckerZ(array[store]);
        cout << operation << " 0x" << hex << array[num1] << " 0x" <<  array[num2] << ": 0x" << array[num3] << endl;
        cout << "N: " << nFlag <<  " Z: " << zFlag << endl;
    }
    else if(operation == "LSR")
    {
        array[store] = array[num1] << array[num2];
        nFlag = flagCheckerN(array[store]);
        zFlag = flagCheckerZ(array[store]);
        cout << operation << " 0x" << hex << array[num1] << " 0x" <<  array[num2] << ": 0x" << array[num3] << endl;
        cout << "N: " << nFlag <<  " Z: " << zFlag << endl;
    }
    else if(operation == "LSRS")
    {
        array[store] = array[num1] << array[num2];
        nFlag = flagCheckerN(array[store]);
        zFlag = flagCheckerZ(array[store]);
        cout << operation << " 0x" << hex << array[num1] << " 0x" <<  array[num2] << ": 0x" << array[num3] << endl;
        cout << "N: " << nFlag <<  " Z: " << zFlag << endl;
    }
    else if(operation == "LSL")
    {
        array[store] = array[num1] << array[num2];
        nFlag = flagCheckerN(array[store]);
        zFlag = flagCheckerZ(array[store]);
        cout << operation << " 0x" << hex << array[num1] << " 0x" <<  array[num2] << ": 0x" << array[num3] << endl;
        cout << "N: " << nFlag <<  " Z: " << zFlag << endl;
    }
    else if(operation == "LSLS")
    {
        array[store] = array[num1] << array[num2];
        nFlag = flagCheckerN(array[store]);
        zFlag = flagCheckerZ(array[store]);
        cout << operation << " 0x" << hex << array[num1] << " 0x" <<  array[num2] << ": 0x" << array[num3] << endl;
        cout << "N: " << nFlag <<  " Z: " << zFlag << endl;
    }
    else if(operation == "ORR")
    {
        array[store] = array[num1] | array[num2];
        nFlag = flagCheckerN(array[store]);
        zFlag = flagCheckerZ(array[store]);
        cout << operation << " 0x" << hex << array[num1] << " 0x" <<  array[num2] << ": 0x" << array[num3] << endl;
        cout << "N: " << nFlag <<  " Z: " << zFlag << endl;
    }
    else if(operation == "ORRS")
    {
        array[store] = array[num1] | array[num2];
        nFlag = flagCheckerN(array[store]);
        zFlag = flagCheckerZ(array[store]);
        cout << operation << " 0x" << hex << array[num1] << " 0x" <<  array[num2] << ": 0x" << array[num3] << endl;
        cout << "N: " << nFlag <<  " Z: " << zFlag << endl;
    }
    else if(operation == "SUB")
    {
        array[store] = array[num1] - array[num2];
        nFlag = flagCheckerN(array[store]);
        zFlag = flagCheckerZ(array[store]);
        cout << operation << " 0x" << hex << array[num1] << " 0x" <<  array[num2] << ": 0x" << array[num3] << endl;
        cout << "N: " << nFlag <<  " Z: " << zFlag << endl;
    }
    else if(operation == "SUBS")
    {
        array[store] = array[num1] - array[num2];
        nFlag = flagCheckerN(array[store]);
        zFlag = flagCheckerZ(array[store]);
        cout << operation << " 0x" << hex << array[num1] << " 0x" <<  array[num2] << ": 0x" << array[num3] << endl;
        cout << "N: " << nFlag <<  " Z: " << zFlag << endl;
    }
    else if(operation == "XOR")
    {
        array[store] = array[num1] ^ array[num2];
        nFlag = flagCheckerN(array[store]);
        zFlag = flagCheckerZ(array[store]);
        cout << operation << " 0x" << hex << array[num1] << " 0x" <<  array[num2] << ": 0x" << array[num3] << endl;
        cout << "N: " << nFlag <<  " Z: " << zFlag << endl;
    }
    else if(operation == "XORS")
    {
        array[store] = array[num1] ^ array[num2];
        nFlag = flagCheckerN(array[store]);
        zFlag = flagCheckerZ(array[store]);
        cout << operation << " 0x" << hex << array[num1] << " 0x" <<  array[num2] << ": 0x" << array[num3] << endl;
        cout << "N: " << nFlag <<  " Z: " << zFlag << endl;
    }
    else
    {
        cout << "it broken" << endl;
    }
}

void doMathNotVersion(string operation, int32_t num1)
{
    if(operation == "NOT")
    {
        cout << operation << " Ox" << hex << num1 << ": " << " Ox" << ~num1 << endl;
    }
    else if(operation == "NOTS")
    {
       
        cout << operation << " Ox" << hex << num1 << ": " << " Ox" << ~num1 << endl;
    }
    else
    {
        cout << "please top error im so sorry" << endl;
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
        //weiner
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
*/