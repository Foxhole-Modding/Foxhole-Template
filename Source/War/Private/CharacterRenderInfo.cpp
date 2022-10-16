#include "CharacterRenderInfo.h"

FCharacterRenderInfo::FCharacterRenderInfo() {
    this->Torso = NULL;
    this->TorsoMaterial = NULL;
    this->Legs = NULL;
    this->LegsMaterial = NULL;
    this->Back = NULL;
    this->BackMaterial = NULL;
    this->Head = NULL;
    this->HeadMaterial = NULL;
    this->Hands = NULL;
    this->HandsMaterial = NULL;
    this->Helmet = NULL;
    this->bCanUpdateHeadSkinTone = false;
    this->bCanUpdateHandSkinTone = false;
}

