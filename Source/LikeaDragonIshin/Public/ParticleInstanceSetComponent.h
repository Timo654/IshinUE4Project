#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "SetParticleInfo.h"
#include "ParticleInstanceSetComponent.generated.h"

class UParticleInstanceComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API UParticleInstanceSetComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath TablePath;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UParticleInstanceComponent*> ParticleInstanceComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTransform> ParticleOffsets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSetParticleInfo> SetParticleInfo;
    
public:
    UParticleInstanceSetComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTablePath(const FSoftObjectPath& table_path);
    
    UFUNCTION(BlueprintCallable)
    void SetSortPriority(int32 SortPriority);
    
    UFUNCTION(BlueprintCallable)
    void SetSoloPlay(bool is_enable);
    
    UFUNCTION(BlueprintCallable)
    void SetEventTime(float Time);
    
    UFUNCTION(BlueprintCallable)
    void SetEventPlay(bool is_enable);
    
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
    void setColor(const FLinearColor& Color);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoDelete(bool is_auto_delete);
    
    UFUNCTION(BlueprintCallable)
    bool IsFinished();
    
    UFUNCTION(BlueprintCallable)
    bool IsAutoDelete();
    
    UFUNCTION(BlueprintCallable)
    float GetTime();
    
    UFUNCTION(BlueprintCallable)
    TArray<UParticleInstanceComponent*> GetParticleInstanceComponents();
    
    UFUNCTION(BlueprintCallable)
    void DisableSort(bool is_disable);
    
};

