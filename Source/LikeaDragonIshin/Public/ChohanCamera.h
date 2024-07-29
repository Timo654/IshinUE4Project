#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ChohanCamera.generated.h"

UCLASS(Blueprintable)
class AChohanCamera : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFinishGame;
    
    AChohanCamera(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTundereCamera();
    
    UFUNCTION(BlueprintCallable)
    void SetTuboFuriCamera();
    
    UFUNCTION(BlueprintCallable)
    void SetShitekiGoCamera();
    
    UFUNCTION(BlueprintCallable)
    void SetShitekiCamera2();
    
    UFUNCTION(BlueprintCallable)
    void SetShitekiCamera1();
    
    UFUNCTION(BlueprintCallable)
    void SetRetryCamera();
    
    UFUNCTION(BlueprintCallable)
    void SetResultCamera();
    
    UFUNCTION(BlueprintCallable)
    void SetOpeningCamera();
    
    UFUNCTION(BlueprintCallable)
    void SetMihariCamera();
    
    UFUNCTION(BlueprintCallable)
    void SetKatagoshiPlayerCamera();
    
    UFUNCTION(BlueprintCallable)
    void SetKatagoshiCamera();
    
    UFUNCTION(BlueprintCallable)
    void SetJarSetCamera(bool bSashi);
    
    UFUNCTION(BlueprintCallable)
    void SetJarOpenCamera2();
    
    UFUNCTION(BlueprintCallable)
    void SetJarOpenCamera1();
    
    UFUNCTION(BlueprintCallable)
    void SetJarOpenCamera();
    
    UFUNCTION(BlueprintCallable)
    void SetFirstCamera();
    
    UFUNCTION(BlueprintCallable)
    void SetFavUpCamera();
    
    UFUNCTION(BlueprintCallable)
    void SetBeforeJarOpenCamera();
    
};

