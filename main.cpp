#include <iostream>
#include "snowman.hpp"

using namespace std;

int main(){
    cout<< "Hello to the Snowman creator program!\n By your choses we will create a cute snowman!\n\n" << endl;
    
    int num = 0;
    int dig = 0;
    // Hat
    std::string hatRev = "1. Straw Hat\n\n\t _===_ \n\n2. Mexican Hat\n\t  ___  \n\t ..... \n3. Fez\n\t   _   \n\t  /_\\   \n4. Russian Hat\n\t  ___  \n\t (_*_)\n";
    cout<< "choose the digit to hat type:" <<endl;
    cout << hatRev << endl;
    bool flag = true;
    while(flag){
        cin >> dig;
        if(dig > 4 || dig < 1){
            cout<< "Incorrect input!\ntry again:"<<endl;
        }
        else
            flag = false;
    }
    num*=10;
    num+=dig;
    std::cin.clear();
    flag = true;

    //Nose
    std::string NoseRev = "1. Normal\n\t,\n2. Dot\n\t.\n3. Line\n\t_\n4. None\n\n";
    cout<< "choose the digit to nose type:" <<endl;
    cout << NoseRev << endl;
    while(flag){
        cin >> dig;
        if(dig > 4 || dig < 1){
            cout<< "Incorrect input!\ntry again:"<<endl;
        }
        else
            flag = false;
    }
    num*=10;
    num+=dig;
    std::cin.clear();
    flag = true;

    //Left eye
    std::string LeftEyeRev = "1. Dot\n\t.\n2. Bigger Dot\n\to\n3. Biggest Dot\n\tO\n4. Closed\n\t-\n";
    cout<< "choose the digit to left eye type:" <<endl;
    cout << LeftEyeRev << endl;
    while(flag){
        cin >> dig;
        if(dig > 4 || dig < 1){
            cout<< "Incorrect input!\ntry again:"<<endl;
        }
        else
            flag = false;
    }
    num*=10;
    num+=dig;
    std::cin.clear();
    flag = true;

    //Right eye
    std::string RightEyeRev = "1. Dot\n\t.\n2. Bigger Dot\n\to\n3. Biggest Dot\n\tO\n4. Closed\n\t-\n";
    cout<< "choose the digit to right eye type:" <<endl;
    cout << RightEyeRev << endl;
    while(flag){
        cin >> dig;
        if(dig > 4 || dig < 1){
            cout<< "Incorrect input!\ntry again:"<<endl;
        }
        else
            flag = false;
    }
    num*=10;
    num+=dig;
    std::cin.clear();
    flag = true;

    //Left arm
    std::string LeftArmRev = "1. Normal arm\n\t\n\t<\n2. Upwards arm\n\t\\\n\n3. Downwards arm\n\n\t/\n4. None\n\n";
    cout<< "choose the digit to left arm type:" <<endl;
    cout << LeftArmRev << endl;
    while(flag){
        cin >> dig;
        if(dig > 4 || dig < 1){
            cout<< "Incorrect input!\ntry again:"<<endl;
        }
        else
            flag = false;
    }
    num*=10;
    num+=dig;
    std::cin.clear();
    flag = true;

    //Right arm
    std::string RightArmRev = "1. Normal arm\n\n\t>\n2. Upwards arm\n\t/\n\n3. Downwards arm\n\n\t\\\n4. None\n\n";
    cout<< "choose the digit to right arm type:" <<endl;
    cout << RightArmRev << endl;
    while(flag){
        cin >> dig;
        if(dig > 4 || dig < 1){
            cout<< "Incorrect input!\ntry again:"<<endl;
        }
        else
            flag = false;
    }
    num*=10;
    num+=dig;
    std::cin.clear();
    flag = true;

    //Torso
    std::string TorsoRev = "1. Buttons\n\t : \n2. Vest\n\t] [\n3. Inward arms\n\t> <\n4. None\n\n";
    cout<< "choose the digit to torso type:" <<endl;
    cout << TorsoRev << endl;
    while(flag){
        cin >> dig;
        if(dig > 4 || dig < 1){
            cout<< "Incorrect input!\ntry again:"<<endl;
        }
        else
            flag = false;
    }
    num*=10;
    num+=dig;
    std::cin.clear();
    flag = true;

    //Base
    std::string BaseRev = "1. Buttons\n\t : \n2. Vest\n\t] [\n3. Inward arms\n\t> <\n4. None\n\n";
    cout<< "choose the digit to base type:" <<endl;
    cout << BaseRev << endl;
    while(flag){
        cin >> dig;
        if(dig > 4 || dig < 1){
            cout<< "Incorrect input!\ntry again:"<<endl;
        }
        else
            flag = false;
    }
    num*=10;
    num+=dig;
    std::cin.clear();
    flag = true;

    cout<< "your snowman is:\n" << endl;
    cout << ariel::snowman(num) << endl;

    return 0;


}