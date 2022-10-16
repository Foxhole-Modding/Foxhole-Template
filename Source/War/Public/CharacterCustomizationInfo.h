#pragma once
#include "CoreMinimal.h"
#include "CharacterCustomizationInfo.generated.h"

USTRUCT(BlueprintType)
struct FCharacterCustomizationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFemale;
    
    UPROPERTY(EditAnywhere)
    int8 SkinTone;
    
    WAR_API FCharacterCustomizationInfo();
};

