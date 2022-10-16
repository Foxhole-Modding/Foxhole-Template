#include "ServerSettings.h"

UServerSettings::UServerSettings() {
    this->bFriendlyFire = true;
    this->bLoginRestrictions = true;
    this->bDevBranchMode = false;
    this->bFactionLock = true;
    this->bAllowMods = true;
    this->ResourceBalanceBase = 4.00f;
    this->BorderDecayFactor = 10.00f;
    this->AddedTimePerHomeSpawn = 20.00f;
    this->ConquestIteration = 0;
    this->WelcomeMessage = FText::FromString(TEXT("Welcome to Foxhole! Remember to work together and follow the code of conduct."));
    this->MaxPlayers = 0;
    this->IsCommunityServer = false;
    this->ServerRegion = ERegionType::Global;
    this->GlobalRefineSpeedModifer = 1.00f;
    this->GlobalRefineYieldModifier = 1.00f;
    this->ShardId = 0;
    this->SpawnInvulnerabilityTime = 3.00f;
    this->MinLobbyPlayers = 10;
    this->bEnableVehicleAFKTimeout = true;
    this->bEnableTravelPortalSearchFallback = false;
    this->bAdvertiseToSteam = false;
    this->bSelfServeFactionUnlockEnabled = true;
    this->AutoRestartServerTimeSecs = 172800.00f;
}

