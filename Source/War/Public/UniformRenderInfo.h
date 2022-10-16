#pragma once
#include "CoreMinimal.h"
#include "CharacterRenderInfo.h"
#include "UniformRenderInfo.generated.h"

USTRUCT(BlueprintType)
struct FUniformRenderInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FCharacterRenderInfo Male[21];
    
    UPROPERTY(EditAnywhere)
    FCharacterRenderInfo Female[21];
    
    WAR_API FUniformRenderInfo();
};

