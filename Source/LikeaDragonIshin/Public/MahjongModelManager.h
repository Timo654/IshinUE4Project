#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EMahjongPaiTextureCategory.h"
#include "EMahjongPaiTextureNumber.h"
#include "MahjongModelManager.generated.h"

class AMahjongPaiBase;
class USceneCaptureComponent2D;

UCLASS(Blueprintable)
class AMahjongModelManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMahjongPaiBase*> PaiModels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMahjongPaiBase*> ResultPaiModels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMahjongPaiBase*> ResultDoraPaiModels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMahjongPaiBase*> ResultUraDoraPaiModels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMahjongPaiBase*> RiichiPaiModels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> RiichiBarModels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* RiichiCameraCaptureComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* ResultCameraCaptureComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPaiCount;
    
    AMahjongModelManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTextureRiichiPai(int32 ID, EMahjongPaiTextureCategory category, EMahjongPaiTextureNumber Number);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTextureResultUraDoraPai(int32 ID, EMahjongPaiTextureCategory category, EMahjongPaiTextureNumber Number, bool isAka);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTextureResultPai(int32 ID, EMahjongPaiTextureCategory category, EMahjongPaiTextureNumber Number, bool isAka);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTextureResultDoraPai(int32 ID, EMahjongPaiTextureCategory category, EMahjongPaiTextureNumber Number, bool isAka);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTexturePai(int32 ID, EMahjongPaiTextureCategory category, EMahjongPaiTextureNumber Number, bool isAka);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetResistrationResultPai();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DeletePai(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreatePai(EMahjongPaiTextureCategory category, EMahjongPaiTextureNumber Number, bool isAka);
    
};

