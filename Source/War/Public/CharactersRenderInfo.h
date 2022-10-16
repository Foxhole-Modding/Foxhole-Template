#pragma once
#include "CoreMinimal.h"
#include "FootPrintActorInfo.h"
#include "EOutfitType.h"
#include "GameFramework/Info.h"
#include "OutfitMeshInfo.h"
#include "UniformRenderInfo.h"
#include "CharacterSkinToneInfo.h"
#include "ZombieFootPrintActorInfo.h"
#include "IdleAnimation.h"
#include "PhysicalMaterialResolver.h"
#include "CharactersRenderInfo.generated.h"

UCLASS(Blueprintable)
class WAR_API ACharactersRenderInfo : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EOutfitType, FOutfitMeshInfo> OutfitInfoMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniformRenderInfo UniformInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterSkinToneInfo> MaleSkinTones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterSkinToneInfo> FemaleSkinTones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EOutfitType> OutfitsExcludedFromVips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFootPrintActorInfo> FootPrintInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZombieFootPrintActorInfo ZombieFootprintInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIdleAnimation> IdleAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhysicalMaterialResolver PhysicalMaterialResolver;
    
public:
    ACharactersRenderInfo();
};

