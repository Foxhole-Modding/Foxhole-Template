#pragma once
#include "CoreMinimal.h"
#include "InfrastructureStyle.h"
#include "TechTreeComponentUIItem.h"
#include "Styling/SlateBrush.h"
#include "InfrastructuresStyle.generated.h"

USTRUCT(BlueprintType)
struct WAR_API FInfrastructuresStyle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FInfrastructureStyle Entries[6];
    
    UPROPERTY(EditAnywhere)
    FTechTreeComponentUIItem Items[21];
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush VoteBrush;
    
    FInfrastructuresStyle();
};

