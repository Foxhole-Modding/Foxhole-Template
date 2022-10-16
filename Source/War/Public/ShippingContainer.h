#pragma once
#include "CoreMinimal.h"
#include "Container.h"
#include "UObject/NoExportTypes.h"
#include "ShippingContainer.generated.h"

class UResourceGroupRenderComponent;

UCLASS(Blueprintable)
class WAR_API AShippingContainer : public AContainer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLinearColor> Colors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UResourceGroupRenderComponent* ResourceGroupRenderComponent;
    
    UPROPERTY(EditAnywhere, SaveGame, ReplicatedUsing=OnRep_Color)
    uint8 ColorIndex;
    
public:
    AShippingContainer();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_Color();
    
};

