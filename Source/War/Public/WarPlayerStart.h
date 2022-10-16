#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerStart.h"
#include "WarPlayerStart.generated.h"

class AActor;

UCLASS(Blueprintable)
class WAR_API AWarPlayerStart : public APlayerStart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* PlayerStartOwner;
    
    AWarPlayerStart();
};

