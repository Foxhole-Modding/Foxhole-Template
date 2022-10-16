#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ArmourProfile.generated.h"

USTRUCT(BlueprintType)
struct FArmourProfile : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuppressionModifier;
    
    WAR_API FArmourProfile();
};

