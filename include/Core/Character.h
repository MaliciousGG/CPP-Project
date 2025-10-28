#include "Core/CharacterData.h"
#include "Utils/Types.h"

class Character
{
public:
    Character();

    void CreateCharacter();
    ECharacterClass FetchCharacterClass();
    ECharacterSubclass FetchCharacterSubclass();
};