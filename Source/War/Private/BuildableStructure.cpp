#include "BuildableStructure.h"
#include "Net/UnrealNetwork.h"

void ABuildableStructure::OnRep_PathSockets() {
}

void ABuildableStructure::OnRep_ModificationMask(const uint32 PreviousModificationMask) {
}

void ABuildableStructure::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildableStructure, PathSockets);
    DOREPLIFETIME(ABuildableStructure, ModificationMask);
    DOREPLIFETIME(ABuildableStructure, ConnectorConfiguration);
}

ABuildableStructure::ABuildableStructure() {
    this->SnappablePathSocketClass = NULL;
    this->Tier = EFortTier::None;
    this->ModificationMask = 0;
    this->bDisableModificationSlotValidation = false;
    this->bOnlyMigratePipesModification = false;
    this->bReadOnlyModifications = false;
    this->ProceduralUseVolumeFactor = 1.05f;
    this->bDoUpgradeObstructionCheck = false;
    this->bIgnoreNoBuildAreas = false;
    this->bIsBuiltOnLandscape = true;
    this->bBuildOnBridges = false;
    this->bBuildOnWater = false;
    this->bIsBuiltOnFoundation = false;
    this->bIsPartiallyBuiltOnFoundation = false;
    this->bAllowFloating = false;
    this->bLinearAttachment = false;
    this->LinearAttachmentTolerance = 10.00f;
    this->MaxAttachmentGroupSize = 0;
    this->MapBoundaryBuildRule = EMapBoundaryBuildRule::NotBuildableNearBorder;
    this->bIsConnector = false;
    this->bIsManualConnector = false;
    this->ConnectorMinLength = 0.00f;
    this->ConnectorMaxLength = 800.00f;
    this->MinLengthMaxHealthModifier = 1.00f;
    this->ConnectorMinWidth = 130.00f;
    this->bConnectorCanSnapUnderRoads = false;
    this->BuildSiteClass = NULL;
    this->BaseStructureClass = NULL;
    this->bClearModificationsOnDowngrade = false;
    this->Icon = NULL;
    this->BuildCategory = EBuildCategory::Default;
    this->BuildLocationType = EBuildLocationType::None;
    this->DestroyedDamageRadius = 0.00f;
    this->bDropsLargeMaterialsWhenDestroyed = true;
    this->bIsFillStructureProxy = false;
    this->MinDistanceToSameStructure = 0.00f;
    this->bIsVehicleProxy = false;
    this->bRequiresVehicleToBuild = false;
    this->bRequiresShovelToBuild = false;
    this->bIsInitiallyDestroyed = false;
    this->FactionVariant = EFactionId::NoTeam;
    this->bUsesImpactsMaterial = false;
}

