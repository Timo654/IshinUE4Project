#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "ActionMovieWindow.generated.h"

class UInputDeviceListener;

UCLASS(Blueprintable)
class UActionMovieWindow : public UActionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* m_listener;
    
public:
    UActionMovieWindow();

};

