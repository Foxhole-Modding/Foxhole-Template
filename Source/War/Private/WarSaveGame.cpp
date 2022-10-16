#include "WarSaveGame.h"

UWarSaveGame::UWarSaveGame() {
    this->NextSpawnPointId = 0;
    this->bUprisingStarted = false;
    this->WarPhase = EWarPhase::PreConquest;
    this->bIsWeatherManual = false;
    this->bIsAutoSave = false;
}

