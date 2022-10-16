#include "MiniMapCapturer.h"

AMiniMapCapturer::AMiniMapCapturer() {
    this->SceneCapture = NULL;
    this->ResultTexture = NULL;
    this->CameraAngleCorrection = 0.00f;
    this->TargetGamma = 2.20f;
}

