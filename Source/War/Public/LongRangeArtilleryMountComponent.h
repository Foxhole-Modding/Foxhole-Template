#pragma once
#include "CoreMinimal.h"
#include "MountComponent.h"
#include "LongRangeArtilleryMountComponent.generated.h"

class USoundCue;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API ULongRangeArtilleryMountComponent : public UMountComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ReloadSoundCue;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtendedMaxDistance;
    
    UPROPERTY(EditAnywhere, Replicated)
    int8 Ammo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanDeploySelf;
    
public:
    ULongRangeArtilleryMountComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetDesiredPitch(const float Pitch);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerFireShell();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDeploySelf();
    
};

