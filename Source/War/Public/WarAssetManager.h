#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "WarAssetManager.generated.h"

UCLASS(Blueprintable)
class WAR_API UWarAssetManager : public UAssetManager {
    GENERATED_BODY()
public:
    UWarAssetManager();
};

