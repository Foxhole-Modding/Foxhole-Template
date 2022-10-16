#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "TechTreeComponentItemProgress.h"
#include "DynamicOnResearchedDelegate.h"
#include "TechTreeComponent.generated.h"

class UTechTreeComponentData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UTechTreeComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTechTreeComponentData> DataClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartsCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTechTreeComponentData* Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FTechTreeComponentItemProgress> ItemProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_ItemUnlockBits, meta=(AllowPrivateAccess=true))
    int32 ItemUnlockBits;
    
    UPROPERTY(EditAnywhere, Replicated, SaveGame)
    uint8 InfrastructureModCount[5];
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynamicOnResearched DynamicOnResearched;
    
public:
    UTechTreeComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ItemUnlockBits(const int32 PreviousItemUnlockBits);
    
};

