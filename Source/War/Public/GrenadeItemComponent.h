#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ThrowingStabilityInfo.h"
#include "ItemComponent.h"
#include "ActivityStateChange.h"
#include "CharacterInvokeInfo.h"
#include "UObject/NoExportTypes.h"
#include "GrenadeItemComponent.generated.h"

class AWarProjectile;
class USoundCue;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UGrenadeItemComponent : public UItemComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWarProjectile> GrenadeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostTossDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimLineThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanCook;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FThrowingStabilityInfo ThrowingStabilityInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* PinPullSound;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsEquipped, meta=(AllowPrivateAccess=true))
    bool bIsEquipped;
    
public:
    UGrenadeItemComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerThrowGrenade(const FCharacterInvokeInfo WeaponInvokeInfo, FVector TossVelocity, FVector MouseCastStart, FVector MouseCastEnd);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartThrowingState(const FCharacterInvokeInfo WeaponInvokeInfo, float SecondsOnFuse, FVector TossVelocity, FActivityStateChange ActivityStateChange, FVector MouseCastStart, FVector MouseCastEnd);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartInvoke(FActivityStateChange ActivityStateChange);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsEquipped();
    
};

