#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EMapCharactorIconCategory.h"
#include "EMapLocationIconCategory.h"
#include "IconUpdateParam.h"
#include "Templates/SubclassOf.h"
#include "MiniMapManager.generated.h"

class AMiniMapCameraActor;
class AMiniMapIconActor;
class UTexture2D;

UCLASS(Blueprintable)
class AMiniMapManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMiniMapIconActor> icon_actor_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMapLocationIconCategory, UTexture2D*> icon_texture_map;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMapCharactorIconCategory, UTexture2D*> ch_icon_texture_map;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float x_offset_standard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float z_height_standard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float z_height_delta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OrthoScaleNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OrthoScalePause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OrthoScaleSubStory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IconScale1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IconScalePause;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMiniMapCameraActor* map_camera_actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, AMiniMapIconActor*> map_icon_map;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> baseActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> hideRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> hiddens;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> substoryActors;
    
public:
    AMiniMapManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool WaitSubstoryModePrepare();
    
    UFUNCTION(BlueprintCallable)
    void updateMapIcon2(int32 icon_id, const FIconUpdateParam& Param);
    
    UFUNCTION(BlueprintCallable)
    void updateMapIcon(int32 icon_id, const FVector2D& in_pos, float in_rot);
    
    UFUNCTION(BlueprintCallable)
    void SubstoryMode(bool sw);
    
    UFUNCTION(BlueprintCallable)
    void setVisibleMapIcon(int32 icon_id, bool visible);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void getMapName() const;
    
    UFUNCTION(BlueprintCallable)
    AMiniMapCameraActor* getMapCamera();
    
    UFUNCTION(BlueprintCallable)
    void destroyMapIcon(int32 icon_id);
    
    UFUNCTION(BlueprintCallable)
    void destroyAllMapIcon();
    
    UFUNCTION(BlueprintCallable)
    int32 createMapIcon(EMapLocationIconCategory icon_cat, const FVector2D& in_pos, float in_rot, int32 z_level);
    
    UFUNCTION(BlueprintCallable)
    int32 createMapCharactorIcon(EMapCharactorIconCategory ch_cat, const FVector2D& in_pos, float in_rot, int32 z_level);
    
};

