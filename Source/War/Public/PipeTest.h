#pragma once
#include "CoreMinimal.h"
#include "BuildableStructure.h"
#include "PipeTest.generated.h"

class UBuildSocketComponent;
class USplineConnectorComponent;

UCLASS(Blueprintable)
class WAR_API APipeTest : public ABuildableStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USplineConnectorComponent* SplineConnector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBuildSocketComponent* BackSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBuildSocketComponent* FrontSocket;
    
    APipeTest();
};

