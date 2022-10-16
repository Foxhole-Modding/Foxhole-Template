#pragma once
#include "CoreMinimal.h"
#include "LargeItemComponent.h"
#include "SoldierItemComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API USoldierItemComponent : public ULargeItemComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_SoldierVisuals)
    uint8 SoldierVisualsPacked;
    
public:
    USoldierItemComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_SoldierVisuals();
    
};

