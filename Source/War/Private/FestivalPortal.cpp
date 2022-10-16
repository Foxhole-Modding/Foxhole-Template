#include "FestivalPortal.h"
#include "Net/UnrealNetwork.h"
#include "Components/SceneComponent.h"

void AFestivalPortal::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFestivalPortal, Name);
    DOREPLIFETIME(AFestivalPortal, Destination);
}

AFestivalPortal::AFestivalPortal() {
    this->TeleportLocation = CreateDefaultSubobject<USceneComponent>(TEXT("Teleport Location"));
}

