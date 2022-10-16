#pragma once
#include "CoreMinimal.h"
#include "CharacterSkinToneInfo.generated.h"

class UMaterialInstance;

USTRUCT(BlueprintType)
struct FCharacterSkinToneInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* HeadMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* HandsMaterial;
    
    WAR_API FCharacterSkinToneInfo();
};

