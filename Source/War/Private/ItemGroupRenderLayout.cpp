#include "ItemGroupRenderLayout.h"

FItemGroupRenderLayout::FItemGroupRenderLayout() {
    this->StaticMesh = NULL;
    this->MaxAmount = 0;
    this->MeshSizeZ = 0.00f;
    this->YawJitter = 0.00f;
    this->PitchJitter = 0.00f;
    this->RollJitter = 0.00f;
    this->OffsetJitter = 0.00f;
    this->ScaleJitter = 0.00f;
    this->LayerScaleDownFactor = 0.00f;
    this->bAllowFlipX = false;
    this->bAllowFlipZ = false;
    this->bAllowOddLayerRotation = false;
    this->LocalScale = 0.00f;
    this->bIgnoreGenerateLayoutData = false;
}

