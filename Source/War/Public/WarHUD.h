#pragma once
#include "CoreMinimal.h"
#include "WarBaseHUD.h"
#include "EHUDMode.h"
#include "WarHUD.generated.h"

class UFont;
class UTexture2D;
class APostProcessVolume;

UCLASS(Blueprintable, NonTransient)
class WAR_API AWarHUD : public AWarBaseHUD {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHUDMode HudMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APostProcessVolume* LevelPostVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* LocalMapImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFont* OtherPlayerNamesFont;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFont* WarTimerFont;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFont* ReticleFont;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFont* MapGridFont;
    
public:
    AWarHUD();
};

