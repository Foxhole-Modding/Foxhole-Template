#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "ResourceMapping.generated.h"

class AResourceMine;
class AResourceField;

UCLASS(Blueprintable)
class WAR_API UResourceMapping : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSubclassOf<AResourceMine>> MineTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSubclassOf<AResourceField>> FieldTypes;
    
    UResourceMapping();
};

