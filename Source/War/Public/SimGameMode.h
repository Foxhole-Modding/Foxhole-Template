#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "WarGameMode.h"
#include "SavedCharacter.h"
#include "WarReporter.h"
#include "SimGameMode.generated.h"

class APawn;
class UResourceMapping;
class AActor;
class AOfflineCharacter;
class UPlayerProfileManager;

UCLASS(Blueprintable, NonTransient)
class WAR_API ASimGameMode : public AWarGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultAutoSavePeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultAutoSaveSlot;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APawn> DefaultBotClass;
    
private:
    UPROPERTY(EditAnywhere)
    TMap<uint32, AActor*> AssignableSpawnPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, AOfflineCharacter*> OfflineCharacterMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AOfflineCharacter> OfflineCharacterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSavedCharacter> SavedCharacterMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerProfileManager* PlayerProfileManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWarReporter WarReporter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UResourceMapping* ResourceMapping;
    
public:
    ASimGameMode();
    UFUNCTION(BlueprintCallable, Exec)
    void HeadlessServerCommand(const FString& Command);
    
    UFUNCTION(BlueprintCallable, Exec)
    void HeadlessCommand(const FString& Command);
    
};

