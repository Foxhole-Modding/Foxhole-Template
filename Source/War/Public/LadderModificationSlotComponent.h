#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ModificationSlotComponent.h"
#include "LadderModificationSlotComponent.generated.h"

class ALadder;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API ULadderModificationSlotComponent : public UModificationSlotComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ALadder> LadderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALadder* Ladder;
    
    ULadderModificationSlotComponent();
};

