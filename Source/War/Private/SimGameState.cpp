#include "SimGameState.h"
#include "Net/UnrealNetwork.h"

void ASimGameState::OnRep_WorldWeatherState() {
}

void ASimGameState::OnRep_WardenTechTree() {
}

void ASimGameState::OnRep_GameplayFlags() {
}

void ASimGameState::OnRep_ColonialTechTree() {
}

void ASimGameState::MulticastToggleEarlyWarRestrictionOverride_Implementation() {
}

void ASimGameState::MulticastRemoveOfflinePlayerState_Implementation(const FString& OnlineID) {
}

FVector2D ASimGameState::GetWindVector() const {
    return FVector2D{};
}

void ASimGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASimGameState, TownHallInfo);
    DOREPLIFETIME(ASimGameState, GameplayFlags);
    DOREPLIFETIME(ASimGameState, ConcreteSettleDurationModifier);
    DOREPLIFETIME(ASimGameState, WarAchievementProgress);
    DOREPLIFETIME(ASimGameState, StructureLayers);
    DOREPLIFETIME(ASimGameState, WorldWeatherState);
    DOREPLIFETIME(ASimGameState, PrevWindSpeedTime);
    DOREPLIFETIME(ASimGameState, PrevWindSpeed);
    DOREPLIFETIME(ASimGameState, NextWindSpeedTime);
    DOREPLIFETIME(ASimGameState, NextWindSpeed);
    DOREPLIFETIME(ASimGameState, PrevWindDirectionTime);
    DOREPLIFETIME(ASimGameState, PrevWindDirection);
    DOREPLIFETIME(ASimGameState, NextWindDirectionTime);
    DOREPLIFETIME(ASimGameState, NextWindDirection);
    DOREPLIFETIME(ASimGameState, ColonialTechTree);
    DOREPLIFETIME(ASimGameState, WardenTechTree);
    DOREPLIFETIME(ASimGameState, ConquestWinner);
    DOREPLIFETIME(ASimGameState, WarPhase);
    DOREPLIFETIME(ASimGameState, WarPhaseEndTime);
    DOREPLIFETIME(ASimGameState, bIsPatchRequired);
}

ASimGameState::ASimGameState() {
    this->MapIntelligence = NULL;
    this->ConcreteSettleDurationModifier = 1.00f;
    this->StructureLayers = 0;
    this->PrevWindSpeedTime = 0.00f;
    this->PrevWindSpeed = 0;
    this->NextWindSpeedTime = 340282346638528859811704183484516925440.00f;
    this->NextWindSpeed = 0;
    this->PrevWindDirectionTime = 0.00f;
    this->PrevWindDirection = 0;
    this->NextWindDirectionTime = 340282346638528859811704183484516925440.00f;
    this->NextWindDirection = 0;
    this->ColonialTechTree = NULL;
    this->WardenTechTree = NULL;
    this->ConquestWinner = EFactionId::NoTeam;
    this->WarPhase = EWarPhase::PreConquest;
    this->bIsPatchRequired = false;
}

