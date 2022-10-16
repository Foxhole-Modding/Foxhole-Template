#pragma once
#include "CoreMinimal.h"
#include "WarGridCoordinate.generated.h"

USTRUCT(BlueprintType)
struct WAR_API FWarGridCoordinate {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int16 Letter;
    
    UPROPERTY(EditAnywhere)
    int16 Number;
    
    UPROPERTY(EditAnywhere)
    int8 KeypadX;
    
    UPROPERTY(EditAnywhere)
    int8 KeypadY;
    
    FWarGridCoordinate();
};

