#pragma once
#include "CoreMinimal.h"
#include "ItemComponent.h"
#include "MultiAmmo.h"
#include "MultiAmmoItemComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UMultiAmmoItemComponent : public UItemComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MultiAmmo, meta=(AllowPrivateAccess=true))
    FMultiAmmo MultiAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsEquipped, meta=(AllowPrivateAccess=true))
    bool bIsEquipped;
    
public:
    UMultiAmmoItemComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetDesiredAmmoType(FName InDesiredAmmoType);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MultiAmmo();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsEquipped();
    
};

