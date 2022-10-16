#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SavedActor.generated.h"

USTRUCT(BlueprintType)
struct FSavedActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLoadedFromMap;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> ByteStream;
    
    WAR_API FSavedActor();
};

