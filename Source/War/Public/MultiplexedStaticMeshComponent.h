#pragma once
#include "CoreMinimal.h"
#include "MeshStop.h"
#include "Components/ActorComponent.h"
#include "SelectedMeshChangedDelegateDelegate.h"
#include "MultiplexedStaticMeshComponent.generated.h"

class UParticleSystem;
class USoundCue;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UMultiplexedStaticMeshComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMeshStop> MeshStops;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InputValue;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 SelectedMeshIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* TransitionDownFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* TransitionUpSoundCue;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSelectedMeshChangedDelegate OnSelectedMeshChanged;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enabled;
    
    UMultiplexedStaticMeshComponent();
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool IsEnabled);
    
};

