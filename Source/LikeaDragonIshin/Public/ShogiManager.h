#pragma once
#include "CoreMinimal.h"
#include "ActionShogiBase.h"
#include "ShogiManager.generated.h"

class AActor;
class AShogiFurigoma;
class AShogiModelManager;
class AShogiSetCPUData;
class AShogiTaikyoku;
class UInputDeviceListener;
class UMacanUIDataShogi;

UCLASS(Blueprintable)
class AShogiManager : public AActionShogiBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActionShogiBase* shogi_scene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AShogiFurigoma* furigoma;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AShogiSetCPUData* cpu_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AShogiTaikyoku* taikyoku;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Model[12];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* model_shadow[12];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AShogiModelManager* ModelManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMacanUIDataShogi* UIData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* pListener;
    
    AShogiManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetUiData(UMacanUIDataShogi* Data);
    
    UFUNCTION(BlueprintCallable)
    void SetModelManager(AShogiModelManager* manager);
    
    UFUNCTION(BlueprintCallable)
    void SetKomaModels(TArray<AActor*> komaModels, TArray<AActor*> shadowModels);
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
};

