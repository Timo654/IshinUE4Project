#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ECHOHAN_TALK_ID.h"
#include "ECHOHAN_TALK_TYPE.h"
#include "ChohanMessage.generated.h"

UCLASS(Blueprintable)
class AChohanMessage : public AActor {
    GENERATED_BODY()
public:
    AChohanMessage(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TalkStart(ECHOHAN_TALK_TYPE talkType, ECHOHAN_TALK_ID talkId, bool isStay);
    
    UFUNCTION(BlueprintCallable)
    void TalkRestart();
    
    UFUNCTION(BlueprintCallable)
    void TalkEndStop();
    
    UFUNCTION(BlueprintCallable)
    void TalkEnd();
    
    UFUNCTION(BlueprintCallable)
    bool IsTalking();
    
    UFUNCTION(BlueprintCallable)
    bool IsPageEnd();
    
    UFUNCTION(BlueprintCallable)
    int32 GetNowPage();
    
    UFUNCTION(BlueprintCallable)
    void Exec();
    
};

