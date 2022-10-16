#pragma once
#include "CoreMinimal.h"
#include "LargeItemComponent.h"
#include "FestivalFlagItemComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UFestivalFlagItemComponent : public ULargeItemComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WalkingSpeedScale;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_TeamID)
    uint8 TeamId;
    
public:
    UFestivalFlagItemComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_TeamID();
    
};

