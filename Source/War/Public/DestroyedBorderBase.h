#pragma once
#include "CoreMinimal.h"
#include "DestroyedBase.h"
#include "BorderBaseInfo.h"
#include "DestroyedBorderBase.generated.h"

UCLASS(Blueprintable)
class WAR_API ADestroyedBorderBase : public ADestroyedBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FBorderBaseInfo Info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
public:
    ADestroyedBorderBase();
};

