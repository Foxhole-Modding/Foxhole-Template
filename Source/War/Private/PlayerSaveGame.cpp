#include "PlayerSaveGame.h"

UPlayerSaveGame::UPlayerSaveGame() {
    this->Gamma = 0.00f;
    this->bSprintModeHeld = false;
    this->bShowTutorial = false;
    this->bShowHomeTutorial = false;
    this->bShowMapTutorial = false;
    this->bShowZombieTutorial_2020 = false;
    this->TimesHammerTutorialShown = 0;
    this->bVoiceChatEnabled = true;
    this->bMiniMapEnabled = false;
    this->ChatBroadcastLanguage = EChatLanguage::English;
    this->ChatListenLanguages.AddDefaulted(3);
    this->ExitCount = 0;
    this->ClientLanguage = ELanguageType::English;
    this->StockpileSortMethod = EItemSortMethod::Default;
    this->ActiveStockpileType = EStockpileType::Public;
    this->bPlayVoiceInBackground = false;
    this->bMuteEnemyPlayers = false;
    this->LastShardId = 0;
    this->SignpostVisibilityDistance = 3000.00f;
    this->WarCameraMode = EWarCameraMode::Tactical;
    this->bStreamerModeEnabled = false;
    this->bIsBadWordFilterEnabled = true;
    this->LastFactionId = EFactionId::NoTeam;
    this->bUseDifferentialSteeringMode = false;
}

