#include <iostream>
#include <stdexcept>
#include "snowman.hpp"

using namespace std;

const int skipDigit = 10;
const int checkUnder8Digits = 10000000;
const int checkOver8Digits = 100000000;

namespace ariel{
    std::string snowman(int num){
        if(num/checkOver8Digits > 0 || num/checkUnder8Digits == 0){
            throw out_of_range("You need 8 digits!");
    }
        string res;

        //Base 
        string b;
        switch (num%skipDigit)
        {
        case 1:
            b+=" ( : ) ";
            break;
        case 2:
            b+=" (\" \") ";
            break;
        case 3:
            b+=" (___) ";
            break;
        case 4:
            b+=" (   ) ";
            break;

        default:
            string errMsg = "Invalid digit: " + std::to_string(num%skipDigit);
            throw std::out_of_range(errMsg);
            break;
        }
        num = num/skipDigit;

       //Torso 
        string t;
        switch (num%skipDigit)
        {
        case 1:
            t+="( : )";
            break;
        case 2:
            t+="(] [)";
            break;
        case 3:
            t+="(> <)";
            break;
        case 4:
            t+="(   )";
            break;

        default:
            string errMsg = "Invalid digit: " + std::to_string(num%skipDigit);
            throw std::out_of_range(errMsg);
            break;
        }
        num = num/skipDigit;

        //Right Arm 
        char y1 = ' ';
        char y2 = ' ';
        //y1,y2 are ' ' by default 
        switch (num%skipDigit)
        {
        case 1:
            y1 = ' ';
            y2 = '>';
            break;
        case 2:
            y1 = '/';
            y2 = ' ';
            break;
        case 3:
            y1 = ' ';
            y2 = '\\';
            break;
        case 4:
            y1 = ' ';
            y2 = ' ';
            break;

        default:
            string errMsg = "Invalid digit: " + std::to_string(num%skipDigit);
            throw std::out_of_range(errMsg);
            break;
        }
        num = num/skipDigit;

        //Left Arm 
        char x1 = ' ';
        char x2 = ' ';
        //x1,x2 are ' ' by default 
        switch (num%skipDigit)
        {
        case 1:
            x1 = ' ';
            x2 = '<';
            break;
        case 2:
            x1 = '\\';
            x2 = ' ';
            break;
        case 3:
            x1 = ' ';
            x2 = '/';
            break;
        case 4:
            x1 = ' ';
            x2 = ' ';
            break;

        default:
            string errMsg = "Invalid digit: " + std::to_string(num%skipDigit);
            throw std::out_of_range(errMsg);
            break;
        }
        num = num/skipDigit;

        //Right eye 
        char r = ' ';
        //r is ' ' by default 
        switch (num%skipDigit)
        {
        case 1:
            r = '.';
            break;
        case 2:
            r = 'o';
            break;
        case 3:
            r = 'O';
            break;
        case 4:
            r = '-';
            break;

        default:
            string errMsg = "Invalid digit: " + std::to_string(num%skipDigit);
            throw std::out_of_range(errMsg);
            break;
        }
        num = num/skipDigit;

        //Left eye
        char l= ' ';
        //l is ' ' by default 
        switch (num%skipDigit)
        {
        case 1:
            l = '.';
            break;
        case 2:
            l = 'o';
            break;
        case 3:
            l = 'O';
            break;
        case 4:
            l = '-';
            break;

        default:
            string errMsg = "Invalid digit: " + std::to_string(num%skipDigit);
            throw std::out_of_range(errMsg);
            break;
        }
        num = num/skipDigit;

        //Nose 
        char n = ' ';
        //n is ' ' by default 
        switch (num%skipDigit)
        {
        case 1:
            n = ',';
            break;
        case 2:
            n = '.';
            break;
        case 3:
            n = '_';
            break;
        case 4:
            n = ' ';
            break;

        default:
            string errMsg = "Invalid digit: " + std::to_string(num%skipDigit);
            throw std::out_of_range(errMsg);
            break;
        }
        num = num/skipDigit;

        //Hat  
        string h;
        switch (num%skipDigit)
        {
        case 1:
            h+= "       \n _===_ ";
            break;
        case 2:
            h+= "  ___  \n ..... ";
            break;
        case 3:
            h+= "   _   \n  /_\\  ";
            break;
        case 4:
            h+= "  ___  \n (_*_) ";
            break;

        default:
            string errMsg = "Invalid digit: " + std::to_string(num%skipDigit);
            throw std::out_of_range(errMsg);
            break;
        }
        //Connect all parts of the snowman.
        //Line 1-2
        res += h+"\n";
        //line 3
        res.push_back(x1);
        res.push_back('(');
        res.push_back(l);
        res.push_back(n);
        res.push_back(r);
        res.push_back(')');
        res.push_back(y1);
        res+="\n";
        //line 4
        res.push_back(x2);
        res+=t;
        res.push_back(y2);
        res+="\n";
        //line 5
        res+=b;

        return res;
    }
}
