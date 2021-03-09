/**
 * Test to check snowman exam.
 * cpp course.
 *
 * AUTHORS: Yosef Schwartz.
 * 
 * Date: 08 on march 2021.
 */

#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
using namespace std;

// During the discuss in the converstion on mails, i chose use space for logical view of the snowman
/*
STRUCTURE
     HHHHH
     HHHHH
    X(LNR)Y
    X(TTT)Y
     (BBB)
*/

TEST_CASE("Good snowman code") {
    CHECK(snowman(11114411) == string("       \n _===_ \n (.,.) \n ( : ) \n ( : ) "));
    CHECK(snowman(12311233) == string("       \n _===_ \n (O..)/\n<(> <) \n (___) "));
    CHECK(snowman(41321421) == string("  ___  \n (_*_) \n (O,o) \n<(] [) \n ( : ) "));
    CHECK(snowman(24321121) == string("  ___  \n ..... \n (O o) \n<(] [)>\n ( : ) "));
    CHECK(snowman(33232124) == string("   _   \n  /_\\  \n\\(o_O) \n (] [)>\n (   ) "));
    CHECK(snowman(14441133) == string("       \n _===_ \n (- -) \n<(> <)>\n (___) "));
    CHECK(snowman(12133342) == string("       \n _===_ \n (..O) \n/(   )\\\n (\" \") "));
    CHECK(snowman(23414431) == string("  ___  \n ..... \n (-_.) \n (> <) \n ( : ) "));
    CHECK(snowman(23423413) == string("  ___  \n ..... \n (-_o) \n/( : ) \n (___) "));
    CHECK(snowman(13213412) == string("       \n _===_ \n (o_.) \n/( : ) \n (\" \") "));
    CHECK(snowman(24112223) == string("  ___  \n ..... \n\\(. .)/\n (] [) \n (___) "));
}

TEST_CASE("Bad view of the snowman"){
    CHECK(snowman(24112223) != string("  ___  \n ..... \n\\(. .)/\n (] [) \n ( : ) "));
    CHECK(snowman(24112223) != string("  ___  \n ..... \n\\(o_O)/\n (] [) \n (___) "));
    CHECK(snowman(24112223) != string("  ___  \n ..... \n\\(. .)/\n (\" \") \n (___) "));
    CHECK(snowman(23414431) != string("  ___  \n ..*.. \n (-_.) \n (> <) \n ( : ) "));
    CHECK(snowman(23414431) != string("  ___  \n ..... \n (-_-) \n (> <) \n ( : ) "));
    CHECK(snowman(23414431) != string("  ___  \n ..... \n (-_.) \n (] [) \n ( : ) "));
    CHECK(snowman(11114411) != string("       \n _===_ \n (.,.) \n ( : ) \n (   ) "));
    CHECK(snowman(12311233) != string(" (_*_) \n _===_ \n (O..)/\n<(> <) \n (___) "));
    CHECK(snowman(41321421) != string("  ___  \n ..... \n (O,o) \n<(] [) \n ( : ) "));
    CHECK(snowman(24321121) != string("  ___  \n ..... \n (O_o) \n<(] [)>\n ( : ) "));
    CHECK(snowman(33232124) != string("   _   \n  /_\\  \n\\(o_O) \n (] [)>\n<(] [)>"));
}

TEST_CASE("Invalid input") {
    //under 8 digits
    CHECK_THROWS(snowman(555));
    //over 8 digits
    CHECK_THROWS(snowman(123142134));
    //some of digits is not between [1,4]
    CHECK_THROWS(snowman(00012341));
    CHECK_THROWS(snowman(12345678));
    CHECK_THROWS(snowman(11111110));
    //negative number
    CHECK_THROWS(snowman(-12121212));
}

