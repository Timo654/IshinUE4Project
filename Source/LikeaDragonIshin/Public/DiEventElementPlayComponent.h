#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DiEventParams_ConditionsFolder.h"
#include "DiEventElementPlayComponent.generated.h"

class ADiEventSequenceActor;
class UDiEventElementPlayerBase;
class UDvEffectData;
class ULevelSequencePlayer;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API UDiEventElementPlayComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Guid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CameraIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiEventParams_ConditionsFolder ConditionsFolder;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDiEventElementPlayerBase*> m_ElementPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDvEffectData* m_DvEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ADiEventSequenceActor* m_DiEventSequenceActor;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    double m_CurrentFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_IsAnimNotifyPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_EffectOpacity;
    
public:
    UDiEventElementPlayComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SkipElement(ADiEventSequenceActor* di_event_sequence_actor, const FString& level_prefix, UObject* WorldContextObject, int32 camera_index, float jump_frame, bool jump_backword);
    
    UFUNCTION(BlueprintCallable)
    void OnElementRepeat(const FString& element_guid, const FString& Type);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CreateDiEventElementEdit(ULevelSequencePlayer* sequence_player, ADiEventSequenceActor* di_event_sequence_actor, const FString& level_prefix, UObject* WorldContextObject, int32 camera_index, float jump_frame);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CreateDiEventElement(ADiEventSequenceActor* di_event_sequence_actor, const FString& level_prefix, UObject* WorldContextObject, int32 camera_index);
    
    UFUNCTION(BlueprintCallable)
    static void CloseDiEventElement(ADiEventSequenceActor* di_event_sequence_actor);
    
};

