#include "FortForwardBase.h"
#include "Components/SceneComponent.h"

AFortForwardBase::AFortForwardBase() {
    this->LadderLocation = CreateDefaultSubobject<USceneComponent>(TEXT("LadderLocation"));
    this->LadderType = NULL;
    this->Ladder = NULL;
}

