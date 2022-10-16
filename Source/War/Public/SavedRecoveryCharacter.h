#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SavedCharacter.h"
#include "SavedRecoveryCharacter.generated.h"

USTRUCT(BlueprintType)
struct FSavedRecoveryCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OnlineID;
    
    UPROPERTY(EditAnywhere)
    uint8 TeamId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    UPROPERTY(EditAnywhere)
    uint8 VisualCustomizationMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Temperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Muddyness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedCharacter SavedCharacter;
    
    WAR_API FSavedRecoveryCharacter();
};

