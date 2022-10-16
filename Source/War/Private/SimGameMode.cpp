#include "SimGameMode.h"

void ASimGameMode::HeadlessServerCommand(const FString& Command) {
}

void ASimGameMode::HeadlessCommand(const FString& Command) {
}

ASimGameMode::ASimGameMode() {
    this->DefaultAutoSavePeriod = 0.00f;
    this->DefaultBotClass = NULL;
    this->PlayerProfileManager = NULL;
}

