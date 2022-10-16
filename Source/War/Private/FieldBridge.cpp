#include "FieldBridge.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"

AFieldBridge::AFieldBridge() {
    this->FrontRamp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FrontRamp"));
    this->BackRamp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BackRamp"));
    this->FrontKillVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("FrontKillVolume"));
    this->BackKillVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("BackKillVolume"));
}

