#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ModifiedFoliageInfo.h"
#include "EnvironmentModificationKey.h"
#include "LandscapeDeformationManager.generated.h"

class UFoliageInstancedStaticMeshComponent;
class ALandscapeProxy;
class AEnvironmentModification;

UCLASS(Blueprintable, Config=Game)
class WAR_API ULandscapeDeformationManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ALandscapeProxy*> LandscapeCache;
    
    /*UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FEnvironmentModificationKey, AEnvironmentModification*> EnvironmentalModifications;*/
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UFoliageInstancedStaticMeshComponent*, FModifiedFoliageInfo> ModifiedFoliage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UFoliageInstancedStaticMeshComponent*> InProgressTreeRebuilds;
    
public:
    ULandscapeDeformationManager();
    UFUNCTION(BlueprintCallable, Exec)
    void DebugDrawModifiedLandscapes(float Duration);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugDrawEnvironmentalModification(float Duration);
    
};

