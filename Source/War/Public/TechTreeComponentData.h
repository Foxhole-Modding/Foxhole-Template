#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TechTreeComponentItem.h"
#include "TechTreeComponentData.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UTechTreeComponentData : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTechTreeComponentItem> Items;
    
public:
    UTechTreeComponentData();
};

