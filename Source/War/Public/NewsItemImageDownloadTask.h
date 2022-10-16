#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "NewsItemInfo.h"
#include "NewsItemImageDownloadTask.generated.h"

class UTexture2DDynamic;
class AMainMenuPlayerController;

UCLASS(Blueprintable)
class UNewsItemImageDownloadTask : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMainMenuPlayerController* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNewsItemInfo NewsItemInfo;
    
    UNewsItemImageDownloadTask();
    UFUNCTION(BlueprintCallable)
    void OnImageDownloadSuccess(UTexture2DDynamic* Texture);
    
    UFUNCTION(BlueprintCallable)
    void OnImageDownloadFailed(UTexture2DDynamic* Texture);
    
};

