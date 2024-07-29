#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "MiniMapCameraActor.generated.h"

class USceneCaptureComponent2D;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class AMiniMapCameraActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float rot_camera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float rot_chara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isInsightDestination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float rot_destination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* RT_Map;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* rt_minimap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* SceneCapture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isChangeMiniMapTexture;
    
    AMiniMapCameraActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetStreetActorBlink(AActor* Actor, float Opacity, FColor Color);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGuidePostDestination(bool IsValid, const FVector& Pos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetActorVisible(AActor* Actor, bool sw);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetStreetActorMaterial(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetMarkerDestination();
    
    UFUNCTION(BlueprintCallable)
    void onSetRotation_BP(float cam_rot, float chara_rot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void onSetRotation(float cam_rot, float chara_rot);
    
    UFUNCTION(BlueprintCallable)
    void onSetPosition_BP(const FVector& Pos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void onSetPosition(const FVector& Pos);
    
    UFUNCTION(BlueprintCallable)
    void onSetOrthoWidge_BP(float Size);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void onSetOrthoWidge(float Size);
    
    UFUNCTION(BlueprintCallable)
    void onSetNorthUp_BP(bool isNorthUp);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void onSetNorthUp(bool isNorthUp);
    
    UFUNCTION(BlueprintCallable)
    void onSetDestination_BP(bool IsValid, const FVector& Pos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void onSetDestination(bool IsValid, const FVector& Pos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool LoadWaitSubStoryMap();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadSubStoryMap(bool sw);
    
    UFUNCTION(BlueprintCallable)
    void getRotation(float& camera_rotation, float& chara_rotation, bool& destination_insight, float& destination_rotation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Capture();
    
    UFUNCTION(BlueprintCallable)
    void addShowOnlyActorMapIcon_BP(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void addShowOnlyActorMapIcon(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void addShowOnlyActorMap_BP(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void addShowOnlyActorMap(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddMarkerDestination(const FVector& Pos);
    
};

