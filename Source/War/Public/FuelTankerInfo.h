#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FuelQuantity.h"
#include "FuelTankerInfo.generated.h"

class AActor;
class UStealthComponent;
class UMaterialInterface;
class UItemHolderComponent;
class UGenericStockpileComponent;
class UAudioComponent;
class USoundCue;
class UCableComponent;

USTRUCT(BlueprintType)
struct FFuelTankerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    AActor* OwnerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, NotReplicated, meta=(AllowPrivateAccess=true))
    UItemHolderComponent* OwnerItemHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, NotReplicated, meta=(AllowPrivateAccess=true))
    UGenericStockpileComponent* OwnerGenericStockpile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, NotReplicated, meta=(AllowPrivateAccess=true))
    UStealthComponent* OwnerStealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, NotReplicated, meta=(AllowPrivateAccess=true))
    UAudioComponent* RefuelAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    float AmountRefueledPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    float RefuelCycleDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    FVector FuelLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    USoundCue* RefuelActivateSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    USoundCue* RefuelSoundLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    UMaterialInterface* RefuelCableMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, NotReplicated, meta=(AllowPrivateAccess=true))
    UCableComponent* RefuelCableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActorToRefuel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FFuelQuantity FuelBuffer;
    
    WAR_API FFuelTankerInfo();
};

