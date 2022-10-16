#include "RailwayTrack.h"
#include "Net/UnrealNetwork.h"
#include "BuildSocketComponent.h"
#include "SplineConnectorComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "RailSwitchUseComponent.h"

void ARailwayTrack::OnRep_SwitchStates() {
}

void ARailwayTrack::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARailwayTrack, SwitchStates);
}

ARailwayTrack::ARailwayTrack() {
    this->SplineConnector = CreateDefaultSubobject<USplineConnectorComponent>(TEXT("SplineConnector"));
    this->GrassCullRadius = 0.00f;
    this->BackSocket = CreateDefaultSubobject<UBuildSocketComponent>(TEXT("BackSocket"));
    this->FrontSocket = CreateDefaultSubobject<UBuildSocketComponent>(TEXT("FrontSocket"));
    this->BackSwitch = CreateDefaultSubobject<URailSwitchUseComponent>(TEXT("BackSwitch"));
    this->FrontSwitch = CreateDefaultSubobject<URailSwitchUseComponent>(TEXT("FrontSwitch"));
    this->BackSwitchMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BackSwitchMesh"));
    this->FrontSwitchMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FrontSwitchMesh"));
    this->TrackGauge = ETrackGauge::Large;
    this->MaxHeightAboveRoad = 0.00f;
    this->RailZOffset = 0.00f;
    this->RoadCheckPhysMaterials.AddDefaulted(3);
    this->bHasIncomingTravel = false;
}

