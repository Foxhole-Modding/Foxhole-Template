#include "AnalyticsEvent.h"

FAnalyticsEvent::FAnalyticsEvent() {
    this->EventType = EAnalyticsEventType::PlayerLogin;
    this->UnixTimeStamp = 0;
    this->AccessLevel = EAnalyticsAccessLevel::Dev;
    this->MapId = EWorldConquestMapId::Invalid;
    this->WorldPosX = 0.00f;
    this->WorldPosY = 0.00f;
    this->WorldPosZ = 0.00f;
    this->TeamId = 0;
}

