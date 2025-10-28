#include "Core/Character.h"
#include "Character.h"


Character::Character() {
    FCharacterData Character;
    Character.CharacterName = "Hero";
    Character.CharacterClass = ECharacterClass::None;
    Character.CharacterSubclass = ECharacterSubclass::None;
    Character.Attributes = { 10, 10, 10, 10, 10 };
    Character.ExperiencePoints = 0.0f;
    Character.Level = 1;
    Character.Health = 100.0f;
    Character.Resource = 100;
    Character.Abilities = {};
}

void Character::CreateCharacter() 
{
    
}

ECharacterClass Character::FetchCharacterClass() {

}