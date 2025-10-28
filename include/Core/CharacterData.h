#include "Utils/Types.h"

enum class ECharacterClass : uint8
{
    None,
    Warrior,
    Mage,
    Rogue
};

enum class ECharacterSubclass : uint8 
{
    None,

    Protection,
    Arms,
    Fury,

    Fire,
    Frost,
    Arcane,

    Assassination,
    Outlaw,
    Subtlety
};

struct FCharacterAttributes {
    int32 Strength;
    int32 Agility;
    int32 Intelligence;
    int32 Stamina;
    int32 Spirit;
};

struct FCharacterData {
    FName CharacterName;
    
    ECharacterClass CharacterClass;
    ECharacterSubclass CharacterSubclass;
    FCharacterAttributes Attributes;

    float ExperiencePoints;
    uint32 Level;
    float32 Health;
    uint32 Resource;

    TArray<FString> Abilities;
};