#include "CatGirl.h"

void CatGirl::displayMenu()
{
    int userResponse;
    catgirlPic1();
    cout << "Hello anon! I will be your guide today for the CatGirl Machine Langauge Simulation software." << endl;
    cout << "0: skip the cool dialogue" << endl;
    cout << "1: for cool dialogue with the calculator app";
    cin >> userResponse;
    if (userResponse == 1)
        angryFox();
}

void CatGirl::angryFox()
{
    int userResponse;
    cout << "ughhhhh does it really matter that I am not a catgirl....." << endl;
    cout << "Player Response: " << endl;
    cout << "1: Yeah.... its a catgirl calculator and you are a fox girl" << endl;
    cout << "2: You are right lets just move onto the calculations" << endl;
    cout << "3: GO GET A CATGIRL RIGHT NOW" << endl;
    cin >> userResponse;
    if ( userResponse == 1)
    {
        cout << endl;
        cout << "I think this is foxgirl discrimination but whateverrrrrr. yeah I may have lied on my resume but i still have ears and a tail" << endl;
        cout << "1. I dont think thats a real thing philosophically I dont think demi humans count as real humans and deserve the same philosophical rights" << endl;
        cout << "2. ummmm okay can I just do my calculations please this is really boring" << endl;
        cout << "3. Yes" << endl;
        cin >> userResponse;
        if ( userResponse == 1)
        {
            cout << "wow... wow... wow TLDR and problamatic" << endl;
        }
        else if ( userResponse == 2)
        {
            cout << "thats what I thought thankyou" << endl;
        }
        else
        {
            cout  << "yesssssssssss? YES TO WHAT WHY ARE YOU SO DAMN MEAN TO ME FINE WHATEVER IM LEAVING" << endl;
        }
    }
    else if (userResponse == 2)
    {
        cout << "thankyou for understanding! now which project output would you like to see mister hahaha" << endl;
    }
    else
    {
        cout << "FINE OMG I WILL GO GRAB A CATGIRL PLEASE WAIT UGHHHHHH" << endl;
    }

}

