#include "ClientStreamingManager.h"

void UClientStreamingManager::OnLevelUnloaded() {
}

void UClientStreamingManager::OnLevelShown() {
}

void UClientStreamingManager::OnLevelLoadComplete() {
}

UClientStreamingManager::UClientStreamingManager() {
    this->StreamingCheckInterval = 0.50f;
    this->MinStreamInRadius = 117000.00f;
    this->MinStreamOutRadius = 124000.00f;
    this->CullDistance = 116000.00f;
}

