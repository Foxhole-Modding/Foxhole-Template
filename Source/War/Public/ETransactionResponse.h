#pragma once
#include "CoreMinimal.h"
#include "ETransactionResponse.generated.h"

UENUM(BlueprintType)
enum class ETransactionResponse : uint8 {
    Success,
    Error,
    None,
    DrivewayBlocked,
    TroopShipLocked,
    InvalidStance,
    UnableToRetrieve,
    TooFewSupplies,
    CantRetrieveSupplies,
    InsufficientQuantity,
    AtQuantityLimit,
    AtTotalQuantityLimit,
    AtTypeLimit,
    UnsupportedType,
    CantRetrieveHoldingLargeItem,
    MustBeUnpackaged,
    NotReservable,
    NotStockpilable,
    EmptySource,
    StockpileNotFound,
    MustBeOwner,
    IncorrectPassCode,
    PassCodeAttemptCooldownUnavailable,
    NoRetrievePermission,
    DuplicateName,
    QueueFull,
    OrderExists,
    NotEnoughMaterials,
    NotEnoughFuel,
    NotEnoughBlueprints,
    UnsupportedItem,
    InventoryFull,
    TechRequired,
    InvalidAccessLevel,
    OrderTooSmallForMassProduction,
    IncompatibleMassProducedItem,
    PrototypeRequired,
    CannotBeProducedHere,
    SourceStockpileNotFull,
    DirectRetrievalNotAllowed,
};

