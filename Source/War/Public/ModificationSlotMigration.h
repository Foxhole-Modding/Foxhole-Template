#pragma once
#include "CoreMinimal.h"
#include "EFortModificationType.h"
#include "ModificationSlotMigration.generated.h"

USTRUCT(BlueprintType)
struct FModificationSlotMigration {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame)
    uint8 PreviousComponentDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EFortModificationType ModificationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName SlotName;
    
    WAR_API FModificationSlotMigration();
};

