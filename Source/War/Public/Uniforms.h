#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Uniform.h"
#include "Uniforms.generated.h"

UCLASS(Blueprintable)
class WAR_API UUniforms : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FUniform Data[21];
    
    UUniforms();
};

