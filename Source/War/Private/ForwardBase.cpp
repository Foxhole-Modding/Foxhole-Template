#include "ForwardBase.h"
#include "TeamFlagMeshComponent.h"

AForwardBase::AForwardBase() {
    this->TeamFlagMeshComponent = CreateDefaultSubobject<UTeamFlagMeshComponent>(TEXT("TeamFlagMesh"));
}

