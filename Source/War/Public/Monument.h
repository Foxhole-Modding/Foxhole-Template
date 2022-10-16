#pragma once
#include "CoreMinimal.h"
#include "EMonumentType.h"
#include "GameFramework/Actor.h"
#include "Monument.generated.h"

class UStaticMeshComponent;
class UStaticMesh;
class UUseMonumentComponent;

UCLASS(Blueprintable)
class WAR_API AMonument : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MonumentMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStaticMesh*> MonumentTypeMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUseMonumentComponent* UseMonumentComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MonumentIndex;
    
    UPROPERTY(EditAnywhere)
    EMonumentType MonumentType;
    
public:
    AMonument();
};

