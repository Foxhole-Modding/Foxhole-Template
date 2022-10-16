#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MapInfo.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class WAR_API AMapInfo : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* MapImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* MapImagePractice;
    
    AMapInfo();
};

