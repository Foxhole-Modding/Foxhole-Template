#include "FactoryQueue.h"

FFactoryQueue::FFactoryQueue() {
    this->Type = EFactoryQueueType::None;
    this->CraftingProgress = 0.00f;
    this->CraftingSpeedFactor = 0.00f;
}

