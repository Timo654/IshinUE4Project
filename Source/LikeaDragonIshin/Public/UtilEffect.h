#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "UtilEffect.generated.h"

class AActor;
class UMaterialInstanceDynamic;
class UNiagaraComponent;
class UObject;
class UProceduralMeshComponent;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UUtilEffect : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUtilEffect();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void WorldToView(const UObject* WorldContextObject, const FVector& Location, FVector& View);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void WorldToScreenUV(const UObject* WorldContextObject, const FVector& Location, FVector& UV);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool WorldToScreenForWidget(const UObject* WorldContextObject, const FVector& Location, FVector2D& WidgetPos);
    
    UFUNCTION(BlueprintCallable)
    static void SetMaterialMatrix4x3(UMaterialInstanceDynamic* Material, FName ParameterName, const FMatrix& Matrix);
    
    UFUNCTION(BlueprintCallable)
    static void SetMaterialMatrix(UMaterialInstanceDynamic* Material, FName ParameterName, const FMatrix& Matrix);
    
    UFUNCTION(BlueprintCallable)
    static void SetMaterialCustomMatrix4x3(UMaterialInstanceDynamic* Material, const FMatrix& Matrix);
    
    UFUNCTION(BlueprintCallable)
    static void SetMaterialCustomMatrix(UMaterialInstanceDynamic* Material, const FMatrix& Matrix);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetActorLabelNoFlashAddLabelInfo(const UObject* WorldContextObject, AActor* Actor, const FString& Name, const FString& AddLabelInfo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetActorLabelNoFlash(const UObject* WorldContextObject, AActor* Actor, const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    static void ScreenQuadToScreenUV(const FVector2D& ScreenPosMin, const FVector2D& ScreenPosMax, UPARAM(Ref) FVector2D& ScreenUVMin, UPARAM(Ref) FVector2D& ScreenUVMax);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetSceneViewProjectionMatrix(const UObject* WorldContextObject, FMatrix& ViewProjectionMatrix);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetSceneViewMatrix(const UObject* WorldContextObject, FMatrix& ViewMatrix);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetSceneProjectionMatrix(const UObject* WorldContextObject, FMatrix& ProjectionMatrix);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D GetGameViewportSize();
    
    UFUNCTION(BlueprintCallable)
    static FVector2D GetGameResolution();
    
    UFUNCTION(BlueprintCallable)
    static void GetEffectCollisionTypes(TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetCameraTransform(const UObject* WorldContextObject, FTransform& Transform);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetCameraLocation(const UObject* WorldContextObject, FVector& Location);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetCameraFOV(const UObject* WorldContextObject, float& FOV);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetCameraDistance(const UObject* WorldContextObject, const FVector& Location, float& Distance);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetCameraDirection(const UObject* WorldContextObject, FVector& Direction);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FVector> GetAllNiagaraParticlePositions_DebugOnly(UNiagaraComponent* Niagara);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawDebugLocalPos(const UObject* WorldContextObject, const FTransform& trans);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawDebugLocalArrow(const UObject* WorldContextObject, const FTransform& trans);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CreateScreenQuadToWorldQuadMesh(const UObject* WorldContextObject, UProceduralMeshComponent* ProceduralMesh, const FVector2D& ScreenLocationMin, const FVector2D& ScreenLocationMax, const FVector& Location, float DepthOffset);
    
    UFUNCTION(BlueprintCallable)
    static void CreateBoxMesh(UProceduralMeshComponent* ProceduralMesh, const TArray<FVector> Vertices, bool IsBackFace);
    
    UFUNCTION(BlueprintCallable)
    static void CreateBoxLine(UProceduralMeshComponent* ProceduralMesh, const TArray<FVector> Vertices);
    
    UFUNCTION(BlueprintCallable)
    static void CreateAABoxMesh(UProceduralMeshComponent* ProceduralMesh, const FVector& Center, const FVector& Extent);
    
    UFUNCTION(BlueprintCallable)
    static void CreateAABoxLine(UProceduralMeshComponent* ProceduralMesh, const FVector& Center, const FVector& Extent);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CheckEffectCollisionSphere(const UObject* WorldContextObject, const FVector& Start, const FVector& End, float Radius, FHitResult& result, bool IsDebugDisp);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CheckEffectCollisionLine(const UObject* WorldContextObject, const FVector& Start, const FVector& End, FHitResult& result, bool IsDebugDisp);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CalcProjectionMatrixByScreenUV(const UObject* WorldContextObject, const FVector2D& ScreenUVMin, const FVector2D& ScreenUVMax, FMatrix& ProjectionMatrix, bool& is_visible);
    
    UFUNCTION(BlueprintCallable)
    static void AddOnScreenDebugMessage_Effect(const FString& text);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AABoxToScreenQuad(const UObject* WorldContextObject, UProceduralMeshComponent* ProceduralMesh, UPARAM(Ref) FVector2D& ScreenPosMin, UPARAM(Ref) FVector2D& ScreenPosMax);
    
};

