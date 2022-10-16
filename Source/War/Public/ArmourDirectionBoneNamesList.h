#pragma once
#include "CoreMinimal.h"
#include "EArmourDirection.h"
#include "ArmourDirectionBoneNamesList.generated.h"

USTRUCT(BlueprintType)
struct FArmourDirectionBoneNamesList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EArmourDirection ArmourDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BoneNamesList;
    
    WAR_API FArmourDirectionBoneNamesList();
};

