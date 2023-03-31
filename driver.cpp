//Program: Magical CatGirl Machine Language Simulation
//By Quinn Joseph Contaldi
//04/01/2023

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstdint>
#include <type_traits>

using namespace std;

void doMath(string operation, unsigned int num1, unsigned int num2);
void doMathNotVersion(string operation, unsigned int num1);
void readTxtFile(string fileName);
bool flagCheckerZ(unsigned int num1);
bool flagCheckerN(unsigned int num1);
int main(int argc, char* argv[])
{
    if (argc == 1)
    {
        cout << "please use the following format: " << argv[0] << "input.txt" << endl;
        return 0;
    }
    if (argc == 2)
    {
        string fname = argv[1];
        unsigned int num1, num2;
        string hex1, hex2, operationName;
        int operation;
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
                if( (operationName == "NOT") || (operationName == "NOTS"))
                {
//stores the hex values as strings                                                                                                                                                                                 
                fin >> hex1;
//converts the hex values into decimal  
                num1 = stoll(hex1,0,16);
//call the operation function to execute the arthmetic operation
                    doMathNotVersion(operationName, num1);
                }
                else
                {
                    fin >> hex1;
                    num1 = stoll(hex1,0,16);
                    fin >> hex2;
                    num2 = stoll(hex2,0,16);
//call the operation function to execute the arthmetic operation
                    doMath(operationName , num1 , num2); 
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

void doMath(string operation, unsigned int num1, unsigned int num2)
{
    unsigned int num3;
    signed int signedNum1;
    bool nFlag, zFlag;
    if(operation == "ADD")
    {
        num3 = num1 + num2;
        nFlag = flagCheckerN(num3);
        zFlag = flagCheckerZ(num3);
        cout << operation << " Ox" << hex << num1 << " Ox" <<  num2 << ": Ox" << num3 << endl;
        //num3 = uintmax_t(num3);
        cout << "N: " << nFlag <<  " Z: " << zFlag << endl;
    }
    else if(operation == "ADDS")
    {
        num3 = num1 + num2;
        nFlag = flagCheckerN(num3);
        zFlag = flagCheckerZ(num3);
        cout << operation << " Ox" << hex << num1 << " Ox" <<  num2 << ": Ox" << num3 << endl;
        cout << "N: " << nFlag <<  " Z: " << zFlag << endl;
    }
    else if(operation == "AND")
    {
        num3 = num1 & num2;
        nFlag = flagCheckerN(num3);
        zFlag = flagCheckerZ(num3);
        cout << operation << " Ox" << hex << num1 << " Ox" <<  num2 << ": Ox" << num3 << endl;
        cout << "N: " << nFlag <<  " Z: " << zFlag << endl;
    }
    else if(operation == "ANDS")
    {
        num3 = num1 & num2;
        nFlag = flagCheckerN(num3);
        zFlag = flagCheckerZ(num3);
        cout << operation << " Ox" << hex << num1 << " Ox" <<  num2 << ": Ox" << num3 << endl;
        cout << "N: " << nFlag <<  " Z: " << zFlag << endl;
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
    else
    {
        cout << "it broken" << endl;
    }
}

void doMathNotVersion(string operation, unsigned int num1)
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

bool flagCheckerZ(unsigned int num1)
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

bool flagCheckerN(unsigned int num1)
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