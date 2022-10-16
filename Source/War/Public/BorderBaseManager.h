#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BorderBaseManager.generated.h"

UCLASS(Blueprintable, Config=Game)
class WAR_API UBorderBaseManager : public UObject {
    GENERATED_BODY()
public:
    UBorderBaseManager();
};

