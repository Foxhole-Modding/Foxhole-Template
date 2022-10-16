#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BoundaryHex.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class WAR_API ABoundaryHex : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* EditorMesh;
    
public:
    ABoundaryHex();
};