void CatGirl::catgirlPic1()
{
cout << R"(
⠀⠀⢀⠀⠀⠀⡄⠀⠀⡄⠀⠈⡀⠈⠀⡄⠈⠀⡀⠀⢀⠀⠁⢠⣤⡿⢸⡅⠀⠀⡄⠈⠀⡄⠈⠀⡄⠀⠀⠀⠀⢠⠀⠁⢠⠀⠁⢠⠀⠀⢠⡄⠈⢀⡄⠈⠀⡀⠀⢀⠀⠁⢠⠀⠁
⠀⠄⠀⠀⠠⠀⠀⠄⠀⠀⠰⠀⠀⠰⠀⠀⠠⠀⠀⠤⠀⠀⠄⢠⣿⠇⠸⢧⠲⠀⠀⠠⠀⠀⠠⠀⠀⠠⠀⠀⠄⠀⠀⠄⠀⠀⠄⠀⠀⠦⠀⠀⠠⠀⠀⠠⠀⠀⣤⠂⠀⠄⠀⠀⠆
⠂⠀⠐⠂⠀⠀⠂⠀⠀⠃⠀⠀⠃⠀⠀⠂⠀⠀⠂⠀⠐⠀⢀⣟⡟⠀⠀⠀⡄⠀⠂⠀⠀⠂⠀⠀⠂⠀⠐⠂⠀⠐⠀⠀⠐⠀⠀⠘⠀⠀⠘⠂⠀⠀⠂⢀⣴⡟⠁⠘⠀⠀⠐⠀⠀
⡀⠉⢀⡀⠉⠀⡀⠉⠀⡀⠈⠀⡀⠈⠀⡀⠈⢀⡀⠉⢀⣠⣿⡿⠀⠀⠀⠀⡇⢀⡀⠈⠀⡀⠈⠀⡀⠉⢀⡀⠉⢀⠀⠁⢀⠀⠁⢀⠀⠉⢀⡀⠈⢀⣴⣿⠋⠀⢀⢁⡀⠁⢀⠀⠁
⠀⠤⠀⠀⠠⠀⠀⠤⠀⠀⠠⠀⠀⠠⠀⠀⠠⠀⠀⠤⢠⣿⣻⠃⠀⠀⠀⠀⡧⠀⠀⠠⠀⠀⠠⠀⠀⠤⠀⠀⠤⠀⠀⠄⠀⠀⠄⠀⠀⠤⠀⣠⣾⣿⣟⠁⠀⢀⡦⠀⠀⠄⠀⠀⠄
⠂⠀⠐⠂⠀⠐⠂⠀⠐⠂⠀⠐⠂⠀⠀⠂⠀⠐⠂⢠⣿⣯⡟⠀⡴⡇⠀⠀⡇⠐⠂⠀⠐⠂⠀⠐⠂⠀⠐⠂⠀⠐⠂⠀⠐⠀⠀⠐⢀⣴⣾⣿⡿⠋⠁⠀⠀⠀⠀⠐⠂⠀⠐⠀⠀
⡀⠁⠀⡀⠉⠀⡀⠉⠀⡀⠈⠀⡀⠈⠀⡀⠈⠀⣠⣿⣽⣿⠃⡼⠁⠹⠶⠾⠿⢶⡆⠈⢀⡀⠉⠀⡀⠈⢀⡀⠁⢀⠀⠁⢀⡀⣩⣴⣿⣿⠿⠃⠀⠀⠀⠀⠀⡐⠉⢀⠀⠁⢀⠀⠁
⠀⠄⠀⠀⠠⠀⠀⠤⠀⠁⢠⠀⠁⢠⠀⠀⢠⢀⣿⣱⣿⡿⡾⠁⠀⠀⠀⠀⠀⣾⡁⢤⠀⠁⢠⠀⠀⠠⠀⠀⠄⠀⠀⡄⣨⣾⣿⣿⣿⠋⣀⣤⣴⠀⠀⠀⠐⠁⠀⠀⠀⡄⠀⠀⡄
⠀⠀⠀⠀⠀⠀⠆⠀⠀⠆⠀⠀⠆⠀⠀⠆⠀⣾⡟⡿⣿⡇⠁⠀⠀⠀⠀⠀⠀⠀⠉⠳⠶⠶⠶⠤⢤⣤⣴⣆⠀⠰⣦⢞⣵⣫⣿⢟⡷⠋⠁⠼⠥⡄⠀⣰⠁⠀⠀⠀⠀⠀⠰⠀⠀
⠀⠂⠀⠀⠀⠀⠀⠒⠀⠀⠘⠀⠀⠘⠀⠀⣾⣿⣿⢁⣿⡇⠀⠀⠀⠀⠀⠀⢀⣀⣘⡧⠀⠀⠀⠀⠀⠈⠛⢮⡙⠺⣿⣿⣳⣻⣿⠋⠀⠀⠀⠀⠀⠼⣟⠛⠀⠀⠀⠀⠀⠃⠀⠀⠃
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣿⡿⢹⣼⡟⠀⠀⠀⠀⠀⠀⣀⡼⠛⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⢆⠀⠙⠷⣟⡁⠀⠀⠀⠀⠀⠀⠀⠈⠳⣄⡀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡾⠋⠁⠸⠛⠇⠀⠀⢰⡟⣶⠞⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢻⡄⠀⠈⠻⢦⡀⠀⠀⠀⠀⢀⣀⡤⠼⠛⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣼⠋⠀⠀⠀⠀⠀⠀⠀⠀⣸⠞⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⡄⠀⠀⠀⠹⣦⡀⠀⠀⠸⡗⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡟⠁⠀⠀⠀⠀⠀⠀⠀⠀⡼⠁⠀⠀⠀⠀⠀⠀⠀⠀⣠⡟⠀⠀⢠⠀⠀⠀⠀⠀⠀⠀⢿⡄⠀⠀⠀⠈⠻⣄⣀⣀⢳⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⠟⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⠁⠀⠀⠀⠀⠀⠀⠀⠀⣰⠋⡇⠀⠀⢸⠀⠀⠀⠀⠀⠀⠀⢸⢻⡄⠀⠀⠀⠀⠹⣆⠿⠛⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⡇⠀⠀⠀⠀⠀⠀⠀⠀⡼⠃⠀⡇⠀⠀⣸⠀⠀⠀⠀⠀⠀⠀⢸⠀⢧⠀⠀⠀⠀⠀⢸⣆⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⣾⠀⠀⠀⠀⠀⠀⠀⠀⢀⡴⡿⠀⠀⠀⠀⠀⠀⠀⢀⣼⣥⣤⣀⣇⣀⠀⡇⠀⠀⠀⠀⠀⢀⣀⣼⡤⠼⣧⠀⠀⠀⢀⣸⣿⣇⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⡏⠀⠀⠀⠀⠀⠀⠀⣠⠞⢡⠃⠀⠀⠀⠀⠀⠀⠀⡼⠃⠀⠀⠀⢿⠈⢸⡇⠀⠀⠀⠀⠀⠈⢀⡞⠀⠀⢸⡄⠀⠀⢸⣿⣿⣿⣿⡆⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⢸⡇⠀⠀⠀⠀⠀⣠⠞⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⠁⠀⠀⠀⠀⢸⡄⢸⠀⠀⠀⠀⠀⠀⠀⡼⠁⠀⠀⠀⢷⡀⠀⠀⠹⢿⣿⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠸⡇⠀⠀⢀⣠⠚⠁⠀⠀⣀⣠⡀⠀⠀⠀⠀⠀⣸⠃⠀⠀⠀⠀⠀⠘⣇⡿⠀⠀⠀⠀⠀⠀⣸⠃⠀⠀⠀⠀⠘⣇⠀⠀⠀⠘⣿⡏⣇⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⣷⣀⣴⣋⣡⠤⠶⠚⠉⠁⠸⣇⠀⠀⠀⠀⣸⠃⣀⣠⣤⣄⣀⣀⡀⢸⠇⠀⠀⠀⠀⠀⣰⠏⢀⣤⣶⣾⣟⣶⣾⣄⠀⠀⢸⠛⢿⡿⣇⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⡀⠀⠀⠀⠀⠀⠀⠀⡇⠀⢿⡄⠀⠀⣴⣧⣾⣿⢿⣷⣿⣿⣿⠿⣿⠄⠀⠀⠀⣠⣾⡏⢠⣿⣿⣿⣿⡍⠙⢻⣯⠁⠀⣿⣳⠆⠀⠘⢧⡀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⡇⠀⠀⠀⠀⠀⠀⢰⡇⠀⠘⢷⠀⢀⣿⠟⠋⠀⣿⣿⣿⣿⣿⣆⡏⠀⠀⢀⡴⠛⡿⠀⠀⣿⣿⣿⣿⠇⠀⢸⢿⠀⢠⠇⠙⢦⣄⡀⠀⢳⡄⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⠀⠀⠀⠀⠀⠀⢸⡇⠀⠀⠈⣧⢸⠙⡇⠀⢸⡿⠛⠻⠋⣿⢻⡇⢀⡴⠋⠀⠘⠁⠀⠀⣿⠘⠀⣿⠀⠀⣸⠀⣇⣸⠀⠀⠀⠀⠉⠉⠉⠉⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣇⠀⠀⠀⠀⠀⢸⡇⠀⠀⠀⠘⢿⡀⢻⡄⠈⣿⣄⠀⢠⠏⣸⠴⠋⠀⠀⠀⠀⠀⠀⠀⠻⣇⣰⠃⠀⠠⡟⠀⠙⢹⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡞⠛⠀⠀⠀⠀⠀⢸⡇⠀⠀⠀⠀⠈⠉⠀⢷⡀⠈⢙⠛⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠁⡀⢠⢳⣇⠀⠀⢸⡇⠀⠀⣾⣿⣿⣷⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⠃⠀⢀⡄⠀⠀⠀⠀⣧⠀⠀⠀⠀⠀⠀⣤⡀⢷⣣⠘⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢇⠈⣾⡿⠀⠀⢸⠇⠀⠀⢸⣿⠾⠟⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⣰⠃⠀⢀⡞⠀⠀⠀⠀⢀⢸⠀⡄⠀⠀⠀⠀⢸⡟⠦⣿⣆⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠃⣹⡇⠀⠀⢸⡇⠀⠀⡈⠁⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⢀⡼⠁⣀⡤⣾⠀⠀⠀⠀⠀⡟⠈⣇⣷⡀⠀⠀⠀⠀⣇⠀⠈⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠒⠀⠀⠀⠀⠀⢀⣴⠋⠀⠀⠀⢸⠃⠀⠀⠁⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⢀⣴⠿⠒⠋⠁⠀⣿⠀⠀⠀⠀⢰⡇⠀⠘⠃⢷⠀⠀⠀⠀⣿⠀⠀⠀⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣶⠋⠁⠀⠀⠀⠀⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢿⠀⠀⠀⠀⡾⢹⡄⠀⠀⠈⣧⠀⠀⠀⣿⠀⠀⠀⠘⢷⣶⣤⣀⣀⠀⠀⠀⠀⢀⣀⡴⠚⢹⢸⣇⠀⠀⠀⠀⠀⣾⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⡇⠀⠀⢰⡇⠀⠹⣤⣠⣾⣿⣆⠀⠀⣿⣄⠀⠀⠀⠀⠻⣿⣯⡉⠙⠛⠛⣻⠋⠀⠀⠀⠈⠿⠸⡆⠀⠀⠀⢠⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢱⡄⠀⣸⠇⠀⢀⡾⢿⣿⣿⣿⡄⠀⣷⡙⢷⣄⠀⠀⠀⢻⣿⣿⣷⣤⡼⠋⠀⠀⠀⠀⠀⠀⠀⢹⡀⠀⠀⢸⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠾⠙⢢⡴⠋⠀⠈⢿⣿⣿⣿⡰⢟⢿⣎⣛⣷⣄⡀⣸⣿⣹⣿⣿⣷⣤⣀⠀⠀⠀⠀⠀⠀⠀⢷⡀⢀⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
 
)";
}