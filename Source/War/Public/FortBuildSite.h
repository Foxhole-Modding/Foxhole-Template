#pragma once
#include "CoreMinimal.h"
#include "StructureBuildSite.h"
#include "PowerNode.h"
#include "FortBuildSite.generated.h"

UCLASS(Blueprintable)
class WAR_API AFortBuildSite : public AStructureBuildSite, public IPowerNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    bool bCanPassThroughPower;
    
    AFortBuildSite();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    
    // Fix for true pure virtual functions not being implemented
};

