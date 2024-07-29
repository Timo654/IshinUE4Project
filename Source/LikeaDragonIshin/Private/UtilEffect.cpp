#include "UtilEffect.h"

UUtilEffect::UUtilEffect() {
}

void UUtilEffect::WorldToView(const UObject* WorldContextObject, const FVector& Location, FVector& View) {
}

void UUtilEffect::WorldToScreenUV(const UObject* WorldContextObject, const FVector& Location, FVector& UV) {
}

bool UUtilEffect::WorldToScreenForWidget(const UObject* WorldContextObject, const FVector& Location, FVector2D& WidgetPos) {
    return false;
}

void UUtilEffect::SetMaterialMatrix4x3(UMaterialInstanceDynamic* Material, FName ParameterName, const FMatrix& Matrix) {
}

void UUtilEffect::SetMaterialMatrix(UMaterialInstanceDynamic* Material, FName ParameterName, const FMatrix& Matrix) {
}

void UUtilEffect::SetMaterialCustomMatrix4x3(UMaterialInstanceDynamic* Material, const FMatrix& Matrix) {
}

void UUtilEffect::SetMaterialCustomMatrix(UMaterialInstanceDynamic* Material, const FMatrix& Matrix) {
}

void UUtilEffect::SetActorLabelNoFlashAddLabelInfo(const UObject* WorldContextObject, AActor* Actor, const FString& Name, const FString& AddLabelInfo) {
}

void UUtilEffect::SetActorLabelNoFlash(const UObject* WorldContextObject, AActor* Actor, const FString& Name) {
}

void UUtilEffect::ScreenQuadToScreenUV(const FVector2D& ScreenPosMin, const FVector2D& ScreenPosMax, FVector2D& ScreenUVMin, FVector2D& ScreenUVMax) {
}

void UUtilEffect::GetSceneViewProjectionMatrix(const UObject* WorldContextObject, FMatrix& ViewProjectionMatrix) {
}

void UUtilEffect::GetSceneViewMatrix(const UObject* WorldContextObject, FMatrix& ViewMatrix) {
}

void UUtilEffect::GetSceneProjectionMatrix(const UObject* WorldContextObject, FMatrix& ProjectionMatrix) {
}

FVector2D UUtilEffect::GetGameViewportSize() {
    return FVector2D{};
}

FVector2D UUtilEffect::GetGameResolution() {
    return FVector2D{};
}

void UUtilEffect::GetEffectCollisionTypes(TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes) {
}

void UUtilEffect::GetCameraTransform(const UObject* WorldContextObject, FTransform& Transform) {
}

void UUtilEffect::GetCameraLocation(const UObject* WorldContextObject, FVector& Location) {
}

void UUtilEffect::GetCameraFOV(const UObject* WorldContextObject, float& FOV) {
}

void UUtilEffect::GetCameraDistance(const UObject* WorldContextObject, const FVector& Location, float& Distance) {
}

void UUtilEffect::GetCameraDirection(const UObject* WorldContextObject, FVector& Direction) {
}

TArray<FVector> UUtilEffect::GetAllNiagaraParticlePositions_DebugOnly(UNiagaraComponent* Niagara) {
    return TArray<FVector>();
}

void UUtilEffect::DrawDebugLocalPos(const UObject* WorldContextObject, const FTransform& trans) {
}

void UUtilEffect::DrawDebugLocalArrow(const UObject* WorldContextObject, const FTransform& trans) {
}

void UUtilEffect::CreateScreenQuadToWorldQuadMesh(const UObject* WorldContextObject, UProceduralMeshComponent* ProceduralMesh, const FVector2D& ScreenLocationMin, const FVector2D& ScreenLocationMax, const FVector& Location, float DepthOffset) {
}

void UUtilEffect::CreateBoxMesh(UProceduralMeshComponent* ProceduralMesh, const TArray<FVector> Vertices, bool IsBackFace) {
}

void UUtilEffect::CreateBoxLine(UProceduralMeshComponent* ProceduralMesh, const TArray<FVector> Vertices) {
}

void UUtilEffect::CreateAABoxMesh(UProceduralMeshComponent* ProceduralMesh, const FVector& Center, const FVector& Extent) {
}

void UUtilEffect::CreateAABoxLine(UProceduralMeshComponent* ProceduralMesh, const FVector& Center, const FVector& Extent) {
}

bool UUtilEffect::CheckEffectCollisionSphere(const UObject* WorldContextObject, const FVector& Start, const FVector& End, float Radius, FHitResult& result, bool IsDebugDisp) {
    return false;
}

bool UUtilEffect::CheckEffectCollisionLine(const UObject* WorldContextObject, const FVector& Start, const FVector& End, FHitResult& result, bool IsDebugDisp) {
    return false;
}

void UUtilEffect::CalcProjectionMatrixByScreenUV(const UObject* WorldContextObject, const FVector2D& ScreenUVMin, const FVector2D& ScreenUVMax, FMatrix& ProjectionMatrix, bool& is_visible) {
}

void UUtilEffect::AddOnScreenDebugMessage_Effect(const FString& text) {
}

void UUtilEffect::AABoxToScreenQuad(const UObject* WorldContextObject, UProceduralMeshComponent* ProceduralMesh, FVector2D& ScreenPosMin, FVector2D& ScreenPosMax) {
}


