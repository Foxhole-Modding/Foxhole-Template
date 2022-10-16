#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "BuildStyle.generated.h"

USTRUCT(BlueprintType)
struct WAR_API FBuildStyle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FSlateBrush Categories[7];
    
public:
    FBuildStyle();
};

