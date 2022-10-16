#pragma once
#include "CoreMinimal.h"
#include "UserComponent.h"
#include "FacilityRefineryUserComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UFacilityRefineryUserComponent : public UUserComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Progress, meta=(AllowPrivateAccess=true))
    float Progress;
    
public:
    UFacilityRefineryUserComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(Reliable, Server)
    void ServerSetCurrentConversionInfo(const int8 Index);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Progress();
    
};

