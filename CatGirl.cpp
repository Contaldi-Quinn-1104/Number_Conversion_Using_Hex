#include "CatGirl.h"

void CatGirl::displayMenu()
{
    int userResponse;
    catgirlPic1();
    cout << "Hello anon! I will be your guide today for the CatGirl Machine Langauge Simulation software." << endl;
    cout << "0: PLEASE DONT SKIP THE TUTORIAL... but if you want to use this option...." << endl;
    cout << "1: for cool dialogue with the calculator app" << endl;
    cin >> userResponse;
    if (userResponse == 1)
        angryFox();
}

void CatGirl::angryFox()
{
    int userResponse;
    cout << "OH HELLO!!!!!! <3 I will be your guide today! welcome to my magic calculator. So lets talk about loading data" << endl;
    cout << "YOU MUST!!! I MEAN MUST follow the format or you will break this program. The creator of this program was to" << endl;
    cout << "Tired to add safe gaurds against mal use of the softwear. OKAY!!!! ANYWAYS on to the fun stuff owo" << endl;
    cout << "The Format is: MOV R1, #0x72DF9901 COMMAND REGISTORY LOCATION VALUE. The program contains a maximum of 8 registory" << endl;
    cout << "for all other MATHY Stuffffff errr i mean arthmetic operations or whateverrrrrr Format is: ADDS R3, R1, R2 " << endl;
    cout << "Player Response: " << endl;
    cout << "1. Arnt you a fox girl... I thought this was a catgirl calculator" << endl;
    cout << "2. okay... umm I just want to use the program now" << endl;
    cin >> userResponse;
    if( userResponse == 1)
    {
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
            cout << "thankyou for understanding! you are a pretty cool person. OWO now lets go calculate math!" << endl;
        }
        else
        {
            cout << "FINE OMG I WILL GO GRAB A CATGIRL PLEASE WAIT UGHHHHHH" << endl;
            realCatgirl();
            cout << "nyannn ughhhhhhh i was taking a nap yes I am the meownager and i am here to costumer you help." << endl;
            cout << "uhhh anyways yeah just use the program how the last girl told you tooo uhhh. have a meowtastic day" << endl;
            cout << "and ummm i dont know i just work here bro go use the calculator and stay safe or dont i dont care" << endl;
        }
    }
    else
    {
        cout << "whatever... You are lucky I would even talk to you. You know what go away i hope you break the program hissss" << endl;
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

void CatGirl::realCatgirl()
{
cout << R"(
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⠶⣒⠒⠠⠤⠤⠤⠤⢤⣤⠒⠉⠉⠉⠛⢧⠉⠉⠲⣤⣈⠉⠢⢄⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠙⣷⣦⣀⠀⠀⢀⠄⠈⠀⣉⡡⠼⠯⢍⣓⠒⠂⠬⣿⡑⠀⠀⠑⢄⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢣⠀⠈⣿⡿⠟⠛⢗⡒⠶⢿⣅⠀⠀⠀⠀⠈⠑⢤⣀⠀⠉⠉⠁⠉⠉⠑⠒⠲⠤⣤⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡵⠊⠁⡀⠀⠀⠀⠈⢢⠀⠈⠣⠀⠀⠀⠀⠀⠈⢿⢏⠢⣄⣀⣀⣤⡴⠒⠈⢡⠃⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡞⠀⠀⣼⣤⡄⠀⠀⠀⠀⢳⠀⠀⢱⠀⠀⠀⠀⠀⠘⡄⢀⠈⢢⡻⣿⠀⠀⢠⠎⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡘⠀⠀⣼⠏⢹⠇⠀⠀⢠⠀⠀⡇⠀⠈⢇⠀⠀⠀⠀⠀⢷⠘⡆⠀⠀⠹⣆⠔⢇⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⠃⠀⢰⣿⠄⡇⢸⠀⠀⠀⠀⠀⠁⠀⠀⠐⠀⠀⠀⠀⠀⢸⡄⢱⠀⠀⡆⢻⣷⣼⣆⡀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡰⢻⠀⠀⡟⠁⠀⡇⡜⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⠀⠘⡆⠀⢸⠘⣧⠈⣿⠉⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⢁⡇⠀⢸⠀⣀⡜⠁⡇⠀⠀⠀⠀⠀⡆⠀⢠⠂⠀⠀⠀⠀⠀⢀⠀⠀⡇⠀⠀⡇⢹⠀⢹⡄⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠂⡼⠇⠀⢸⠸⡿⠒⢲⠃⠀⡠⠁⢀⠜⠀⠀⡜⠀⠀⠀⠀⠀⠀⡘⠀⠀⡇⠀⠀⡇⠸⠀⠘⡇⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⠇⠀⠀⣏⡜⣁⡴⠃⠀⠔⠁⡠⠊⠀⢀⡼⠁⠀⠀⠀⠀⠀⣰⠁⠀⢀⠇⠀⠀⡇⠀⠀⠀⠃⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣾⢋⠀⡇⣀⣿⡿⢻⣦⣤⣤⡤⠮⠤⣤⣴⡟⠁⠀⠀⠀⠀⠀⡰⠃⠀⠀⡼⠀⠀⢠⠁⢠⠀⠀⠀⠀
⠀⠀⡖⠒⢄⠀⠀⠀⠀⢀⡤⠖⢁⡇⠀⠀⡇⠀⣽⡀⠸⣿⣿⣿⣿⠀⠀⠈⠁⠈⠙⣷⣶⣤⠤⠀⣀⡠⠆⡰⠁⠀⢀⠇⠀⣸⠀⠀⠀⠀
⠀⠀⠘⢄⠀⠣⡀⠸⠉⠏⠀⠀⢸⡀⠠⠀⡇⠀⣿⡇⠀⠙⠛⠓⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⡿⣿⣱⡾⠃⠀⣠⡞⠀⢠⠇⠀⠀⠀⠀
⠀⠤⢄⠀⠳⡀⠑⢆⠀⠱⡀⠀⠀⢧⠀⡄⢁⠀⢻⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠛⠛⠃⠀⢈⣛⣩⡔⠊⠀⠣⢀⡏⠀⠀⠀⠀⢩
⢱⡤⠀⢙⣦⣸⠀⠀⠃⠀⠈⢲⣤⡀⠳⣼⣾⡀⢸⣿⣷⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⢀⡇⠀⠀⢀⡾⠁⠀⠀⠀⠀⣸
⠀⠑⢄⠀⠑⢌⠀⠀⠀⠀⠀⠀⢇⠹⡀⠻⢿⡇⢸⣿⠿⣿⡗⢦⣄⡀⠀⠀⠀⠀⠀⠀⠀⣀⡤⣶⣾⣇⠀⣇⢀⣠⠊⠀⠀⠀⠀⠀⡠⠛
⠀⠀⠘⠯⡉⠳⣄⠀⠀⠀⠀⠀⣼⠹⣧⡔⡟⠙⣼⣷⠀⠸⠀⢼⡇⠉⢻⠛⠻⠿⢿⡿⠋⠁⢠⣿⣉⣙⣿⣟⣉⠀⠀⣀⡀⠤⢶⠯⠀⠀
⠀⠀⠀⠀⢸⣦⡈⠀⠀⠀⠀⢰⠿⣼⣿⠀⡇⠀⠹⣿⣄⠃⠀⠀⡇⠀⢀⡵⢖⠒⠉⠀⠀⢀⠎⠛⢻⠛⣿⣿⡿⠿⣿⣿⠳⡀⠁⠀⠀⠀
⠀⠀⠀⣰⠋⢻⠙⠢⠤⡠⠴⡋⠸⡇⢸⠀⢻⠘⠀⢿⣿⣦⣼⣀⡇⣠⣿⠒⣌⣆⠀⠀⢀⡞⠀⢀⠃⢠⣿⣿⡇⠀⠀⠈⠲⣷⡄⠀⠀⠀
⠀⢠⠞⢻⠀⠈⣆⢆⠀⢆⠀⢰⠀⠥⢸⡆⠘⡆⠇⢸⣾⠈⢿⠚⠷⣹⠁⠉⡹⠹⡀⣠⢻⠁⠀⡘⠀⠸⡿⣿⡇⠀⠀⢀⣴⣿⡇⠀⠀⠀
⠀⡇⠀⠸⠀⠀⠘⢞⡆⠈⠄⢀⡇⠀⢸⣷⡘⣇⠰⣿⡇⠀⡜⠃⠀⣧⠤⣤⡇⠀⠉⠁⡆⠀⠀⡇⠀⠀⠀⡆⠀⢀⠔⢡⡯⡟⣇⠀⠀⠀
⠀⢱⠀⠀⠀⠀⠀⠀⠉⠏⠉⠁⠀⠀⢸⠙⣷⠋⠀⢻⡇⠀⣿⠀⠘⠻⣯⠽⠀⠀⠀⢰⠁⠀⣸⡇⠀⠠⠀⡇⢠⠊⠀⣌⠴⡇⢸⡆⠀⠀
⠀⠈⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⣠⡿⠀⠀⠘⣿⠀⢾⣧⠀⠀⠀⠉⠒⠦⠄⡞⠀⢀⠟⡇⠀⠀⣆⣇⠇⠀⠀⣇⠴⢇⠈⢃⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠋⠀⠀⠀⠀⡀⡟⡄⢸⠈⢢⠀⠀⠀⠀⠀⢀⠇⠀⢸⠀⣡⠀⠀⠘⣿⠀⠀⠀⠸⡀⠈⠀⠀⠙⠒
)";
}