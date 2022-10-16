#include "Drawbridge.h"
#include "Net/UnrealNetwork.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/AudioComponent.h"
#include "Components/BoxComponent.h"
#include "PersistentProxyComponent.h"

void ADrawbridge::OnRep_State() {
}

void ADrawbridge::OnRep_StartTime() {
}

/*void ADrawbridge::MulticastPlayTransitionEffects_Implementation(TEnumAsByte<EBridgeState> OldState, TEnumAsByte<EBridgeState> NewState) {
}*/

/*void ADrawbridge::MulticastPlaySideToggleEffect_Implementation(TEnumAsByte<EBridgeSide> BridgeSide) {
}*/

float ADrawbridge::GetProgress() const {
    return 0.0f;
}

void ADrawbridge::ApplyVehicleDecay() {
}

void ADrawbridge::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADrawbridge, SideAState);
    DOREPLIFETIME(ADrawbridge, SideBState);
    DOREPLIFETIME(ADrawbridge, State);
    DOREPLIFETIME(ADrawbridge, StartTime);
}

ADrawbridge::ADrawbridge() {
    this->SideAMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SideAMesh"));
    this->SideBMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SideBMesh"));
    this->SideALeverMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SideALeverMesh"));
    this->SideBLeverMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SideBLeverMesh"));
    this->SideAUseArea = CreateDefaultSubobject<UBoxComponent>(TEXT("SideAUseArea"));
    this->SideBUseArea = CreateDefaultSubobject<UBoxComponent>(TEXT("SideBUseArea"));
    this->SideAProxy = CreateDefaultSubobject<UPersistentProxyComponent>(TEXT("SideAProxy"));
    this->SideBProxy = CreateDefaultSubobject<UPersistentProxyComponent>(TEXT("SideBProxy"));
    this->SideBottomUseArea = CreateDefaultSubobject<UBoxComponent>(TEXT("SideBottomUseArea"));
    this->AboveBlockingArea = CreateDefaultSubobject<UBoxComponent>(TEXT("AboveBlockingArea"));
    this->AboveBlockingVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("AboveBlockingVolume"));
    this->BelowBlockingArea = CreateDefaultSubobject<UBoxComponent>(TEXT("BelowBlockingArea"));
    this->BelowBlockingVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("BelowBlockingVolume"));
    this->SwitchSound = NULL;
    this->OpenedSound = NULL;
    this->ClosedSound = NULL;
    this->MovingLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("MovingLoop"));
    this->Ladder1Location = CreateDefaultSubobject<USceneComponent>(TEXT("Ladder1Location"));
    this->Ladder2Location = CreateDefaultSubobject<USceneComponent>(TEXT("Ladder2Location"));
    this->Ladder1 = NULL;
    this->Ladder2 = NULL;
    this->LadderType = NULL;
    this->BridgeOpenDuration = 5.00f;
    this->bIsRailBridge = false;
    this->State = Closed;
    this->StartTime = 0.00f;
}

