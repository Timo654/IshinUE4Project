#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "PtcVectorArray.h"
#include "Particle.generated.h"

class UMaterialInstanceDynamic;
class UParticleInstanceComponent;
class UParticleInstanceSetComponent;
class UPostProcessComponent;
class USceneCaptureComponent2D;
class USceneComponent;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API AParticle : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleInstanceComponent* ParticleInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleInstanceSetComponent* ParticleInstanceSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoDelete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAfterDetachAutoDelete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableSort;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnemyHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEventPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSoloPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bXFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisablePause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLighting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTaishiEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ParticleID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> CustomFloat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> CustomBool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FVector> CustomVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPtcVectorArray> CustomArrayVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayingParticleID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDraw2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Draw2DCameraDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* Draw2DSceneCapture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* Draw2DTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* Draw2DPostProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Draw2DMaterial;
    
public:
    AParticle(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetXFront(bool xfront);
    
    UFUNCTION(BlueprintCallable)
    void SetSortPriority(int32 sort_priority);
    
    UFUNCTION(BlueprintCallable)
    void SetSoloPlay(bool is_enable);
    
    UFUNCTION(BlueprintCallable)
    void SetPtcID(const int32 ptc_id);
    
    UFUNCTION(BlueprintCallable)
    void SetParticleID(const FString& ID);
    
    UFUNCTION(BlueprintCallable)
    void SetEventTime(float Time);
    
    UFUNCTION(BlueprintCallable)
    void SetEventPlay(bool is_enable);
    
    UFUNCTION(BlueprintCallable)
    void SetEnemyHit(bool is_enemy);
    
    UFUNCTION(BlueprintCallable)
    void SetDisablePause(bool is_disable);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomParamVector(const FName& Name, const FVector& Param);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomParamFloat(const FName& Name, float Param);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomParamBool(const FName& Name, bool Param);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomParamArrayVector(const FName& Name, const TArray<FVector>& Params);
    
    UFUNCTION(BlueprintCallable)
    void setColor(const FLinearColor& NewColor);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoDelete(bool auto_delete);
    
    UFUNCTION(BlueprintCallable)
    void SetAfterDetachAutoDelete(bool auto_delete);
    
    UFUNCTION(BlueprintCallable)
    bool IsFinished();
    
    UFUNCTION(BlueprintCallable)
    bool IsEventPlay();
    
    UFUNCTION(BlueprintCallable)
    float GetTime();
    
    UFUNCTION(BlueprintCallable)
    UTextureRenderTarget2D* GetDraw2DTexture();
    
    UFUNCTION(BlueprintCallable)
    void FadeOut(float Time);
    
    UFUNCTION(BlueprintCallable)
    void Draw2DMode(UTextureRenderTarget2D* Texture);
    
    UFUNCTION(BlueprintCallable)
    void DisableSort(bool is_disable);
    
};

