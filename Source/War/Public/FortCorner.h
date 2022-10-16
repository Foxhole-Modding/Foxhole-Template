#pragma once
#include "CoreMinimal.h"
#include "Fort.h"
#include "FortCorner.generated.h"

UCLASS(Blueprintable)
class WAR_API AFortCorner : public AFort {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> IncompatibleCornerSockets;
    
    AFortCorner();
};

