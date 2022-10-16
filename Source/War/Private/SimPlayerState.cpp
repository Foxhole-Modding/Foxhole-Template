#include "SimPlayerState.h"
#include "Net/UnrealNetwork.h"

void ASimPlayerState::OnRep_TeamID() {
}

void ASimPlayerState::OnRep_SquadId(const int32 PreviousSquadId) {
}

void ASimPlayerState::OnRep_RestrictedState() {
}

void ASimPlayerState::OnRep_RegimentId() {
}

void ASimPlayerState::OnRep_InactiveSquadIds() {
}

void ASimPlayerState::ClientSetIsGodMode_Implementation(const bool bIsGodMode) {
}

void ASimPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASimPlayerState, TeamId);
    DOREPLIFETIME(ASimPlayerState, Level);
    DOREPLIFETIME(ASimPlayerState, Rank);
    DOREPLIFETIME(ASimPlayerState, XP);
    DOREPLIFETIME(ASimPlayerState, CP);
    DOREPLIFETIME(ASimPlayerState, CPToGive);
    DOREPLIFETIME(ASimPlayerState, TimeOfLastVoteKick);
    DOREPLIFETIME(ASimPlayerState, DailyVoteKickCount);
    DOREPLIFETIME(ASimPlayerState, RestrictedState);
    DOREPLIFETIME(ASimPlayerState, SquadId);
    DOREPLIFETIME(ASimPlayerState, InactiveSquadIds);
    DOREPLIFETIME(ASimPlayerState, RegimentID);
}

ASimPlayerState::ASimPlayerState() {
    this->TeamId = -1;
    this->Level = 0;
    this->Rank = 0;
    this->XP = 0;
    this->CP = 0;
    this->CPToGive = 0;
    this->TimeOfLastVoteKick = 0;
    this->DailyVoteKickCount = 0;
    this->RestrictedState = ERestrictedState::None;
    this->SquadId = 0;
    this->InactiveSquadIds[0] = 0;
    this->InactiveSquadIds[1] = 0;
    this->InactiveSquadIds[2] = 0;
    this->RegimentID = 0;
}

