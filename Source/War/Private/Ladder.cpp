#include "Ladder.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"

ALadder::ALadder() {
    this->BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->ClimbVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("ClimbVolume"));
    this->ClimbVolumeTop = CreateDefaultSubobject<UBoxComponent>(TEXT("ClimbVolumeTop"));
    this->EnterPositionBottom = CreateDefaultSubobject<USceneComponent>(TEXT("EnterPositionBottom"));
    this->EnterPositionTop = CreateDefaultSubobject<USceneComponent>(TEXT("EnterPositionTop"));
}

