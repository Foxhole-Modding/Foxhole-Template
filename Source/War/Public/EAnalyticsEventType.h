#pragma once
#include "CoreMinimal.h"
#include "EAnalyticsEventType.generated.h"

UENUM()
enum class EAnalyticsEventType : uint16 {
    PlayerLogin,
    FriendlyPlayerKill,
    VoteKick,
    ModKick,
    VoteBan,
    ModBan,
    PlayerRestricted,
    ExcessFriendlyFire,
    PlayerChat,
    ModAdminCommand,
    GameShare,
    ServerInitialized,
    VehicleBuilt,
    FactoryOrderComplete,
    VehicleWrenchUnlocked,
    PlayerUnstuck,
    StructureBuilt,
    StructureDecayed,
    RetrieveItemFromStockpile,
    SubmitShippingContainer,
    SubmitCrateStoragePublic,
    SubmitVehicleStoragePublic,
    PrototypeResult,
    ReserveStockpileCreated,
    ReserveStockpileReleased,
    ReserveStockpileExpired,
    ReserveStockpileItemReleased,
    SubmitCrateStorageReserve,
    SubmitVehicleStorageReserve,
    Count,
};

