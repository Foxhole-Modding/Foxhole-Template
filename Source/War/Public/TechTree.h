#pragma once
#include "CoreMinimal.h"
#include "TechTreeCategories.h"
#include "GameFramework/Info.h"
#include "ETechID.h"
#include "TechTreeItemInfo.h"
#include "TechTree.generated.h"

UCLASS(Blueprintable)
class WAR_API ATechTree : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TMap<ETechID, FTechTreeItemInfo> ItemInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FTechTreeCategories Categories;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_TechUnlockBits)
    TArray<uint32> TechUnlockBits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<float> TechUnlockProgress;
    
public:
    ATechTree();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_TechUnlockBits(const TArray<uint32>& PreviousTechUnlockBits);
    
};

