#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ModificationTemplate.generated.h"

UCLASS(Abstract, Blueprintable)
class WAR_API AModificationTemplate : public AActor {
    GENERATED_BODY()
public:
    AModificationTemplate();
};

