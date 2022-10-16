#pragma once
#include "CoreMinimal.h"
#include "RuinableStructure.h"
#include "DestroyedTeamStructure.generated.h"

UCLASS(Blueprintable)
class WAR_API ADestroyedTeamStructure : public ARuinableStructure {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, SaveGame)
    uint8 LastGarrisonedTeamId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDecimateStockpileOnClaim;
    
public:
    ADestroyedTeamStructure();
};

