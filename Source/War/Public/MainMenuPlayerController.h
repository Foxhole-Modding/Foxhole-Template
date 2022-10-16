#pragma once
#include "CoreMinimal.h"
#include "WarPlayerController.h"
#include "MainMenuPlayerController.generated.h"

class UNewsItemImageDownloadTask;

UCLASS(Blueprintable)
class WAR_API AMainMenuPlayerController : public AWarPlayerController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNewsItemImageDownloadTask*> ImageDownloadTaskList;
    
public:
    AMainMenuPlayerController();
    UFUNCTION(BlueprintCallable, Exec)
    void RefreshShardStatus(const int32 ShardId);
    
};

