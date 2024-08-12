#include <gtest/gtest.h>
#include "Soundex.h"

TEST(SoundexTestsuite, ConstantsReplacedByDigit) {
    char soundex[5];
    generateSoundex("BX", soundex);
    ASSERT_STREQ(soundex, "B200");
}
 
TEST(SoundexTestsuite, NonAlphabeticCharactersIgnore) {
    char soundex[5];
    generateSoundex("A1X", soundex);
    ASSERT_STREQ(soundex, "A200");
}

TEST(SoundexTestsuite, HandlesEmptyString) {
    char soundex[5];
    generateSoundex("", soundex);
    ASSERT_STREQ(soundex, "0000");
}
}
